/*#include <iostream>
#include <string>
#include <vector>

class Account {
protected:
    std::string accountNumber;
    std::string ownerName;
    double balance;

public:
    Account(std::string number, std::string name, double initialBalance)
        : accountNumber(number), ownerName(name), balance(initialBalance) {}

    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Đã nạp " << amount << " vào tài khoản." << std::endl;
        } else {
            std::cout << "Số tiền không hợp lệ." << std::endl;
        }
    }

    virtual bool withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            std::cout << "Đã rút " << amount << " từ tài khoản." << std::endl;
            return true;
        } else {
            std::cout << "Không thể rút tiền. Số dư không đủ hoặc số tiền không hợp lệ." << std::endl;
            return false;
        }
    }

    virtual void displayInfo() const {
        std::cout << "Số tài khoản: " << accountNumber << std::endl;
        std::cout << "Chủ tài khoản: " << ownerName << std::endl;
        std::cout << "Số dư: " << balance << std::endl;
    }

    bool transfer(Account* toAccount, double amount) {
        if (withdraw(amount)) {
            toAccount->deposit(amount);
            std::cout << "Đã chuyển " << amount << " từ tài khoản " << accountNumber 
                      << " sang tài khoản " << toAccount->accountNumber << "." << std::endl;
            return true;
        }
        return false;
    }

    std::string getAccountNumber() const {
        return accountNumber;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(std::string number, std::string name, double initialBalance, double rate)
        : Account(number, name, initialBalance), interestRate(rate) {}

    void applyInterest() {
        double interest = balance * interestRate;
        deposit(interest);
        std::cout << "Đã cộng lãi: " << interest << std::endl;
    }

    void displayInfo() const override {
        Account::displayInfo();
        std::cout << "Lãi suất: " << (interestRate * 100) << "%" << std::endl;
    }
};

class CheckingAccount : public Account {
private:
    double overdraftLimit;

public:
    CheckingAccount(std::string number, std::string name, double initialBalance, double limit)
        : Account(number, name, initialBalance), overdraftLimit(limit) {}

    bool withdraw(double amount) override {
        if (amount > 0 && (balance + overdraftLimit) >= amount) {
            balance -= amount;
            std::cout << "Đã rút " << amount << " từ tài khoản." << std::endl;
            return true;
        } else {
            std::cout << "Không thể rút tiền. Vượt quá giới hạn thấu chi hoặc số tiền không hợp lệ." << std::endl;
            return false;
        }
    }

    void displayInfo() const override {
        Account::displayInfo();
        std::cout << "Giới hạn thấu chi: " << overdraftLimit << std::endl;
    }
};

class FixedDepositAccount : public Account {
private:
    double interestRate;
    int depositTerm; // Thời hạn gửi tiền (tháng)

public:
    FixedDepositAccount(std::string number, std::string name, double initialBalance, double rate, int term)
        : Account(number, name, initialBalance), interestRate(rate), depositTerm(term) {}

    void applyInterest() {
        double interest = balance * interestRate;
        deposit(interest);
        std::cout << "Đã cộng lãi: " << interest << " cho tài khoản cố định." << std::endl;
    }

    void displayInfo() const override {
        Account::displayInfo();
        std::cout << "Lãi suất: " << (interestRate * 100) << "%, Thời hạn gửi: " << depositTerm << " tháng" << std::endl;
    }

    bool withdraw(double amount) override {
        std::cout << "Không thể rút tiền từ tài khoản cố định trong thời hạn gửi." << std::endl;
        return false;
    }
};

class Bank {
private:
    std::vector<Account*> accounts;

public:
    void addAccount(Account* account) {
        accounts.push_back(account);
    }

    void displayAllAccounts() const {
        for (const auto& account : accounts) {
            account->displayInfo();
            std::cout << "------------------------" << std::endl;
        }
    }

    Account* findAccount(const std::string& accountNumber) const {
        for (const auto& account : accounts) {
            if (account->getAccountNumber() == accountNumber) {
                return account;
            }
        }
        std::cout << "Tài khoản không tìm thấy." << std::endl;
        return nullptr;
    }

    ~Bank() {
        for (auto account : accounts) {
            delete account;
        }
    }
};

void showMenu() {
    std::cout << "------ Menu Ngân Hàng ------" << std::endl;
    std::cout << "1. Hiển thị tất cả tài khoản" << std::endl;
    std::cout << "2. Tìm kiếm tài khoản" << std::endl;
    std::cout << "3. Nạp tiền vào tài khoản" << std::endl;
    std::cout << "4. Rút tiền từ tài khoản" << std::endl;
    std::cout << "5. Chuyển tiền giữa các tài khoản" << std::endl;
    std::cout << "6. Thoát" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Chọn một tùy chọn: ";
}

int main() {
    Bank myBank;
    myBank.addAccount(new SavingsAccount("SA001", "Nguyen Van A", 1000000, 0.05));
    myBank.addAccount(new CheckingAccount("CA001", "Tran Thi B", 2000000, 500000));

    int choice;
    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Thông tin tất cả tài khoản:" << std::endl;
                myBank.displayAllAccounts();
                break;
            case 2: {
                std::string accountNumber;
                std::cout << "Nhập số tài khoản cần tìm: ";
                std::cin >> accountNumber;
                Account* foundAccount = myBank.findAccount(accountNumber);
                if (foundAccount) {
                    std::cout << "Tìm thấy tài khoản:" << std::endl;
                    foundAccount->displayInfo();
                }
                break;
            }
            case 3: {
                std::string accountNumber;
                double amount;
                std::cout << "Nhập số tài khoản: ";
                std::cin >> accountNumber;
                std::cout << "Nhập số tiền cần nạp: ";
                std::cin >> amount;
                Account* account = myBank.findAccount(accountNumber);
                if (account) {
                    account->deposit(amount);
                }
                break;
            }
            case 4: {
                std::string accountNumber;
                double amount;
                std::cout << "Nhập số tài khoản: ";
                std::cin >> accountNumber;
                std::cout << "Nhập số tiền cần rút: ";
                std::cin >> amount;
                Account* account = myBank.findAccount(accountNumber);
                if (account) {
                    account->withdraw(amount);
                }
                break;
            }
            case 5: {
                std::string fromAccountNumber, toAccountNumber;
                double amount;
                std::cout << "Nhập số tài khoản nguồn: ";
                std::cin >> fromAccountNumber;
                std::cout << "Nhập số tài khoản đích: ";
                std::cin >> toAccountNumber;
                std::cout << "Nhập số tiền cần chuyển: ";
                std::cin >> amount;
                Account* fromAccount = myBank.findAccount(fromAccountNumber);
                Account* toAccount = myBank.findAccount(toAccountNumber);
                if (fromAccount && toAccount) {
                    fromAccount->transfer(toAccount, amount);
                }
                break;
            }
            case 6:
                std::cout << "Cảm ơn bạn đã sử dụng dịch vụ ngân hàng!" << std::endl;
                break;
            default:
                std::cout << "Tùy chọn không hợp lệ. Vui lòng chọn lại." << std::endl;
        }
    } while (choice != 6);

    return 0;
}*/
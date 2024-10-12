#include <iostream>
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

    virtual bool transfer(Account* toAccount, double amount) {
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
    int term; // Thời hạn cố định (số tháng)

public:
    FixedDepositAccount(std::string number, std::string name, double initialBalance, double rate, int termMonths)
        : Account(number, name, initialBalance), interestRate(rate), term(termMonths) {}

    void applyInterest() {
        double interest = balance * interestRate;
        deposit(interest);
        std::cout << "Đã cộng lãi cố định: " << interest << " cho tài khoản." << std::endl;
    }

    void displayInfo() const override {
        Account::displayInfo();
        std::cout << "Lãi suất: " << (interestRate * 100) << "%, Thời hạn: " << term << " tháng" << std::endl;
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

    Account* findAccount(const std::string& accountNumber) {
        for (auto& account : accounts) {
            if (account->getAccountNumber() == accountNumber) {
                return account;
            }
        }
        std::cout << "Không tìm thấy tài khoản." << std::endl;
        return nullptr;
    }

    ~Bank() {
        for (auto account : accounts) {
            delete account;
        }
    }
};

void displayMenu() {
    std::cout << "---- Menu Ngân Hàng ----" << std::endl;
    std::cout << "1. Hiển thị tất cả tài khoản" << std::endl;
    std::cout << "2. Tìm kiếm tài khoản" << std::endl;
    std::cout << "3. Chuyển tiền" << std::endl;
    std::cout << "4. Thoát" << std::endl;
}

int main() {
    Bank myBank;
    myBank.addAccount(new SavingsAccount("SA001", "Nguyen Van A", 1000000, 0.05));
    myBank.addAccount(new CheckingAccount("CA001", "Tran Thi B", 2000000, 500000));
    myBank.addAccount(new FixedDepositAccount("FDA001", "Le Thi C", 3000000, 0.07, 12));

    int choice;
    while (true) {
        displayMenu();
        std::cout << "Chọn một tùy chọn: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Thông tin tất cả tài khoản:" << std::endl;
                myBank.displayAllAccounts();
                break;
            case 2: {
                std::string accountNumber;
                std::cout << "Nhập số tài khoản: ";
                std::cin >> accountNumber;
                Account* account = myBank.findAccount(accountNumber);
                if (account) {
                    account->displayInfo();
                }
                break;
            }
            case 3: {
                std::string fromAccountNumber, toAccountNumber;
                double amount;
                std::cout << "Nhập số tài khoản gửi: ";
                std::cin >> fromAccountNumber;
                std::cout << "Nhập số tài khoản nhận: ";
                std::cin >> toAccountNumber;
                std::cout << "Nhập số tiền: ";
                std::cin >> amount;

                Account* sender = myBank.findAccount(fromAccountNumber);
                Account* receiver = myBank.findAccount(toAccountNumber);
                if (sender && receiver) {
                    sender->transfer(receiver, amount);
                }
                break;
            }
            case 4:
                std::cout << "Thoát chương trình." << std::endl;
                return 0;
            default:
                std::cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << std::endl;
        }
    }
}
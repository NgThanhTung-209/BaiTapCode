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

int main() {
    Bank myBank;
    SavingsAccount* sa1 = new SavingsAccount("SA001", "Nguyen Van A", 1000000, 0.05);
    CheckingAccount* ca1 = new CheckingAccount("CA001", "Tran Thi B", 2000000, 500000);
    myBank.addAccount(sa1);
    myBank.addAccount(ca1);

    // Hiển thị thông tin tài khoản
    std::cout << "Thông tin tất cả tài khoản:" << std::endl;
    myBank.displayAllAccounts();

    // Tìm kiếm tài khoản
    std::string searchAccountNumber = "SA001";
    Account* foundAccount = myBank.findAccount(searchAccountNumber);
    if (foundAccount) {
        std::cout << "Tìm thấy tài khoản:" << std::endl;
        foundAccount->displayInfo();
    }

    return 0;
}*/
/*#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Employee {
protected:
    int id;
    std::string name;
    int age;
    double salary;

public:
    Employee(int _id, const std::string& _name, int _age, double _salary)
        : id(_id), name(_name), age(_age), salary(_salary) {}

    virtual void displayInfo() const {
        std::cout << "ID: " << id << ", Tên: " << name
                  << ", Tuổi: " << age << ", Lương: " << salary << std::endl;
    }

    virtual double getSalary() const {
        return salary;
    }

    void increaseSalary(double amount) {
        salary += amount;
    }

    virtual ~Employee() = default; // Destructor ảo
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(int _id, const std::string& _name, int _age, double _salary, int _teamSize)
        : Employee(_id, _name, _age, _salary), teamSize(_teamSize) {}

    void displayInfo() const override {
        Employee::displayInfo();
        std::cout << "Số nhân viên quản lý: " << teamSize << std::endl;
    }

    double getSalary() const override {
        return salary + (teamSize * 1000); // Phụ cấp quản lý
    }
};

class Company {
private:
    std::vector<std::unique_ptr<Employee>> employees; // Sử dụng smart pointer

public:
    void addEmployee(std::unique_ptr<Employee> emp) {
        employees.push_back(std::move(emp));
    }

    void displayAllEmployees() const {
        for (const auto& emp : employees) {
            emp->displayInfo();
            std::cout << "------------------------" << std::endl;
        }
    }

    double getTotalSalary() const {
        double total = 0;
        for (const auto& emp : employees) {
            total += emp->getSalary();
        }
        return total;
    }
};

int main() {
    Company myCompany;
    myCompany.addEmployee(std::make_unique<Employee>(1, "Nguyễn Văn A", 30, 10000000));
    myCompany.addEmployee(std::make_unique<Employee>(2, "Trần Thị B", 25, 8000000));
    myCompany.addEmployee(std::make_unique<Manager>(3, "Lê Văn C", 40, 20000000, 5));

    std::cout << "Thông tin tất cả nhân viên:" << std::endl;
    myCompany.displayAllEmployees();
    std::cout << "Tổng lương công ty: " << myCompany.getTotalSalary() << std::endl;

    return 0;
}*/
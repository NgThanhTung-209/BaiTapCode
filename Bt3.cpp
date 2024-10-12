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

    int getId() const {
        return id;
    }

    const std::string& getName() const {
        return name;
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

class Department {
private:
    std::string name;
    std::vector<std::unique_ptr<Employee>> employees;

public:
    Department(const std::string& _name) : name(_name) {}

    void addEmployee(std::unique_ptr<Employee> emp) {
        employees.push_back(std::move(emp));
    }

    void displayAllEmployees() const {
        std::cout << "Danh sách nhân viên phòng ban: " << name << std::endl;
        for (const auto& emp : employees) {
            emp->displayInfo();
            std::cout << "------------------------" << std::endl;
        }
    }

    void searchEmployee(const std::string& searchTerm) const {
        for (const auto& emp : employees) {
            if (emp->getName() == searchTerm || std::to_string(emp->getId()) == searchTerm) {
                emp->displayInfo();
                return;
            }
        }
        std::cout << "Không tìm thấy nhân viên với tên hoặc ID: " << searchTerm << std::endl;
    }
};

int main() {
    Department myDepartment("Phòng Nhân Sự");

    myDepartment.addEmployee(std::make_unique<Employee>(1, "Nguyễn Văn A", 30, 10000000));
    myDepartment.addEmployee(std::make_unique<Employee>(2, "Trần Thị B", 25, 8000000));
    myDepartment.addEmployee(std::make_unique<Manager>(3, "Lê Văn C", 40, 20000000, 5));

    std::cout << "Thông tin tất cả nhân viên:" << std::endl;
    myDepartment.displayAllEmployees();

    // Tìm kiếm nhân viên
    std::string searchTerm;
    std::cout << "Nhập tên hoặc ID để tìm kiếm nhân viên: ";
    std::cin >> searchTerm;
    myDepartment.searchEmployee(searchTerm);

    return 0;
}*/
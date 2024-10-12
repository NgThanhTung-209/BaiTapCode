/*#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <sstream>

class Employee {
protected:
    int id;
    std::string name;
    int age;

public:
    Employee(int _id, const std::string& _name, int _age)
        : id(_id), name(_name), age(_age) {}

    virtual void displayInfo() const {
        std::cout << "ID: " << id << ", Tên: " << name
                  << ", Tuổi: " << age;
    }

    virtual double getSalary() const = 0; // Hàm ảo thuần túy
    int getId() const { return id; }
    const std::string& getName() const { return name; }
    int getAge() const { return age; } // Thêm phương thức getAge
    virtual ~Employee() = default; // Destructor ảo
};

class Manager : public Employee {
private:
    double salary;
    int teamSize;

public:
    Manager(int _id, const std::string& _name, int _age, double _salary, int _teamSize)
        : Employee(_id, _name, _age), salary(_salary), teamSize(_teamSize) {}

    void displayInfo() const override {
        Employee::displayInfo();
        std::cout << ", Lương: " << salary << ", Số nhân viên quản lý: " << teamSize << std::endl;
    }

    double getSalary() const override {
        return salary + (teamSize * 1000); // Phụ cấp quản lý
    }

    int getTeamSize() const { return teamSize; } // Thêm phương thức getTeamSize
};

class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    HourlyEmployee(int _id, const std::string& _name, int _age, double _hourlyRate, int _hoursWorked)
        : Employee(_id, _name, _age), hourlyRate(_hourlyRate), hoursWorked(_hoursWorked) {}

    void displayInfo() const override {
        Employee::displayInfo();
        std::cout << ", Lương theo giờ: " << hourlyRate << ", Giờ làm: " << hoursWorked << std::endl;
    }

    double getSalary() const override {
        return hourlyRate * hoursWorked; // Tính lương theo giờ
    }

    double getHourlyRate() const { return hourlyRate; } // Thêm phương thức getHourlyRate
    int getHoursWorked() const { return hoursWorked; } // Thêm phương thức getHoursWorked
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

    void saveToFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (!file) {
            std::cerr << "Không thể mở file để ghi!" << std::endl;
            return;
        }

        for (const auto& emp : employees) {
            if (dynamic_cast<Manager*>(emp.get())) {
                Manager* manager = dynamic_cast<Manager*>(emp.get());
                file << "Manager," << manager->getId() << "," << manager->getName() << ","
                     << manager->getSalary() << "," << manager->getAge() << "," << manager->getTeamSize() << std::endl;
            } else if (dynamic_cast<HourlyEmployee*>(emp.get())) {
                HourlyEmployee* hourlyEmp = dynamic_cast<HourlyEmployee*>(emp.get());
                file << "HourlyEmployee," << hourlyEmp->getId() << "," << hourlyEmp->getName() << ","
                     << hourlyEmp->getHourlyRate() << "," << hourlyEmp->getHoursWorked() << "," << hourlyEmp->getAge() << std::endl;
            }
        }

        file.close();
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file) {
            std::cerr << "Không thể mở file để đọc!" << std::endl;
            return;
        }

        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string type;
            if (std::getline(iss, type, ',')) {
                if (type == "Manager") {
                    int id, age, teamSize;
                    double salary;
                    std::string name;
                    iss >> id;
                    iss.ignore();
                    std::getline(iss, name, ',');
                    iss >> salary >> age >> teamSize;
                    addEmployee(std::make_unique<Manager>(id, name, age, salary, teamSize));
                } else if (type == "HourlyEmployee") {
                    int id, age, hoursWorked;
                    double hourlyRate;
                    std::string name;
                    iss >> id;
                    iss.ignore();
                    std::getline(iss, name, ',');
                    iss >> hourlyRate >> hoursWorked >> age;
                    addEmployee(std::make_unique<HourlyEmployee>(id, name, age, hourlyRate, hoursWorked));
                }
            }
        }

        file.close();
    }
};

int main() {
    Department myDepartment("Phòng Nhân Sự");

    myDepartment.addEmployee(std::make_unique<Manager>(1, "Nguyễn Văn A", 30, 10000000, 5));
    myDepartment.addEmployee(std::make_unique<HourlyEmployee>(2, "Trần Thị B", 25, 150000, 160));

    std::cout << "Thông tin tất cả nhân viên:" << std::endl;
    myDepartment.displayAllEmployees();

    // Ghi danh sách nhân viên vào file
    myDepartment.saveToFile("employees.txt");

    // Tải danh sách nhân viên từ file
    myDepartment.loadFromFile("employees.txt");

    std::cout << "Thông tin nhân viên sau khi tải từ file:" << std::endl;
    myDepartment.displayAllEmployees();

    return 0;
}*/
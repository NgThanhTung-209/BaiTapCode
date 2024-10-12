/*#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Computer {
    float clockSpeed;    
    int cores;         
    int ram;          
    int storage;        
    int performanceScore; 
    float price;         
    void display() const {
        cout << "Computer Configuration:" << endl;
        cout << "Clock Speed: " << clockSpeed << " GHz" << endl;
        cout << "CPU Cores: " << cores << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "Performance Score: " << performanceScore << endl;
        cout << "Price: $" << price << endl;
        cout << "--------------------" << endl;
    }
};
void addComputer(vector<Computer>& computers, float clockSpeed, int cores, int ram, int storage, int performanceScore, float price) {
    computers.push_back({clockSpeed, cores, ram, storage, performanceScore, price});
}
void displayAllComputers(const vector<Computer>& computers) {
    for (const auto& computer : computers) {
        computer.display();
    }
}
int main() {
    vector<Computer> computers;
    addComputer(computers, 3.5, 6, 16, 512, 85, 1200.99);
    addComputer(computers, 4.0, 8, 32, 1024, 95, 1500.49);
    addComputer(computers, 2.8, 4, 8, 256, 70, 850.75);
    displayAllComputers(computers);

    return 0;
}*/
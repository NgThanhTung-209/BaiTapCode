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
        cout << "Clock Speed: " << clockSpeed << " GHz" << endl;
        cout << "CPU Cores: " << cores << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "Performance Score: " << performanceScore << endl;
        cout << "Price: $" << price << endl;
        cout << "--------------------" << endl;
    }
};
void addComputer(vector<Computer>& computers) {
    float clockSpeed;
    int cores, ram, storage, performanceScore;
    float price;

    cout << "Enter clock speed (GHz): ";
    cin >> clockSpeed;
    cout << "Enter number of CPU cores: ";
    cin >> cores;
    cout << "Enter RAM size (GB): ";
    cin >> ram;
    cout << "Enter storage size (GB): ";
    cin >> storage;

    do {
        cout << "Enter performance score (must be >= 0): ";
        cin >> performanceScore;
        if (performanceScore < 0) {
            cout << "Error: Performance score cannot be negative!" << endl;
        }
    } while (performanceScore < 0);

    do {
        cout << "Enter price (must be >= 0): ";
        cin >> price;
        if (price < 0) {
            cout << "Error: Price cannot be negative!" << endl;
        }
    } while (price < 0);

    computers.push_back({clockSpeed, cores, ram, storage, performanceScore, price});
    cout << "Computer configuration added successfully!\n";
}
void changePrice(vector<Computer>& computers) {
    int index;
    float newPrice;

    if (computers.empty()) {
        cout << "No computers available to update." << endl;
        return;
    }
    cout << "Select a computer to update price by its index (1 - " << computers.size() << "):" << endl;
    for (int i = 0; i < computers.size(); ++i) {
        cout << i + 1 << ". ";
        computers[i].display();
    }
    do {
        cout << "Enter computer index: ";
        cin >> index;
        if (index < 1 || index > computers.size()) {
            cout << "Error: Invalid index. Please select a valid number!" << endl;
        }
    } while (index < 1 || index > computers.size());
    do {
        cout << "Enter new price (must be >= 0): ";
        cin >> newPrice;
        if (newPrice < 0) {
            cout << "Error: Price cannot be negative!" << endl;
        }
    } while (newPrice < 0);
    computers[index - 1].price = newPrice;
    cout << "Price updated successfully!\n";
}
void displayAllComputers(const vector<Computer>& computers) {
    if (computers.empty()) {
        cout << "No computers available to display." << endl;
        return;
    }

    for (int i = 0; i < computers.size(); ++i) {
        cout << "Computer #" << i + 1 << ":\n";
        computers[i].display();
    }
}
void searchComputers(const vector<Computer>& computers, int minPerformanceScore, float maxPrice) {
    bool found = false;

    cout << "Searching for computers with performance score >= " << minPerformanceScore << " and price <= $" << maxPrice << "...\n";

    for (const auto& computer : computers) {
        if (computer.performanceScore >= minPerformanceScore && computer.price <= maxPrice) {
            computer.display();
            found = true;
        }
    }

    if (!found) {
        cout << "No computers found that match the criteria.\n";
    }
}
void showMenu() {
    cout << "======================" << endl;
    cout << "1. Add a new computer configuration" << endl;
    cout << "2. Change price of an existing computer" << endl;
    cout << "3. Display all computer configurations" << endl;
    cout << "4. Search computers by performance and price" << endl;
    cout << "5. Exit" << endl;
    cout << "======================" << endl;
}

int main() {
    vector<Computer> computers;
    int choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addComputer(computers);
                break;
            case 2:
                changePrice(computers);
                break;
            case 3:
                displayAllComputers(computers);
                break;
            case 4: {
                int minPerformanceScore;
                float maxPrice;
                cout << "Enter minimum performance score: ";
                cin >> minPerformanceScore;
                cout << "Enter maximum price: ";
                cin >> maxPrice;
                searchComputers(computers, minPerformanceScore, maxPrice);
                break;
            }
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}*/
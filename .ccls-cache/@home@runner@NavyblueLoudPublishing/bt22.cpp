/*#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Speaker {
    string name;     
    string phone;   
    string topic;    
    float fee;            
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
        cout << "Topic: " << topic << endl;
        cout << "Fee: $" << fee << endl;
        cout << "--------------------" << endl;
    }
};
void addSpeaker(vector<Speaker>& speakers) {
    Speaker newSpeaker;

    cout << "Enter speaker's name: ";
    cin.ignore();  
    getline(cin, newSpeaker.name);
    cout << "Enter phone number: ";
    getline(cin, newSpeaker.phone);
    cout << "Enter speaking topic: ";
    getline(cin, newSpeaker.topic);

    do {
        cout << "Enter speaking fee (must be >= 0): ";
        cin >> newSpeaker.fee;
        if (newSpeaker.fee < 0) {
            cout << "Error: Fee cannot be negative!" << endl;
        }
    } while (newSpeaker.fee < 0);

    speakers.push_back(newSpeaker);
    cout << "Speaker added successfully!\n";
}
void displayAllSpeakers(const vector<Speaker>& speakers) {
    if (speakers.empty()) {
        cout << "No speakers available to display." << endl;
        return;
    }

    for (const auto& speaker : speakers) {
        speaker.display();
    }
}
void showMenu() {
    cout << "======================" << endl;
    cout << "1. Add a new speaker" << endl;
    cout << "2. Display all speakers" << endl;
    cout << "3. Exit" << endl;
    cout << "======================" << endl;
}

int main() {
    vector<Speaker> speakers;
    int choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addSpeaker(speakers);
                break;
            case 2:
                displayAllSpeakers(speakers);
                break;
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}*/
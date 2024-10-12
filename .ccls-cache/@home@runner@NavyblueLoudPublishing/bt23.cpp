/*#include <iostream>
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
void addSpeaker(Speaker speakers[], int& count) {
    if (count >= 10) {
        cout << "Speaker list is full. Cannot add more speakers." << endl;
        return;
    }

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

    speakers[count] = newSpeaker;
    count++; 
    cout << "Speaker added successfully!\n";
}
void displayAllSpeakers(const Speaker speakers[], int count) {
    if (count == 0) {
        cout << "No speakers available to display." << endl;
        return;
    }

    for (int i = 0; i < count; ++i) {
        cout << "Speaker #" << (i + 1) << ":\n";
        speakers[i].display();
    }
}
void editSpeaker(Speaker speakers[], int count) {
    int index;

    if (count == 0) {
        cout << "No speakers available to edit." << endl;
        return;
    }

    cout << "Select a speaker to edit by their index (1 - " << count << "):" << endl;
    for (int i = 0; i < count; ++i) {
        cout << i + 1 << ". " << speakers[i].name << endl;
    }

    do {
        cout << "Enter speaker index: ";
        cin >> index;
        if (index < 1 || index > count) {
            cout << "Error: Invalid index. Please select a valid number!" << endl;
        }
    } while (index < 1 || index > count);
    Speaker& speaker = speakers[index - 1];

    cout << "Updating details for: " << speaker.name << endl;
    cout << "Enter new phone number: ";
    cin.ignore();
    getline(cin, speaker.phone);
    cout << "Enter new speaking topic: ";
    getline(cin, speaker.topic);

    do {
        cout << "Enter new speaking fee (must be >= 0): ";
        cin >> speaker.fee;
        if (speaker.fee < 0) {
            cout << "Error: Fee cannot be negative!" << endl;
        }
    } while (speaker.fee < 0);

    cout << "Speaker details updated successfully!\n";
}
void showMenu() {
    cout << "======================" << endl;
    cout << "1. Add a new speaker" << endl;
    cout << "2. Display all speakers" << endl;
    cout << "3. Edit a speaker" << endl;
    cout << "4. Exit" << endl;
    cout << "======================" << endl;
}

int main() {
    Speaker speakers[10]; 
    int count = 0; 
    int choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addSpeaker(speakers, count);
                break;
            case 2:
                displayAllSpeakers(speakers, count);
                break;
            case 3:
                editSpeaker(speakers, count);
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}*/
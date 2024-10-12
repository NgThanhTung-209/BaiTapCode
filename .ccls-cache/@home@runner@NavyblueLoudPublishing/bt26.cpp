/*#include <iostream>
#include <iomanip> 
using namespace std;
struct dateTime {
    int year;   
    int month; 
    int day;   
    int hour;   
    int minute; 
    int second; 
    void display() const {
        cout << setw(4) << year << "-" 
             << setw(2) << setfill('0') << month << "-"
             << setw(2) << setfill('0') << day << " "
             << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second;
    }
};
dateTime compareDateTime(const dateTime& dt1, const dateTime& dt2) {
    if (dt1.year != dt2.year) {
        return (dt1.year < dt2.year) ? dt1 : dt2;
    }
    if (dt1.month != dt2.month) {
        return (dt1.month < dt2.month) ? dt1 : dt2;
    }
    if (dt1.day != dt2.day) {
        return (dt1.day < dt2.day) ? dt1 : dt2;
    }
    if (dt1.hour != dt2.hour) {
        return (dt1.hour < dt2.hour) ? dt1 : dt2;
    }
    if (dt1.minute != dt2.minute) {
        return (dt1.minute < dt2.minute) ? dt1 : dt2;
    }
    cout << "Ngày giờ giống nhau." << endl;
    return dt1;
}

void inputDateTime(dateTime& dt) {
    do {
        cout << "Enter year (>= 0): ";
        cin >> dt.year;
        if (dt.year < 0) {
            cout << "Error: Year cannot be negative!" << endl;
        }
    } while (dt.year < 0);

    do {
        cout << "Enter month (1-12): ";
        cin >> dt.month;
        if (dt.month < 1 || dt.month > 12) {
            cout << "Error: Month must be between 1 and 12!" << endl;
        }
    } while (dt.month < 1 || dt.month > 12);

    do {
        cout << "Enter day (1-31): ";
        cin >> dt.day;
        if (dt.day < 1 || dt.day > 31) {
            cout << "Error: Day must be between 1 and 31!" << endl;
        }
    } while (dt.day < 1 || dt.day > 31);

    do {
        cout << "Enter hour (0-23): ";
        cin >> dt.hour;
        if (dt.hour < 0 || dt.hour > 23) {
            cout << "Error: Hour must be between 0 and 23!" << endl;
        }
    } while (dt.hour < 0 || dt.hour > 23);

    do {
        cout << "Enter minute (0-59): ";
        cin >> dt.minute;
        if (dt.minute < 0 || dt.minute > 59) {
            cout << "Error: Minute must be between 0 and 59!" << endl;
        }
    } while (dt.minute < 0 || dt.minute > 59);

    do {
        cout << "Enter second (0-59): ";
        cin >> dt.second;
        if (dt.second < 0 || dt.second > 59) {
            cout << "Error: Second must be between 0 and 59!" << endl;
        }
    } while (dt.second < 0 || dt.second > 59);
}

int main() {
    dateTime dt1, dt2;

    cout << "Input first date and time:\n";
    inputDateTime(dt1);
    cout << "Input second date and time:\n";
    inputDateTime(dt2);

    cout << "First date and time: ";
    dt1.display();
    cout << endl;

    cout << "Second date and time: ";
    dt2.display();
    cout << endl;

    dateTime earlier = compareDateTime(dt1, dt2);
    if (earlier.year != dt1.year || earlier.month != dt1.month || 
        earlier.day != dt1.day || earlier.hour != dt1.hour ||
        earlier.minute != dt1.minute || earlier.second != dt1.second) {
        cout << "The earlier date and time is: ";
        earlier.display();
        cout << endl;
    }

    return 0;
}*/
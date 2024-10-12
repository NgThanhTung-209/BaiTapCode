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
int compareDateTime(const dateTime& dt1, const dateTime& dt2) {
    if (dt1.year != dt2.year) {
        return dt1.year - dt2.year;
    }
    if (dt1.month != dt2.month) {
        return dt1.month - dt2.month;
    }
    if (dt1.day != dt2.day) {
        return dt1.day - dt2.day;
    }
    if (dt1.hour != dt2.hour) {
        return dt1.hour - dt2.hour;
    }
    if (dt1.minute != dt2.minute) {
        return dt1.minute - dt2.minute;
    }
    return dt1.second - dt2.second;
}
void inputDateTime(dateTime& dt) {
    cout << "Enter year: ";
    cin >> dt.year;
    cout << "Enter month (1-12): ";
    cin >> dt.month;
    cout << "Enter day (1-31): ";
    cin >> dt.day;
    cout << "Enter hour (0-23): ";
    cin >> dt.hour;
    cout << "Enter minute (0-59): ";
    cin >> dt.minute;
    cout << "Enter second (0-59): ";
    cin >> dt.second;
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

    int result = compareDateTime(dt1, dt2);
    if (result < 0) {
        cout << "The first date and time is earlier than the second." << endl;
    } else if (result > 0) {
        cout << "The first date and time is later than the second." << endl;
    } else {
        cout << "Both date and time are the same." << endl;
    }

    return 0;
}*/

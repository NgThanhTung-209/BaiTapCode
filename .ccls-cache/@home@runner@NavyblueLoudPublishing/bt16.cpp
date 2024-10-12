/*#include <iostream>
#include <string>
using namespace std;
struct Earthquake {
    string name;      
    string location;      
    int year;         
    double magnitude;     
    int fatalities;    
};
void displayEarthquakeData(const Earthquake &eq) {
    cout << "===== Báo cáo trận động đất =====" << endl;
    cout << "Tên trận động đất   : " << eq.name << endl;
    cout << "Vị trí              : " << eq.location << endl;
    cout << "Năm xảy ra          : " << eq.year << endl;
    cout << "Độ lớn (Richter)    : " << eq.magnitude << endl;
    cout << "Số người thiệt mạng : " << eq.fatalities << endl;
    cout << "===============================" << endl;
}

int main() {
    Earthquake eq1;
    eq1.name = "Gorkha";
    eq1.location = "Nepal";
    eq1.year = 2015;
    eq1.magnitude = 7.8;
    eq1.fatalities = 9000;

    Earthquake eq2;
    eq2.name = "Central Mexico";
    eq2.location = "Mexico City, Mexico";
    eq2.year = 2017;
    eq2.magnitude = 7.1;
    eq2.fatalities = 370;

    Earthquake eq3;
    eq3.name = "Sulawesi";
    eq3.location = "Palu, Indonesia";
    eq3.year = 2018;
    eq3.magnitude = 7.5;
    eq3.fatalities = 4340;
    displayEarthquakeData(eq1);
    displayEarthquakeData(eq2);
    displayEarthquakeData(eq3);

    return 0;
}*/
/*#include <iostream>
#include <algorithm>  
#include <iomanip>  
#include <string>
void sortScoresAndNames(std::string* names, double* scores, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (*(scores + i) > *(scores + j)) {
                std::swap(*(scores + i), *(scores + j));
                std::swap(*(names + i), *(names + j));
            }
        }
    }
}
double calculateAverage(double* scores, int size) {
    double total = 0.0;
    for (double* ptr = scores; ptr < scores + size; ++ptr) {
        total += *ptr;
    }
    return total / size;
}

int main() {
    int numStudents;
    do {
        std::cout << "Enter the number of students (must be positive): ";
        std::cin >> numStudents;
        if (numStudents <= 0) {
            std::cout << "The number of students must be a positive integer.\n";
        }
    } while (numStudents <= 0);
    std::string* names = new std::string[numStudents];
    double* scores = new double[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter name of student #" << (i + 1) << ": ";
        std::cin >> *(names + i); 
        do {
            std::cout << "Enter score of " << *(names + i) << ": ";
            std::cin >> *(scores + i);
            if (*(scores + i) < 0) {
                std::cout << "Score cannot be negative. Please re-enter.\n";
            }
        } while (*(scores + i) < 0);
    }
    sortScoresAndNames(names, scores, numStudents);
    double average = calculateAverage(scores, numStudents);
    std::cout << "\nSorted Scores and Names:\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << std::setw(10) << *(names + i) << " : " 
                  << std::fixed << std::setprecision(2) << *(scores + i) << std::endl;
    }
    std::cout << "\nAverage score: " << std::fixed << std::setprecision(2) << average << std::endl;
    delete[] names;
    delete[] scores;

    return 0;
}*/
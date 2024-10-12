/*#include <iostream>
#include <algorithm>  
#include <iomanip>   

void sortScores(double* scores, int size) {
    std::sort(scores, scores + size);
}

double calculateAverage(double* scores, int size) {
    double total = 0.0;
    for (double* ptr = scores; ptr < scores + size; ++ptr) {
        total += *ptr;
    }
    return total / size;
}

int main() {
    int numScores;
    do {
        std::cout << "Enter the number of test scores (must be positive): ";
        std::cin >> numScores;
        if (numScores <= 0) {
            std::cout << "The number of scores must be a positive integer.\n";
        }
    } while (numScores <= 0);

    double* scores = new double[numScores];
    for (int i = 0; i < numScores; ++i) {
        do {
            std::cout << "Enter score #" << (i + 1) << ": ";
            std::cin >> *(scores + i);  
            if (*(scores + i) < 0) {
                std::cout << "Score cannot be negative. Please re-enter.\n";
            }
        } while (*(scores + i) < 0);
    }
    sortScores(scores, numScores);

    double average = calculateAverage(scores, numScores);

    std::cout << "\nSorted Scores:\n";
    for (double* ptr = scores; ptr < scores + numScores; ++ptr) {
        std::cout << std::fixed << std::setprecision(2) << *ptr << " ";
    }

    std::cout << "\n\nAverage score: " << std::fixed << std::setprecision(2) << average << std::endl;

    delete[] scores;

    return 0;
}*/
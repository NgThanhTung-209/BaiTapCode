/*#include <iostream>
#include <algorithm> 
#include <iomanip>   
void sortScores(double* scores, int size) {
    std::sort(scores, scores + size);
}
double calculateAverageExcludingLowest(double* scores, int size) {
    double total = 0.0;
    for (double* ptr = scores + 1; ptr < scores + size; ++ptr) {
        total += *ptr;
    }
    return total / (size - 1);
}

int main() {
    int numScores;
    do {
        std::cout << "Enter the number of test scores (must be greater than 1): ";
        std::cin >> numScores;
        if (numScores <= 1) {
            std::cout << "The number of scores must be greater than 1 to exclude the lowest.\n";
        }
    } while (numScores <= 1);
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
    double average = calculateAverageExcludingLowest(scores, numScores);
    std::cout << "\nSorted Scores:\n";
    for (double* ptr = scores; ptr < scores + numScores; ++ptr) {
        std::cout << std::fixed << std::setprecision(2) << *ptr << " ";
    }
    std::cout << "\n\nLowest score (" << std::fixed << std::setprecision(2) << *scores << ") will be excluded.";
    std::cout << "\nAverage score (excluding the lowest): " << std::fixed << std::setprecision(2) << average << std::endl;
    delete[] scores;

    return 0;
}*/
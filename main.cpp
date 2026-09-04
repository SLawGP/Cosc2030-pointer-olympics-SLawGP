#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

using namespace std; 

// Function prototypes
void sortScores(double* scores, int numScores);
double calculateAverage(double* scores, int numScores);
void awardMedals(double* scores, int numScores);
void displayResults(double* scores, int numScores, double average);

int main() {
    // Get number of scores from user
    int numScores;
    cout << "Enter how many Athletes you want to enter: ";
    cin >> numScores;

    // Dynamically allocate array for scores
    double* scores = new double[numScores];

    // Get scores from user
    cout << "Enter the scores for each athlete: ";
    for (int i = 0; i < numScores; i++) {
        cin >> scores[i];
    }

    // Sort scores
    sortScores(scores, numScores);

    // Calculate average score
    double average = calculateAverage(scores, numScores);

    // Award medals

    // Display results

    // Deallocate memory for scores array

    return 0;
}
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
    awardMedals(scores, numScores);

    // Display results
    displayResults(scores, numScores, average);

    // Deallocate memory for scores array
    delete[] scores;

    return 0;
}

// Selection Sort algorithm to sort scores in ascending order
void sortScores(double* scores, int numScores) {
    for (int i = 0; i < numScores - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < numScores; j++) {
            if (scores[j] < scores[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the scores
        double temp = scores[i];
        scores[i] = scores[minIndex];
        scores[minIndex] = temp;
    }
}

// Function to calculate the average score
double calculateAverage(double* scores, int numScores) {
    double sum = 0.0;
    for (int i = 0; i < numScores; i++) {
        sum += scores[i];
    }
    return sum / numScores;
}

// Function to award medals to the top 3 Scores
void awardMedals(double* scores, int numScores) {
    cout << "Medal Winners:" << endl;
    if (numScores >= 1) {
        cout << "Gold Medal: " << scores[numScores - 1] << endl;
    }
    if (numScores >= 2) {
        cout << "Silver Medal: " << scores[numScores - 2] << endl;
    }
    if (numScores >= 3) {
        cout << "Bronze Medal: " << scores[numScores - 3] << endl;
    }
}
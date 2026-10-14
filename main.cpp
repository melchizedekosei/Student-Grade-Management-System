#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {
    const int MAX = 100;
    string names[MAX];
    double scores[MAX];
    int n;

    cout << "STUDENT GRADE MANAGEMENT SYSTEM\n";
    cout << "Enter number of students (1-100): ";

    if (!(cin >> n) || n < 1 || n > MAX) {
        cout << "Invalid number of students.\n";
        return 1;
    }

    double total = 0.0;
    double highest = -1.0;
    double lowest = 101.0;
    int highIndex = 0;
    int lowIndex = 0;

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> ws;
        getline(cin, names[i]);

        cout << "Enter score (0-100): ";
        if (!(cin >> scores[i]) || scores[i] < 0 || scores[i] > 100) {
            cout << "Invalid score. Enter a number from 0 to 100.\n";
            return 1;
        }

        total += scores[i];

        if (scores[i] > highest) {
            highest = scores[i];
            highIndex = i;
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
            lowIndex = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\n--- STUDENT RESULTS ---\n";
    for (int i = 0; i < n; ++i) {
        cout << names[i] << ": " << scores[i] << "/100\n";
    }

    cout << "\nAverage score: " << total / n << '\n';
    cout << "Highest score: " << highest << " (" << names[highIndex] << ")\n";
    cout << "Lowest score: " << lowest << " (" << names[lowIndex] << ")\n";

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// Function prototypes
vector<int> clearSpaces();
vector<int> bubbleSort(vector<int> arrayBeforeBS);

int main() {
    // Show basic instructions
    cout << "| Bubble Sort" << endl;
    cout << "| Type a list to order separated by spaces" << endl;
    cout << "| ";

    // Get the user's list and sort it
    vector<int> arrayBeforeBS = clearSpaces();
    vector<int> arrayAfterBS = bubbleSort(arrayBeforeBS);

    // Show the sorted list
    cout << "| Your list ordered is: ";
    for (int n : arrayAfterBS) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

vector<int> clearSpaces() {
    string userArray; // Will store the user's input
    getline(cin, userArray);

    istringstream iss(userArray); // Turns the string into a stream to extract numbers

    vector<int> arrayBeforeBS;
    int num;
    while (iss >> num) {
        arrayBeforeBS.push_back(num); // Adds each number to the vector
    }

    return arrayBeforeBS;
}

vector<int> bubbleSort(vector<int> arrayBeforeBS) {
    int n = arrayBeforeBS.size(); // Get the size of the list

    // Repeat the process n-1 times
    for (int i = 0; i < n - 1; i++) {
        // Compare each pair of adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arrayBeforeBS[j] > arrayBeforeBS[j + 1]) {
                // If they're in the wrong order, swap them
                swap(arrayBeforeBS[j], arrayBeforeBS[j + 1]);
            }
        }
    }

    return arrayBeforeBS;
}

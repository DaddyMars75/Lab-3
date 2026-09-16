#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {

    // =========================
    // Task 1: Modifiable and Read Only Iteration
    // =========================

    vector<int> v = {5, 10, 15};

    // Loop A: begin() and end() allow modification.
    for (auto it = v.begin(); it != v.end(); ++it) {
        *it = *it + 1;
    }

    // Loop B: cbegin() and cend() provide read-only access.
    cout << "Task 1: ";
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // =========================
    // Task 2: Search with find()
    // =========================

    const vector<int> scores = {78, 92, 65, 88, 74, 92};

    int target;

    cout << "Enter a score to find: ";
    cin >> target;

    auto result = find(scores.cbegin(), scores.cend(), target);

    if (result != scores.cend()) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }

    // =========================
    // Task 3: Sort Ascending
    // =========================

    vector<int> values = {78, 92, 65, 88, 74, 92};

    sort(values.begin(), values.end());

    cout << "Ascending: ";
    for (auto it = values.cbegin(); it != values.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // =========================
    // Task 3: Sort Descending
    // =========================

    sort(values.begin(), values.end(), greater<int>());

    cout << "Descending: ";
    for (auto it = values.cbegin(); it != values.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // =========================
    // Task 4: count()
    // =========================

    // count() counts how many times a value occurs in a range.
    // It returns a count and does not change the vector.

    int numberOf92 = count(values.begin(), values.end(), 92);

    cout << "Task 4: 92 occurs " << numberOf92 << " times." << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {

    // Task 1: Modifiable and Read-Only Iteration
    
    vector<int> v = {5, 10, 15};

    // Loop A: begin() and end() allow modification
    for (auto it = v.begin(); it != v.end(); ++it) {
        *it = *it + 1;
    }

    // Loop B: cbegin() and cend() are read-only
    cout << "Task 1: ";
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    // Answer:
    // Loop A can modify the vector because begin() returns
    // a normal iterator. Loop B uses cbegin(), which is
    // a const/read-only iterator.

    // Task 2: Search with find()

    const vector<int> scores = {78, 92, 65, 88, 74, 92};

    int target;

    cout << "Enter a score to find: ";
    cin >> target;

    auto result = find(scores.cbegin(), scores.cend(), target);

    if (result != scores.cend()) {
        cout << "Found" << endl;
    }
    else {
        cout << "Not found" << endl;
    }

    // Answer:
    // If the value is not found, find() returns scores.cend().

    // Task 3: Sort Ascending

    vector<int> values = {78, 92, 65, 88, 74, 92};

    sort(values.begin(), values.end());

    cout << "Ascending: ";

    for (auto it = values.begin(); it != values.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;


    // Task 3: Sort Descending

    sort(values.begin(), values.end(), greater<int>());

    cout << "Descending: ";

    for (auto it = values.begin(); it != values.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    // Task 4: count()

    // count() counts how many times a value occurs in a range.

    int numberOf92 = count(values.begin(), values.end(), 92);

    cout << "Number of 92s: " << numberOf92 << endl;

    return 0;
}
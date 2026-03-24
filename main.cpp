#include <bits/stdc++.h>
using namespace std;

#include "bubble.cpp"
#include "insertion.cpp"
#include "selection.cpp"
#include "qs.cpp"
#include "merge.cpp"

void display(const vector<int> &v) {
    for(auto val : v) cout << val << " ";
    cout << "\n";
}

int main() {
    vector<int> data = {77, 71, 51, 21, 109, 557, 654, 7, 93, 89, 34, 1008, 2708, 2007, 79, 87, 33, 8};

    cout << "Initial Array: ";
    display(data);

    vector<int> copyArr;
    int ops;
    chrono::high_resolution_clock::time_point t1, t2;

    // Bubble Sort
    copyArr = data;
    t1 = chrono::high_resolution_clock::now();
    ops = bubbleSort(copyArr);
    t2 = chrono::high_resolution_clock::now();
    cout << "\nBubble Sort Result: ";
    display(copyArr);
    cout << "Operations: " << ops;
    cout << " | Time Taken: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    // Insertion Sort
    copyArr = data;
    t1 = chrono::high_resolution_clock::now();
    ops = insertionSort(copyArr);
    t2 = chrono::high_resolution_clock::now();
    cout << "\nInsertion Sort Result: ";
    display(copyArr);
    cout << "Operations: " << ops;
    cout << " | Time Taken: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    // Selection Sort
    copyArr = data;
    t1 = chrono::high_resolution_clock::now();
    ops = selectionSort(copyArr);
    t2 = chrono::high_resolution_clock::now();
    cout << "\nSelection Sort Result: ";
    display(copyArr);
    cout << "Operations: " << ops;
    cout << " | Time Taken: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    // Quick Sort
    copyArr = data;
    t1 = chrono::high_resolution_clock::now();
    ops = quickSort(copyArr);
    t2 = chrono::high_resolution_clock::now();
    cout << "\nQuick Sort Result: ";
    display(copyArr);
    cout << "Operations: " << ops;
    cout << " | Time Taken: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    // Merge Sort
    copyArr = data;
    t1 = chrono::high_resolution_clock::now();
    ops = mergeSort(copyArr);
    t2 = chrono::high_resolution_clock::now();
    cout << "\nMerge Sort Result: ";
    display(copyArr);
    cout << "Operations: " << ops;
    cout << " | Time Taken: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    return 0;
}

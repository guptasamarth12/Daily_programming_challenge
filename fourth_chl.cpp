
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to find the next gap
int nextGap(int gap) {
    if (gap <= 1) {
        return 0;
    }
    return (gap / 2) + (gap % 2);
}

void mergeArrays(vector<int>& arr1, vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    
    int gap = nextGap(m + n);
    
    // Loop until the gap becomes 0
    while (gap > 0) {
        int i, j;
        
        // Compare elements in the first array (arr1)
        for (i = 0; i + gap < m; i++) {
            if (arr1[i] > arr1[i + gap]) {
                swap(arr1[i], arr1[i + gap]);
            }
        }
        
        // Compare elements between the two arrays (arr1 and arr2)
        for (j = (gap > m) ? gap - m : 0; i < m && j < n; i++, j++) {
            if (arr1[i] > arr2[j]) {
                swap(arr1[i], arr2[j]);
            }
        }
        
        // Compare elements in the second array (arr2)
        if (j < n) {
            for (j = 0; j + gap < n; j++) {
                if (arr2[j] > arr2[j + gap]) {
                    swap(arr2[j], arr2[j + gap]);
                }
            }
        }
        
        // Reduce the gap for the next pass
        gap = nextGap(gap);
    }
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    
    mergeArrays(arr1, arr2);
    
    cout << "arr1: ";
    for (int x : arr1) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "arr2: ";
    for (int x : arr2) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
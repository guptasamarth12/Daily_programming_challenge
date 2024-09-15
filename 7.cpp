#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trapRainWater(const vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;  // Edge case: if no bars, no water can be trapped.

    // Arrays to store the maximum height to the left and right of each bar.
    vector<int> max_left(n), max_right(n);

    // Fill max_left array.
    max_left[0] = height[0];  // The first element has no left neighbor.
    for (int i = 1; i < n; i++) {
        max_left[i] = max(max_left[i - 1], height[i]);
    }

    // Fill max_right array.
    max_right[n - 1] = height[n - 1];  // The last element has no right neighbor.
    for (int i = n - 2; i >= 0; i--) {
        max_right[i] = max(max_right[i + 1], height[i]);
    }

    // Calculate the trapped water.
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        // The water trapped above bar i is the minimum of max_left and max_right minus the height of the bar.
        total_water += min(max_left[i], max_right[i]) - height[i];
    }

    return total_water;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Total water trapped: " << trapRainWater(height) << endl;
    return 0;
}
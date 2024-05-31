#include <bits/stdc++.h>
using namespace std;

bool checksort(vector<int> &nums, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
        if (count > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> nums(size);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    bool x = checksort(nums, size);

    if (x) {
        cout << "The array is sorted and rotated." << endl;
    } else {
        cout << "The array is not sorted and rotated." << endl;
    }

    return 0;
}

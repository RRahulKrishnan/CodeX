#include<bits/stdc++.h>
#include<iostream>
using namespace std;

maximumsubarray(vector<int>& nums){
    int n = nums.size();
    int maxlocal = nums[0];
    int maxglobal = nums[0];

    for (int i = 0 ;i < n;i++){
        maxlocal = max(maxlocal,maxglobal + nums[i]);
        if (maxlocal>maxglobal){
            maxglobal = maxlocal;
        }
    }
    return maxglobal;
}

int main(){
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    vector<int> nums(size);

    for (int i = 0;i < size;i++){
        cin >> nums[i];
    }

    maximumsubarray(nums);

    cout << maximumsubarray(nums);

    return 0;
}
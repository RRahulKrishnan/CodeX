#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void squared(vector<int>& nums,int n){
    n = nums.size();
    for (int i=0;i < n;i++){
        nums[i] = nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
}

int main(){
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    vector<int> nums(size);

    for (int i = 0;i < size;i++){
        cin >> nums[i];
    }

    squared(nums,size);

    for (int i = 0;i <  size;i++){
        cout << nums[i] << " ";
    }
    return 0;
}
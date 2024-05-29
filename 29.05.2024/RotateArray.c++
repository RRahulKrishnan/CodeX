#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void rotate(vector<int>& nums,int k){
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}

int main(){
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int key;
    cout << "Enter the Key: ";
    cin >> key;

    vector<int> nums(size);

    for(int i=0;i < size;i++){
        cin >> nums[i];
    }

    rotate(nums,key);

    for(int i=0;i < size;i++){
        cout << nums[i] << " ";
    }
}
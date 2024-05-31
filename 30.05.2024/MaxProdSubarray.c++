#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int prodsubarray(vector<int>& nums,int n){
    int maxprod = nums[0];
    int minprod = nums[0];
    int results = nums[0];

    for (int i=1;i<n;i++){
        if (nums[i]<0){
            swap(maxprod,minprod);
        }
        maxprod=max(nums[i],maxprod*nums[i]);
        minprod=min(nums[i],minprod*nums[i]);

        results = max(results,maxprod);
    }
    return results; 
}

int main(){
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    vector<int> nums(size);

    for(int i=0;i<size;i++){
        cin >> nums[i];
    }

    int x = prodsubarray(nums,size);

    cout << x;
    return 0;
}
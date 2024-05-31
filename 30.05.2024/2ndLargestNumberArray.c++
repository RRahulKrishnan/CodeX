#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int ndlargest(vector<int> &nums,int n){
    for (int i = 0;i < n;i++){
        int j = i;
        while (j > 0 && nums[j] < nums[j-1]){
            swap(nums[j],nums[j-1]);
            j--;
        }
	return(arr[n-2]);
    }
	}

int main(){
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    vector<int> nums(size);

    for(int i=0;i<size;i++){
        cin >> nums[i];
    }

    int x = ndlargest(nums,size);

    for (int i=0;i<size;i++){
        cout << nums[i] << " ";
    }

    cout << x ;
    return 0;
}
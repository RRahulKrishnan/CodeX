#include<iostream>
using namespace std;

void bubblesort(int nums[],int n){
    for (int i = 0;i < n-1;i++){
        for ( int j = i+1;j < n;j++){
            if (nums[i]>nums[j]){
                swap(nums[i],nums[j]);
            }
        }
    }
}

int main(){
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int nums[size];

    for (int i = 0;i < size;i++){
        cin >> nums[i];
    }

    bubblesort(nums,size);

    for (int i = 0;i < size;i++){
        cout << nums[i] << " ";
    }
    return 0;
}
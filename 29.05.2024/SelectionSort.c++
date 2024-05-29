#include<iostream>
using namespace std;

void selectionsort(int nums[],int n){
    for (int i= 0;i < n-1;i++){
        int min = i;
        for (int j= i+1;j < n;j++){
            if (nums[min] > nums[j]){
                min = j;
            }
        }
        swap(nums[i],nums[min]);
    }
}

int main(){
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int nums[size];

    for (int i=0 ;i < size;i++){
        cin >> nums[i];
    }

    selectionsort(nums,size);

    for (int i=0 ;i < size;i++){
        cout << nums[i] << " ";
    }
    return 0;
}
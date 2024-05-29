#include<iostream>
using namespace std;

void insertionsort(int nums[],int n){
    for (int i = 0;i < n;i++){
        int j = i;
        while (j > 0 && nums[j] < nums[j-1]){
            swap(nums[j],nums[j-1]);
            j--;
        }
    }
}
              
int main(){
    int size;
    cout << "Enter the numbers in the Array: ";
    cin >> size;

    int nums[size];

    for (int i = 0;i < size;i++){
        cin >> nums[i];
    }

    insertionsort(nums,size);

    for (int i = 0;i < size;i++){
        cout << nums[i] << " ";
    }
    return 0;
}
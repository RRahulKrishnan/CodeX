#include <vector>
#include <iostream>
using namespace std;

int largest(vector<int> &arr, int n)
    {
        int maxnum = arr[0];
        for (int i = 0;i < n;i++){
            if  (maxnum < arr[i]){
                maxnum = arr[i];
            }
            
        }
        
    return maxnum;
    }

int main(){
    int n; 
    cout << "Enter the size of the Array";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }

    int x = largest(arr,n);

    cout << x;
}
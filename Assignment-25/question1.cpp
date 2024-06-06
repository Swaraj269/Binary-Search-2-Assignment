// Write a program to apply binary search in array sorted in decreasing order.
#include <iostream>
using namespace std;
int main(){
    int arr[] = {12,11,10,8,6,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<< "Enter the number you have to search: ";
    cin>>k;
    int lo = n-1;
    int hi = 0;
    bool flag = false;
    while(hi<=lo){
        int mid = hi + (lo-hi)/2;
        if(arr[mid]==k){
            cout<<k<<" found at index "<<mid<<endl;
            flag = true;
            break;
        }
        else if(arr[mid]<k){
            lo = mid-1;
        }
        else{
            hi = mid+1;
        }
    }
    if(flag == false){
        cout<<k<<" not found"<<endl;
    }
    return 0;
}
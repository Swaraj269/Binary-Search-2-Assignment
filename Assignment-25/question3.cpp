// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

#include <iostream>
using namespace std;
int main(){
    int matrix[][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int target ;
    cout<< "Enter the target element: ";
    cin>>target;
    bool flag = false;
    for(int i = 0; i<3; i++){
        int lo = 0;
        int hi = 4-1;
        while(lo<=hi){
            int mid = lo + ((hi-lo)/2);
            if(matrix[i][mid]==target){
                cout<< true;
                flag = true;
                break;
            }
            else if(matrix[i][mid]>target){
                hi = mid-1;
            }
            else lo = mid+1;
        }
    }
    if(flag == false){
        cout<< false;
    }
    return 0;
}
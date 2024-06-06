// There is an integer array nums sorted in non-decreasing order (not necessarily with
// distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k
// < nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1],
// nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example,
// [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become
// [4,5,6,6,7,0,1,2,4,4] .
// Given the array nums after the rotation and an integer target , return true if target is in
// nums , or false if it is not in nums .
// You must decrease the overall operation steps as much as possible.

#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector<int> nums = {2,5,6,0,0,1,2};
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<< "Enter the target number: ";
    cin >> target;
    bool flag = false;
    int n = nums.size();
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo + ((hi-lo)/2);
            if(nums[mid]==target){
                cout<< "true";
                flag = true;
                break;
            }
            else if(nums[lo]==target) {
                cout<< "true";
                flag = true;
                break;
            }
            else if(nums[hi]==target){
                cout<< "true";
                flag = true;
                break;
            }
            else if(nums[mid]==nums[lo] && nums[mid]==nums[hi]){
                hi--;
                lo++;
            }
            else if(nums[mid]<=nums[n-1] ){
                if(nums[mid]<=target && target<=nums[hi]){
                    lo = mid+1;
                }
                else hi = mid-1;
            }
            else {
                if(nums[mid]>=target && target>=nums[lo]){
                    hi = mid-1;
                }
                else lo = mid+1;
            }
        }

        if(flag == false) cout<< "false";
    return 0;
}
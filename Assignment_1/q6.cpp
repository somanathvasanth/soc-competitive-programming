#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int> & nums) {
        if(nums.size()==1){return nums[0]; }
        if(nums[0]>nums[1]){return nums[1];}
        if(nums[nums.size()-2]>nums[nums.size()-1]){return nums[nums.size()-1];}
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
           if(mid!=nums.size()-1){ if((nums[mid]>=nums[0])&&(nums[mid+1]<nums[0])){return nums[mid+1];}}
            if((nums[mid]<nums[0])&&(nums[mid-1]>=nums[0])){return nums[mid];}
            if(nums[mid]>=nums[0]){
               start=mid+1;
            }
            if(nums[mid]<nums[0]){
                end=mid-1;
            }
        }
 return nums[0];   }

int main(){
     int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
    int numberofnumbers;
    
    
    cin>>numberofnumbers;
    
    vector<int> arr(numberofnumbers);
    for(int i=0;i<numberofnumbers;i++){
        cin>>arr[i];
    }
    cout<<findMin(arr)<<endl;
}}
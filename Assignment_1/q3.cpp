#include<iostream>
#include<vector>
using namespace std;
int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
    int n;
    cin>>n;
    int arr[n];
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];  
    }
    int st=0;int end=n-1;
    while(arr[st]+arr[end]!=target){
        if(arr[st]+arr[end]>target){
            end=end-1;

    }
if(arr[st]+arr[end]<target){
    st=st+1;
}}
cout<<st+1<<" "<<end+1<<endl;
    
    }}
#include<iostream>
#include<vector>
using namespace std;
int main(){
 int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
    int numberofnumbers;
    cin>>numberofnumbers;
    int arr[numberofnumbers];
    for(int i=0;i<numberofnumbers;i++){
        cin>>arr[i];
    }
    int maxsofar=arr[0];
    int maxnow=0;
    
    for(int i=0;i<numberofnumbers;i++){
     maxnow=maxnow+arr[i];
     if(maxnow>maxsofar){maxsofar=maxnow;}
     if(maxnow<0){maxnow=0;}   
    
    }
    
 cout<<maxsofar<<endl;
 

}}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
       int n;
       cin>>n;
       vector<int> arr(n);
       for(int i=0;i<n;i++){
        cin>>arr[i];
       } 
       vector<int>diff(n-1);
       for(int i=0;i<n-1;i++){
        diff[i]=arr[i+1]-arr[i];
       }
       int long long sum=0;
       for(int i=0;i<n/2;i++){
        sum=sum+diff[2*i];
       }

       if (n%2==1){
        cout<<"YES"<<endl;
               }
        else{
        if(sum>=0){
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;


        }

    }}
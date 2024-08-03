#include <bits/stdc++.h>
using namespace std;
int main(){
     int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
    int n;cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<long long int>> m(n,vector<long long int>(2));
    m[0][0]=arr[0];
    m[0][1]=abs(arr[0]);
    for(int i=1;i<n;i++){
        m[i][0]=min(m[i-1][0]+arr[i],m[i-1][1]+arr[i]);
        m[i][1]=max(abs(m[i-1][0]+arr[i]),abs(m[i-1][1]+arr[i]));
    }
    cout<<m[n-1][1]<<endl;
    }}
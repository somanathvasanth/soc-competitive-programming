#include <bits/stdc++.h>
using namespace std;

int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
        int p;cin>>p;
        int n=2*p;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<pair<int,int>> v(n/2);
        int sum=0;
        for(int i=0;i<n/2;i++){
            v[i].first=arr[i];
            v[i].second=arr[i+n/2];
            if(i!=0){
                sum=sum+v[i].first+v[i].second-v[i-1].first-v[i-1].second;
            }
        }
        cout<<sum<<endl;
        for(int i=0;i<n/2;i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }



    }}
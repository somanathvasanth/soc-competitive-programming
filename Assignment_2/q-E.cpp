#include <bits/stdc++.h>
using namespace std;

int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
long long int n,k,p,q;
        cin>>n;
        cin>>k;
                  map<int,pair<long long int,long long int>> mp;
       long long int v[n];
        for(long long int i=0;i<n;i++){
           cin>>v[i];
           if(mp[v[i]].first!=0){mp[v[i]].second=i+1;}
            else {mp[v[i]].first=i+1;mp[v[i]].second=i+1;}
         }

         
            
        
         for(long long int i=0;i<k;i++){
        cin>>p;
        cin>>q;
       long long int s=mp[q].first;
       long long int l=mp[p].second;
       bool f=false;
       if(s==0||l==0){f=false;}
else f=mp[p].first<mp[q].second;
     if(f){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}     
        }
        }}
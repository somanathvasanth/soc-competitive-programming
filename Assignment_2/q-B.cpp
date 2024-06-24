#include <bits/stdc++.h>
using namespace std;
int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
int n;
        cin>>n;
   vector<int> array;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    array.push_back(temp);
   } 

sort(array.begin(),array.end());
vector<int> newarr;
for(int i=0;i<n;i++){
    if(i==0){newarr.push_back(array[0]);continue;}
    if(array[i-1]!=array[i]){newarr.push_back(array[i]);}
}
queue<int> q;
int m=0;
q.push(newarr[0]);
for(int i=1;i<newarr.size();i++){
if(newarr[i]-q.front()<=n-1){q.push(newarr[i]);
int t=q.size();
m=max(m,t);}
else{
    int s=q.size();
    m=max(m,s);
    if (!q.empty()){q.pop();i=i-1;}
    else {q.push(newarr[i]);}
}

}
if(m==0){cout<<"1"<<endl;}
else  cout<<m<<endl;  }}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int numoftcases=1;
    
    for(int i=0;i<numoftcases;i++){
int n,d;
cin>>n>>d;
int ctr=0;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
sort(arr.begin(),arr.end());
deque<int> dq;
for(int i=0;i<n;i++){
    dq.push_back(arr[i]);
}
while(!dq.empty()){
  int max=dq.back();
  int numberremove=d/max;
  if(dq.size()>numberremove){
    for(int i=0;i<numberremove;i++){dq.pop_front();}
    dq.pop_back();
    ctr=ctr+1;
  }
    else break;
}
 cout<<ctr<<endl;   }}
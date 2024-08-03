#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n,t;
   cin>>n>>t;
   vector<int> arr(n);
   
   for(int i=1;i<n;i++){
    cin>>arr[i];
   }
   vector<int>v;
   int present=1;
   
   while(present<n){
v.push_back(present);
present=present+arr[present];
   }
   if(present==n){v.push_back(n);}
bool f=false;
for(int i=0;i<v.size();i++){
if(t==v[i]){f=true;}
}
if(f){cout<<"Yes"<<endl;}
if(!f){cout<<"No"<<endl;}

   }
#include <bits/stdc++.h>

using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int> adj[n+1];
for(int i=0;i<m;i++){
   int x,y;cin>>x>>y;
   adj[x].push_back(y);
   adj[y].push_back(x);
}
vector<int> visited(n+1);
vector<int> comp(n+1);
vector<int> number(n+1);
for(int i=1;i<n+1;i++){
if(!visited[i]){
   visited[i]=true;comp[i]=i;
   queue<int> q;
   vector<int> vvv;
   q.push(i);
   vvv.push_back(i);
   while(!q.empty()){
      int ppp=q.front();
      q.pop();
      for(auto it:adj[ppp]){
         if(!visited[it]){visited[it]=true;comp[it]=i;q.push(it);vvv.push_back(it);}
      }
   }
number[i]=vvv.size();
}
}
bool ans=true;
for(int i=1;i<n+1;i++){
if(adj[i].size()>0){if(adj[i].size()!=number[comp[i]]-1){ans=false;break;}}
}

if(ans){cout<<"YES"<<endl;}
if(!ans){cout<<"NO"<<endl;}

   }
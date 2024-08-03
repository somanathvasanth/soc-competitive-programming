#include <bits/stdc++.h>

using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int> adj[n+1];

for(int i=0;i<m;i++){
int p;
cin>>p;
if(p>0){int prev,now;
cin>>prev;
for(int j=0;j<p-1;j++){
cin>>now;
adj[prev].push_back(now);
adj[now].push_back(prev);
prev=now;
}}

}

vector<bool> visited(n+1);
vector<int> v(n+1);
vector<int> ctr(n+1);
for(int i=1;i<n+1;i++){
   if(!visited[i]){visited[i]=true;v[i]=i;
   queue<int> q;
   vector<int> comp;
   
   comp.push_back(i);
   q.push(i);
   while(!q.empty()){
      int xx=q.front();
      q.pop();
      for(auto it:adj[xx]){
         if(!visited[it]){
            visited[it]=true;comp.push_back(it);q.push(it);v[it]=i;
         }
      }


   }
ctr[i]=comp.size();

   }
}
for(int i=1;i<n+1;i++){
   cout<<ctr[v[i]]<<" ";
}
cout<<endl;

   }
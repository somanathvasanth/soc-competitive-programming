#include <bits/stdc++.h>

using namespace std;
int main(){
long long int n,m;
cin>>n>>m;
vector<long long int> c(n);
for(long long int i=0;i<n;i++){
   cin>>c[i];
}
vector<long long int> adj[n];
for(long long int i=0;i<m;i++){
long long int x,y;
cin>>x>>y;
adj[x-1].push_back(y-1);
adj[y-1].push_back(x-1);
}
long long int money=0;
vector<bool> visited(n);
for(long long int i=0;i<n;i++){
   if(!visited[i]){
      int m=c[i];
      queue<int> q;
      visited[i]=true;
      q.push(i);
      while(!q.empty()){
         int f=q.front();
        
         if(m>=c[f]){m=c[f];}
         q.pop();
         for(int i=0;i<adj[f].size();i++){
            if(!visited[adj[f][i]]){
              visited[adj[f][i]]=true;q.push(adj[f][i]); 
            }
         }
      }
      money=money+m;






   }
}
cout<<money<<endl;
   }
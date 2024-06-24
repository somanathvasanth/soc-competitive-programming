#include <bits/stdc++.h>
using namespace std;

int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
int n,m;
cin>>n>>m;
vector<int> column(n*m+1);
vector<int> row(n*m+1);
vector<vector<int>> first;
for(int i=0;i<n;i++){
    vector<int> v(m);
    
    for(int j=0;j<m;j++){
        cin>>v[j];
        row[v[j]]=i;
        column[v[j]]=j;
    }
    first.push_back(v);
}
vector<int> column2(n*m+1);
vector<int> row2(n*m+1);
vector<vector<int>> first2;
for(int i=0;i<n;i++){

    vector<int> v2(m);
    
    for(int j=0;j<m;j++){
        cin>>v2[j];
        row2[v2[j]]=i;
        column2[v2[j]]=j;
    }
    first2.push_back(v2);
}
bool f=true;
for(int i=0;i<n;i++){
    int rownumber1=row[first[i][0]];
    int rownumber2=row2[first[i][0]];
    for(int j=0;j<m;j++){
if(row2[first[i][j]]!=rownumber2){
    f=f&&false;
}
    }
}


for(int i=0;i<m;i++){
    int rownumber1=column[first[0][i]];
    int rownumber2=column2[first[0][i]];
    for(int j=0;j<n;j++){
if(column2[first[j][i]]!=rownumber2){
    f=f&&false;
}
  }
}





if(f){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;
    }}
#include <bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2){
    int ctr=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){ctr=ctr+1;}
        if(ctr>1){return false;}
    }
return true;
}

int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
int n;cin>>n;
string s;
cin>>s;
vector<int> factors;
for(int i=1;i<=n;i++){
    if(n%i==0){factors.push_back(i);}
}
for(int i=0;i<factors.size();i++){
    string sub1=s.substr(0,factors[i]);
    string sub2=s.substr(n-factors[i],factors[i]);
string ss1=sub1;
string ss2=sub2;
for(int j=1;j<n/factors[i];j++){
ss1+=sub1;
ss2+=sub2;
}

if(compare(s,ss1)){cout<<factors[i]<<endl;break;}
if(compare(s,ss2)){cout<<factors[i]<<endl;break;}
}


    }}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
int n;
cin>>n;
int ctr=0;
while(n/2>0){
    if(n%2==0){
        ctr=ctr+1;
    }
n=n/2;

}
cout<<pow(2,ctr);

    }}
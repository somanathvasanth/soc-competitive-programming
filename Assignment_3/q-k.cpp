#include <bits/stdc++.h>
using namespace std;

int binarysearch(  vector<long long int>& vec,int key) {
    int st = 0;
    int end = vec.size() - 1;
    int mid;
    while (st <= end) {
        mid = (st + end) / 2;
        if (vec[mid] == key) {
            return mid;
        }
        if (vec[mid] > key) {
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return st-1; 
}

int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
int n;cin>>n;
long long int k;
cin>>k;
long long int health[n];
for(int i=0;i<n;i++){
    cin>>health[i];
}
vector<long long int> place(n);
for(int i=0;i<n;i++){
    cin>>place[i];
}
int left=binarysearch(place,0);
int right=left+1;

for(int i=0;i<n;i++){
    if(place[i]<0){place[i]=-1*place[i];}
}
long long int sum=0;
while(left!=-1||right!=n){
   if(left!=-1){if(place[left]<place[right]||right==n){
   sum=sum+health[left];
   if(sum>k*place[left]){cout<<"NO"<<endl;break;}

   left=left-1;
   } }
   if(right!=n){if(place[right]<=place[left]||left==-1){

sum=sum+health[right];
   if(sum>k*place[right]){cout<<"NO"<<endl;break;}

   right=right+1;

   }}
}
if(left==-1&&right==n){cout<<"YES"<<endl;}
   }
}
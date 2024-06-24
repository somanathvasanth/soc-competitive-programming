#include <bits/stdc++.h>
using namespace std;
int binarysearch(long long int key, vector<long long int>& vec) {
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
    long long int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
int n;
cin>>n;
if(n==1){
    int f;
    cin>>f;
    cout<<0<<endl;
}
if(n!=0&&n!=1){
vector<long long int> arr;
for(int i=0;i<n;i++){
    long long int temp;
    cin>>temp;
    arr.push_back(temp);
}
vector<long long int> copy;
    copy.assign(arr.begin(), arr.end()); 
sort(arr.begin(),arr.end());
vector<long long int> ps;
long long int sum=0;
for(int i=0;i<n;i++){sum=sum+arr[i];

ps.push_back(sum);
}
vector<int> vvv(n);
vvv[n-1]=n-1;
for(int i=n-2;i>=0;i--){
if(ps[i]>=arr[i+1]){vvv[i]=vvv[i+1];}
else vvv[i]=i;

}


for(int i=0;i<n;i++){
    int mid=binarysearch(copy[i],arr);
    
    if(i!=n-1)cout<<vvv[mid]<<" ";
    else cout<<vvv[mid]<<endl;
}}

    }}
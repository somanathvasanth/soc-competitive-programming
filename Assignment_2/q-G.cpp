#include <bits/stdc++.h>
using namespace std;
int binarysearch(long long int key, vector< long int>& vec) {
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
int n;
cin>>n;
vector<pair<long int,long int>> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i].second;
    cin>>arr[i].first;
}
vector<long int> v;
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
v.push_back(arr[i].second);
}
sort(v.begin(),v.end());



long long int greetings=0;
for(int i=0;i<n;i++){
   long long int num=binarysearch(arr[i].second,v);
    
    v.erase(v.begin()+num);
    
  greetings=greetings+num;  
}

cout<<greetings<<endl;
    }}
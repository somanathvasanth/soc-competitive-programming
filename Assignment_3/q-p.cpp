#include <bits/stdc++.h>

using namespace std;

int main() {
    int numoftcases;
    cin >> numoftcases;
    
    for (int i = 0; i < numoftcases; i++) {
       int n;cin>>n;
       vector<long long int>arr(n);
              for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       sort(arr.begin(),arr.end());
       long long int sum=arr[0];
       bool f=true;
       if(arr[0]!=1){f=false;}
       for(int i=1;i<n;i++){
        if(sum<arr[i]){f=false;}
        sum=sum+arr[i];

       }
       if(f){cout<<"YES"<<endl;}
       if(!f){cout<<"NO"<<endl;}

    }
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int numoftcases;
    cin >> numoftcases;
    
    for (int i = 0; i < numoftcases; i++) {
       
int n;
cin>>n;
vector<string> a(2);
cin>>a[0];
cin>>a[1];
bool f=false;
for(int i=0;i<n;i++){
    if((i+1)%2==0){if(a[0][i]=='<'&&i+1<n&&a[1][i+1]=='<'){f=true;}
    if(a[0][i]=='<'&&i-1>=0&&a[1][i-1]=='<'){f=true;}
    }

}
if(!f){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;

    }
    
    return 0;
}
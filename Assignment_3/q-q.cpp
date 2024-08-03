#include <bits/stdc++.h>
using namespace std;

int main() {
    int numoftcases;
    cin >> numoftcases;
    
    for (int t = 0; t < numoftcases; t++) {
        int n;
        cin >> n;
        
        vector<string> a(2);
        cin>>a[0];
        cin>>a[1];
        
        
        vector<vector<int>> g(2, vector<int>(n));
        string s;
        
        // Initialize the first row of f
        
        g[0][0]=1;
        g[1][0]=1;
        // Fill the first row of f based on a[0]
        for (int i = 1; i < n; i++) {
           
            g[0][i]=1;
        }
        
        // Initialize the second row of f
       
        
        // Fill the second row of f based on comparison
        for (int i = 1; i < n; i++) {
            char s1 = a[1][i-1];
            char s2 = a[0][i];
           
           if(s1==s2) g[1][i]=g[1][i-1]+g[0][i];
           if(s1>s2)g[1][i]=g[0][i];
           if(s2>s1)g[1][i]=g[1][i-1];
            
        }

    int x,y;
    x=0;y=0;
    vector<char> st;
    st.push_back(a[0][0]);
    int ctr=1;
while(y<n-1){
    if(x==0){
        if(a[0][y+1]<a[1][y]){y=y+1;st.push_back(a[0][y]);ctr=1;}
        else if(a[0][y+1]==a[1][y]){y=y+1;st.push_back(a[0][y]);ctr=ctr+1;}
        else {x=1;st.push_back(a[1][y]);}
    }
    if(x==1){
        y=y+1;
        st.push_back(a[1][y]);
    }
}
if(y==n-1&&x==0){
    
st.push_back(a[1][n-1]);
}


for(int i=0;i<st.size();i++){
    cout<<st[i];
}
cout<<endl;







        
        // Output the result
        
        cout<<ctr<<endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int numoftcases;
    cin >> numoftcases;
    
    for (int i = 0; i < numoftcases; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());
        vector<vector<bool>> f(n,vector<bool>(5000, false));
        
        if (arr[0] == 1) {
            f[0][0] = true;f[0][1]=true;
            
            for (int i = 1; i < n; i++) {
                
                for (int j = 0; j <= 5000; j++) {
                    
                    if (f[i-1][j] && j +arr[i] <=5000) {
                        f[i][j+arr[i]]=true;
                    }
                    f[i][j]=f[i][j]||f[i-1][j];
                }
                
                
            }
        }
        
        bool fi=true;
        for(int i=1;i<n;i++){
            if(!f[i-1][arr[i]])
            {fi =false;break;}
        }
        
        if ((arr[0]!=1)||(n > 1 && arr[1] != 1)) {
            fi= false;
        }
        
        if (fi) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
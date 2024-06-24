#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char> st;
        bool ans=true;
        for(char sr : s){
            if((sr=='(')||(sr=='{')||(sr=='[')){
                st.push(sr);continue;
            }
           
            else {
                if(st.empty()){
                return false;
            }
                if (st.top()=='('){
                    if(sr==')'){st.pop();continue;}
                    else return false;
                }
                if (st.top()=='{'){
                    if(sr=='}'){st.pop();continue;}
                    else return false;
                }
                if (st.top()=='['){
                    if(sr==']'){st.pop();continue;}
                    else return false;
                }
            }
            
        }
 return st.empty();   }
 int main(){
    int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
string s;
cin>>s;
cout<<isValid(s)<<endl;





    }
 }
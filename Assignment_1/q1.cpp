#include <bits/stdc++.h>
using namespace std;
int shortestSubarray(vector<int>& nums, int k) {
        if((nums.size()==1)&&(k==nums[0])){
            return 1;
        }
long int p[nums.size()];

long int sum=0;
long int ans=nums.size()+1;
for(long int i=0;i<nums.size();i++){
sum=sum+nums[i];
p[i]=sum;

}
deque<long int> dq;
for(long int i=0;i<nums.size();i++){
while((!dq.empty())&&(p[i]<=p[dq.back()]))
{dq.pop_back();}

while((!dq.empty())&&(p[i]>=k+p[dq.front()])){
int q=dq.front();
dq.pop_front();
ans=min(ans,i-q);
}
dq.push_back(i);
if(p[dq.back()]>=k){
       long int p=i+1;
        ans=min(ans,p);
    }}

    if(p[dq.back()]>=k){
      long  int p=nums.size();
        ans=min(ans,p);
    }


if(ans==nums.size()+1){
    return -1;
}
  return ans;  }
int main(){int numoftcases;
    cin>>numoftcases;
    for(int i=0;i<numoftcases;i++){
    int numberofnumbers;
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<shortestSubarray(v,k)<<endl;
    }
}
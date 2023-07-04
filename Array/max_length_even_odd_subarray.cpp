#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={2,5,3,8,-6,-7,-12};
    int n=a.size();
    int curr=1;
    
    int res=1;
    for(int i=1;i<n;i++){
        if((a[i]%2==0 && a[i-1]%2!=0)||(a[i]%2!=0 &&a[i-1]%2==0)){
            curr++;
            res=max(res,curr);
        }
        else curr=1;
    }
    cout<<res;
    return 0;
}
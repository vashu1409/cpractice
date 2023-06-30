#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,7,1,1,1,5,7,8,1,1,1,1,8};
    int n=a.size();
    int curr=0;
    int res=0;
    for(int i=0;i<n;i++){
        if(a[i]!=1){
            
            curr=0;
            
        }
        else{
            curr++;
            res=max(res,curr);
            }
        
    }
    cout<<res;
    return 0;
}
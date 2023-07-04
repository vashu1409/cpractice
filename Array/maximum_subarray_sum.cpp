#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={2,5,3,8,-6,-7,-12};
    int n=a.size();
    int maxending=a[0];
    int res=a[0];
    for(int i=1;i<n;i++){
        maxending=max(maxending+a[i],a[i]);
        res=max(maxending,res);
    }
    cout<<res;
    return 0;
}
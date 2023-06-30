#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> a={10,3,5,7,6,8,7,5};
    int n=a.size();
    int res=a[1]-a[0];
    int minval=a[0];
    for(int j=0;j<n;j++){
        res=max(res,a[j]-minval);
        minval=min(minval,a[j]);
    }
    cout<<res;
    return 0;
}
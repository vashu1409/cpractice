#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={3,0,1,2,7,1,5};
    int n=a.size();
    int res=0;
    int lmax[n];
    lmax[0]=a[0];
    int rmax[n];
    rmax[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        lmax[i]=(max(lmax[i-1],a[i]));
    }
    for(int i=n-2;i>=0;i--){
        rmax[i]=(max(rmax[i+1],a[i]));
    }
    for(int i=1;i<n-1;i++){
        res+= (min(lmax[i],rmax[i]))-a[i];
    }
    cout<<res;
    return 0;
}

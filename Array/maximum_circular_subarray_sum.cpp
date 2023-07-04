#include<iostream>
#include<vector>
using namespace std;
int maxnormalarray(vector<int>&a){
    int n=a.size();
        int maxending=a[0];
        int res=a[0];
        for(int i=1;i<n;i++){
            maxending=max(maxending+a[i],a[i]);
            res=max(maxending,res);
        }
        return res;
}
int main(){
    vector<int> a={2,5,3,8,-6,-7,12};
    int n=a.size();
    int maxnormal=maxnormalarray(a);
    if(maxnormal<0) cout<<maxnormal;
    else{
        int maxsum=0;
        for(int i=0;i<n;i++){
            maxsum+=a[i];
            a[i]=-a[i];
            }
            int temp=maxnormalarray(a);
            int maximum=max(maxnormal,(maxsum+temp));
            cout<<maximum;
    }
    return 0;
}


    
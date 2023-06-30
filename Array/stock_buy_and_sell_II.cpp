#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,5,3,8,12};
    int n=a.size();
    int profit=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            profit+=(a[i]-a[i-1]);
        }
    }
    cout<<profit;
    return 0;
}
#include <iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> a={2,3,5,8,34,56,44,56,34,7};
    int d =3;
    vector<int> ans;
        int n= a.size();
        if(d>n)d=d%n;
        for(int i=0;i<a.size();i++){
            ans.push_back(a[(n-d+i)%n]);
        }
        for(int i=0;i<a.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    }

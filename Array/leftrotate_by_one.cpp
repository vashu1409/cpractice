#include <iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> a={2,3,5,8,34,56,44,56,34,7};
    int temp=a[0];
    for(int i=1;i<=a.size();i++){
        a[i-1]=a[i];
    }
    a[a.size()-1]=temp;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a={10,0,40,0,8,6,0,0,6,0};
    
    int count =0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            swap(a[i],a[count]);
            count++;
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
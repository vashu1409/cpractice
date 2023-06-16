#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a ={10,10,20,20,20,30,30,30,30,30,40,50};
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]){
            a.erase(a.begin()+i);
            i--;
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<a.size(); 
    return 0;
}
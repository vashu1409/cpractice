#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> a={10,3,5,7,6,8,7,5};
    stack<int> s;
    int largest=a[a.size()-1];
    vector<int> ans;
    s.push(a[a.size()-1]);
    for(int i=a.size()-2;i>=0;i--){

       if(a[i]>largest){
        s.push(a[i]);
        largest=a[i];
       }
       
    }
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
       }
       for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
       }

       return 0;
       

}
#include <iostream>
using namespace std;
#include<vector>
//METHOD 2
    //CHANGES IN SAME ARRAY
    void reverse(vector<int> &a,int start,int end){
        while(start<=end){
            swap(a[start],a[end]);
            start++;
            end--;
        }
    }

int main(){
    vector<int> a={2,3,5,8,34,56,44,56,34,7};
    int d =3;
    //METHOD 1
    //making new array
    /*vector<int> ans;
    for(int i=0;i<a.size();i++){
        ans.push_back(a[(d+i)%a.size()]);
        }
    for(int i=0;i<a.size();i++){
        cout<<ans[i]<<" ";
    } 
    return 0;*/

    //METHOD 2
    //CHANGES IN SAME ARRAY
    reverse(a,0,d-1);
    reverse(a,d,a.size()-1);
    reverse(a,0,a.size()-1);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
    }
    
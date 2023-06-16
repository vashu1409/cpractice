#include <iostream>
using namespace std;
#include<vector>

int main(){
    int a[10]={2,3,5,8,34,56,44,56,34,7};
    int res=-1;
    int largest=0;
    for(int i=0;i<10;i++){
        if(a[i]>a[largest]){
            res=largest;
            largest=i;
            }
        else if(a[i]<a[largest]){
            if(a[i]>a[res]){
                res=i;
            }
            else if(res==-1)res=i;
                        
        }
}
cout<<res;
return 0;
}
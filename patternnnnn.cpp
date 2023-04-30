#include<iostream>
using namespace std;

/*PATTERN 
    5
   545
  54345
 5432345
543212345
*/

int main(){
    int i,k,j,l;
    int n=5;

    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++){
            cout<<" ";
        }
        for(j=5;j>=5-i+1;j--){
            cout<<j;
        }
        for(l=n-i+2;l<=5;l++){
            cout<<l;
        }
        cout<<endl;
        

    }

    return 0;
}
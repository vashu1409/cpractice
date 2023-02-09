# include <iostream>
using namespace std;
int main(){
    //    * * * *
     //   * * * * 
    //    * * * * 
      // cout << " PATTERNS" <<endl;
       int rows;
       
       //cout << "enter rows";
       cin >> rows;
       
        for (int c=1;c<=rows;c++){
        for (int d=1;d<=rows;d++){
            cout << "* " ;
        }
        cout <<endl;
        }
     // 1 2 3 4
    //  1 2 3 4
     // 1 2 3 4
     
int i=1;
while(i<=rows){
    int j =1;
    while(j<=rows){
        cout <<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
    
    cout <<endl;
     // 1 1 1 1
    //  2 2 2 2
     // 3 3 3 3
     
int a=1;
while(a<=rows){
    int b =1;
    while(b<=rows){
        cout <<a;
        b=b+1;
    }
    cout<<endl;
    a=a+1;
}
    
    cout <<endl;
     // 4 3 2 1
     // 4 3 2 1
     // 4 3 2 1
      
     
int k=1;
while(k<=rows){
    int p =1;
    while(p<=rows){
        cout <<rows-p+1;
        p=p+1;
    }
    cout<<endl;
    k=k+1;
}
cout <<endl;

    //    1 2 3
     //   4 5 6 
    //    7 8 9 
      int count=1;
        for (int e=1;e<=rows;e++){
        for (int f=1;f<=rows;f++){
            cout << count<<" " ;
            count++;
        }
        cout <<endl;
    }

    
    // *
    // * *
     //* * *
     cout <<endl;
    for (int g=0;g<rows;g++){
        for (int h=0;h<=g;h++){
            cout << "* " ;
        }
        cout <<endl;
    }
    cout <<endl;

    
//1
//22
//333
int l=1;
while(l<=rows){
    int m=1;
    while(m<=l){
        cout<<l;
        m++;
   }
   cout<<endl;
   l++;
}
cout <<endl;

    
//1
//23
//456
int n=1;
int count1=1;
while(n<=rows){
    int o=1;
    while(o<=n){
        cout<<count1;
        o++;
        count1++;
   }
   cout<<endl;
   n++;
}
cout <<endl;

    
//1
//23
//345
int q=1;

while(q<=rows){
    int val=q;
    int r=1;
    while(r<=q){
        cout<<val;
        r++;
        val++;
   }
   cout<<endl;
   q++;
}
cout <<endl;

    
//1
//21
//321
int s=1;

while(s<=rows){
    int val=s;
    int t=1;
    while(t<=s){
        cout<<val;
        t++;
        val--;
   }
   cout<<endl;
   s++;
}
cout<<endl;
//AAA
//BBB
//CCC
int u=1;
while(u<=rows){
    int v=1;
    while(v<=rows){
        char ch= 'A'+u-1;
        cout<<ch;
        v++;
  
    }
    cout<<endl;
    u++;
}
cout<<endl;
//ABC
//ABC
//ABC
int u1=1;
while(u1<=rows){
    int v1=1;
    while(v1<=rows){
        char ch= 'A'+v1-1;
        cout<<ch;
        v1++;
  
    }
    cout<<endl;
    u1++;
}
cout<<endl;
//ABC
//DEF
//GHI
int u2=1;
int count2=0;
while(u2<=rows){
    int v2=1;
    while(v2<=rows){
        char ch= 'A'+count2;
        cout<<ch;
        v2++;
        count2++;
  
    }
    cout<<endl;
    u2++;
}
cout<<endl;
//ABC
//BCD
//CDE
int u3=1;
while(u3<=rows){
    int v3=1;
    int val1=u3;
    while(v3<=rows){
        char ch= 'A'+val1-1;
        cout<<ch;
        val1++;
        v3++;
  
    }
    cout<<endl;
    u3++;
}
cout<<endl;
//A
//BB
//CCC
int a1=1;
while(a1<=rows){
    int b1=1;
    while(b1<=a1){
        char ch='A'+a1-1;
        cout<<ch;
        b1++;
    }
    cout<<endl;
    a1++;
} 
cout<<endl;
//A
//BC
//DEF
int a2=1;
int count3=1;
while(a2<=rows){
    int b2=1;
    while(b2<=a2){
        char ch='A'+count3-1;
        cout<<ch;
        b2++;
        count3++;
    }
    cout<<endl;
    a2++;
}
cout<<endl;
//c
//BC
//ABC
int a4=1;
while(a4<=rows){
    int b4=1;
    int val4=rows-a4+1;
    while(b4<=a4){
        char ch='A'+val4-1;
        cout<<ch;
        b4++;
        val4++;
    }
    cout<<endl;
    a4++;
}
cout<<endl;
//  *
// **
//***
int c1=1;
while(c1<=rows){
    // print space triangle
        int space=rows-c1;
        while(space){
            cout<<" ";
            space--;
        }
        // print star
        int d1=1;
        while(d1<=c1){
            cout<<"*";
            d1++;
        }
        c1++;
        cout<<endl;
   
}
cout<<endl;
//***
//**
//*
int c2=1;
while(c2<=rows){
    int d2=1;
        while(d2<=rows-c2+1){
            cout<<"*";
            d2++;
        }
        c2++;
        cout<<endl;
}

cout<<endl;
//***
// **
//  *
int c3=1;
while(c3<=rows){
    int space2=1;
    while(space2<=c3-1){
        cout<<" ";
        space2++;
    }
    int d3=1;
        while(d3<=rows-c3+1){
            cout<<"*";
            d3++;
        }
        c3++;
        cout<<endl;
}
//   1   
//  121
// 12321
//1234321
cout<<endl;
int p1=1;
while(p1<=rows){
    //print 1 pattern
    int space5=rows-p1;
    while(space5){
        cout<<" ";
        space5--;
    }
    int q2=1;
        while(q2<=p1){
            cout<<q2;
            q2++;
        }

        int r1=2;
        int val8=p1-1;
        while(r1<=p1){
            cout<<val8;
            val8--;
            r1++;
        }

        p1++;
        cout<<endl;
}
    return 0;
}   


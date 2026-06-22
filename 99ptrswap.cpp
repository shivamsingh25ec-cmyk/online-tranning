#include<iostream>
 using namespace std;
  int main()
  {int a=98,b=44;
     cout<<" before="<<a<<"  "<<b;
      int *x=&a;
        int *y=&b;
         int h=*x;
          *x=*y;
           *y=h;
           cout<<" after="<<a<<"  "<<b;
       

  }
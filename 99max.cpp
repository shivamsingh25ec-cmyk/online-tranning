#include<iostream>
 using namespace std;
   int max( int a, int b)
   {if(a>b){
    cout<<" "<<a;

   }else if(b>a)
   {
    cout<< " "<<b;

   }else {
    cout<<"both are equal";
   }
   
return 0;
   }
   int main()
   {
    int s,t;
     cout<<" enter the two numbers";
      cin>>s>>t;
        return max(s,t);
   }
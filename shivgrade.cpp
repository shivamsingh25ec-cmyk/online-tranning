#include<iostream>
 using namespace std;
  int main()
  {
    int m;
     cout<<"enter student marks out of 100 ";
      cin>>m;
      if (m>85)
      {
        cout<<"\n grade = A++";
      }else if (85>m>65)
      {cout<<" \n A+";
      }else if (65>m>35)
      {cout<<" \n B";
      }else 
      {cout<<" \n fail ";
      }return 0;
      
    }
      
#include<iostream>
#include<vector>
 using namespace std;
  int main()
  {
    vector<int> s={9,45,7,3,55};
      int maxele=s[0];
      for(int i=1;i<s.size();i++)
      {
        if(s[i]>maxele)
        {
            maxele=s[i];
        }}
         cout<<" maxelement ="<<maxele;
      

  }
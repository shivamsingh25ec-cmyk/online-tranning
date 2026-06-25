#include<iostream>
#include<vector>
 using namespace std;
  int main()
  {
    vector<int> s={9,45,7,3,55};
      int miniele=s[0];
      for(int i=1;i<s.size();i++)
      {
        if(s[i]<miniele)
        {
            miniele=s[i];
        }}
         cout<<" minielement ="<<miniele;
      

  }
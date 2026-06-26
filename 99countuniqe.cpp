#include<iostream>
#include<vector>
#include<set>
using namespace std;
 int main(){
    vector<int> s={2,2,3,34,2,3,6};
     set<int> v(s.begin(),s.end());
      cout<<"\nno of unque elements are="<<v.size();
 }
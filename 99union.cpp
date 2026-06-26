#include<iostream>
#include<vector>
#include<set>
using namespace std;
 int main()
 {
    vector<int> a={1,2,3};
    vector<int>b={3,4,5};
      set<int> s(a.begin(),a.end());
       s.insert(b.begin(),b.end());
       for(int x:s){
        cout<<" "<<x;
       }
       
 }
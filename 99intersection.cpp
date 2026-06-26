#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    set<int> a= {8,6,2,3};
      set<int> b ={2,6,3,5,9};

         cout<<"common nubers are"<<endl;
      for(int x : a){
    if(b.count(x)){
        cout<<" "<<x;
    }
}


}
#include<iostream>
using namespace std;

    int main(){
        int s,t,r;
        cout<<" enter three numbers";
        cin>>s>>t>>r;
        if(s>t && s>r){
            cout<<"  "<<s<<"is the greater";
             
        }
        else if(t>s && t>r)
        {
         cout<<" "<<t<<" is greater";
         
    }
else 
{cout<<" "<<r<<"is greater";
}return 0;
}
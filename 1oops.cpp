#include<iostream>
using namespace std;
 class employee{
     public:
       int salray;
        string name;
        
            
         
void display(){
     cout<<" name:"<<name<<endl;
      cout<<"  salray:"<<salray;
      

}
 };
 int main(){
   employee e;
     e.name="shibam";
     e.salray=800000;
      e.display();
      return 0;

 }
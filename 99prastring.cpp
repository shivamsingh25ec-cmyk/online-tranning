#include <iostream>
using namespace std;

int main() {
    string str;
   str="shivam";

    string rev = "";

    for(int i = str.length()-1; i >= 0; i--) {
        rev = rev + str[i];
 }

if(str == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string str;
    str="asdfghjk";

for(int i = str.length()-1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}
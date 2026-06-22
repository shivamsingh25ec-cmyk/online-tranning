#include <iostream>
using namespace std;

int main() {
    string str;
    str="try";

    int words = 1;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ')
            words++;
    }

    cout << "Number of words = " << words;

    return 0;
}
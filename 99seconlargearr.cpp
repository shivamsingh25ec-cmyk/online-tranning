#include <iostream>

using namespace std;

int main() {
   

    int arr[5]={23,33,56,8,23};

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    int larg = min;
    int secondLargest = min;

    for(int i = 0; i < 5; i++) {

        if(arr[i] > larg) {
            secondLargest = larg;
            larg = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest = " << secondLargest;

    return 0;
}
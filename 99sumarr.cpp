#include <iostream>
using namespace std;

int main() {
    int n;
   cout<<"enter the no";
    cin >> n;

    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}
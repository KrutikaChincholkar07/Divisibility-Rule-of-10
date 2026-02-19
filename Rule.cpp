#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 10 == 0)
        cout << num << " is divisible by 10";
    else
        cout << num << " is not divisible by 10";

    return 0;
}

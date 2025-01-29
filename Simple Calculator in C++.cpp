

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout << "enter first number";
    cin >> num1;
    cout << "enter operators (+,_,*,/)";
    cin >> op;
    cout << "enter second number";
    cin >> num2;
    if (op == '+') {
        cout << "the sum is" << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << "the sub is" << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << "the multiply is" << num1 * num2 << endl;
    }
    else if (op == '/') {
        cout << "the div is" << num1 / num2 << endl;
    }
    else {
        cout << "you enter the wrong operator";
    }
}


#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int multiply = 0;
    int divide = 0;
    int diff = 0;
    int number1;
    cout << "Type a number: " << endl;
    cin >> number1;
    cout << "Number 1 is: " << number1 << endl;

    int number2;
    cout << "Type a number: " << endl;
    cin >> number2;
    cout << "Number 2 is: " << number2 << endl;

    string sign;
    cout << "Pick:+ , - , * , /";
    cin >> sign;
    cout << sign;

    if (sign = "+") {
        sum = number1 + number2;
        cout << "The sum of the two numbers is: " << sum << endl;
    }

    if (sign = "*") {
        multiply = number1 * number2;
        cout << "The two numbers multiplyed is: " << multiply << endl;
    }

    if (sign = "/") {
        divide = number1 / number2;
        cout << divide;
    }

    if (sign = "-") {
        diff = number1 - number2;
        cout << diff;
    }

    else {
        return 0;
    }





}



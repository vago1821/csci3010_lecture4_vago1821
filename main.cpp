#include <iostream>
#include <vector>

#include "functions_to_implement.cpp"

using namespace std;

int main() {
    cout << "Sign: " << endl;
    cout << Sign(-3) << endl;
    cout << Sign(13) << endl;
    cout << Sign(0) << endl;

    cout << "NthFibonacci: " << endl;
    cout << NthFibonacci(5) << endl;
    cout << NthFibonacci(6) << endl;
    cout << NthFibonacci(7) << endl;

    cout << "Factorial: " << endl;
    cout << Factorial(3) << endl;
    cout << Factorial(15) << endl;
    cout << Factorial(0) << endl;
}
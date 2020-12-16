#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    cout << "7 + 8 = " << Calculator::Sum(7.0f, 8.0f) << endl;
    cout << "7 - 8 = " << Calculator::Subs(7.0f, 8.0f) << endl;
    cout << "7 / 8 = " << Calculator::Div(7.0f, 8.0f) << endl;
    cout << "7 * 8 = " << Calculator::Mult(7.0f, 8.0f) << endl;

    return 0;
}

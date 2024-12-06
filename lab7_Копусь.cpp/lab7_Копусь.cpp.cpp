#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    int fibonacciNumber;
    cout << "Введіть число Фібоначчі: ";
    cin >> fibonacciNumber;

    if (fibonacciNumber < 0) {
        cout << "Число Фібоначчі має бути додатнім або нулем." << endl;
        return 0;
    }

    
    int a = 0, b = 1, current = 0, position = 0;

    if (fibonacciNumber == 0) {
        cout << "Порядковий номер числа Фібоначчі: 1" << endl;
        return 0;
    }

    for (position = 2; current < fibonacciNumber; position++) {
        current = a + b;
        a = b;
        b = current;

        if (current == fibonacciNumber) {
            cout << "Порядковий номер числа Фібоначчі: " << position << endl;
            return 0;
        }
    }
    cout << "Введене число не є числом Фібоначчі." << endl;
    return 0;
}

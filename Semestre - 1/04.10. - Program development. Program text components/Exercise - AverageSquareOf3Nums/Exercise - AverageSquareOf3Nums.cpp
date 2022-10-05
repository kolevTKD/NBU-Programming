#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    double result = (sqrt(num1) + sqrt(num2) + sqrt(num3)) / 3;

    cout << result << endl;
}

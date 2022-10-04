#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	cout << "First digit is " << number / 100 << endl;
	number %= 100;

	cout << "Second digit is " << number / 10 << endl;
	number %= 10;

	cout << "Third digit is " << number << endl;

	return 0;
}

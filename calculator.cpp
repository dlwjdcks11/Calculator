#include <iostream>
using namespace std;

int main()
{	
	int a, b;
	char op;

	cin >> a >> op >> b;

	switch (op)
	{
	case '+':
		cout << a + b << endl;
		break;

	case '-':
		cout << a - b << endl;
		break;

	case '*':
		cout << a * b << endl;
		break;

	case '/':
		if (b == 0)
		{
			cout << "You cannot divide by zero" << endl;
			break;
		}
		cout << a / b << endl;
		break;
	}

	return 0;
}
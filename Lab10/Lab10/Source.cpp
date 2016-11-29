#include <iostream>
#include <stack>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string input;
	cin >> input;
	stack<double> operands;
	while (input != "stop")
	{
		if (input == "+")
		{
			double result = operands.top();
			operands.pop();
			result += operands.top();
			operands.pop();
			operands.push(result);
		}
		else if (input == "-")
		{
			double result = operands.top();
			operands.pop();
			result = operands.top() - result;
			operands.pop();
			operands.push(result);
		}
		else if (input == "*")
		{
			double result = operands.top();
			operands.pop();
			result *= operands.top();
			operands.pop();
			operands.push(result);
		}
		else if (input == "/")
		{
			double result = operands.top();
			operands.pop();
			result = operands.top() / result;
			operands.pop();
			operands.push(result);
		}
		else if (input == "=")
		{
			cout << fixed << setprecision(5) << operands.top() << endl;
			operands.pop();
		}
		else
		{
			double num = atof(input.c_str());
			operands.push(num);
		}
		cin >> input;
	}
	system("pause");
	return 0;
}
#include <iostream>

using namespace std;

template <typename T>
T Add(T first, T second)
{
	T result = first + second;
	return result;
}

template <typename T>
class MySingleItemStack
{
public:
	MySingleItemStack<T>()
	{
		value = nullptr;
	}
	void Add(T *value)
	{
		this->value = value;
	}
	T Pop()
	{
		T toReturn = *value;
		value = nullptr;
		return toReturn;
	}
private:
	T *value;
};

int main()
{
	int a = 10;
	int b = 20;
	cout << Add<int>(a, b) << endl;

	char c = 'A';
	char d = 'A';
	cout << Add<char>(c, d) << endl;

	MySingleItemStack<double> doubleSingleStack;
	double *e = new double();
	*e = 10.0;
	doubleSingleStack.Add(e);

	cout << doubleSingleStack.Pop() << endl;


	system("pause");
	return 0;
}
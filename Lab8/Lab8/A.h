#pragma once
template<typename T>
class A
{
private:
	T valuea;

public:
	A()
	{
		
	};
	A(A & original)
	{
		valuea = original.valuea;
	};
	T getValuea() const
	{
		return valuea;
	};
	void setValuea(T x)
	{
		valuea = x;
	};
};
#pragma once
#include "A.h"

template<typename T>
class B : public A<T>
{
private:
	T valueb;

public:
	B()
	{
		
	}
	B(B & original)
	{
		valueb = original.valueb;
	}

	T getValueb() const
	{
		return valueb;
	}

	void setValueb(T b)
	{
		valueb = b;
	}
};

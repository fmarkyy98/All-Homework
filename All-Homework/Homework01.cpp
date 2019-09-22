#include <iostream>
using namespace std;

int factorila(int x)
{
	int result = 1;
	for (int i = 1; i <= x; i++)
	{
		result *= i;
	}
}

int mod(int x, int y)
{
	int result;
	result = x % y;
	return result;
}

int times(int x, int y)
{
	int result = 0;
	for (int i = 0; i < x; i++)
	{
		result += y;
	}
}

int power(double m, int k)
{
	int result = 1;
	for (int i = 0; i < k; i++)
	{
		result *= i;
	}
}

int greatestCommonDivisor(uint32_t x, uint32_t y)
{
	int result;
	if (x < y)
	{
		uint32_t swapp;
		swapp = x;
		x = y;
		y = swapp;
	}
	int rest = x % y;
	while (rest>0)
	{
		x = y;
		y = rest;
		rest = x % y;
	}
	result = y;
	return result;
}

int main()
{
	int errorCount = 0;
	return errorCount;
}

#include <iostream>
#include <cmath>

using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return (fib(n - 1) + fib(n - 2));
}

int sumdownby2(int n)
{
	if (n == 1 || n == 0)
		return n;
	else
	{
		return n + sumdownby2(n - 2);
	}
}

float harmonicsum(float n)
{
	if (n == 1)
		return (1/n);
	else
		return ((1 / n) + harmonicsum(n - 1));
}
float geometricsum(float n)
{
	float temp;
	if (n == 1)
		return 1/pow(2, n-1);
	else {
		//temp = pow(2, n - 1);
		return (1/pow(2,n-1) + geometricsum(n-1));
	}
}
bool helperfcker(int a, int b)
{
	bool value;
	(a > 0 && b > 0) ? value = true : value = false;
	return value;
}
int mult(int a, int b)
{
	bool value;
	value = helperfcker(a, b);	
	if (value == true)
	{
		if (b == 1)
			return a;
		else
			return a + mult(a, b - 1);
	}
}

int exp(int a, int b)
{
	bool value;
	value = helperfcker(a, b);
	if (value == true)
	{
		if (b == 1)
			return a;
		else
			return a * exp(a, b - 1);
	}
}
int helperLCM(int a, int b)
{
	int value;
	(a >= b) ? value = a : value = b;
	return value;
}
int LCM(int a, int b)
{
//	int value;
	//value = helperLCM(a, b);
	if (a < b)
	{
		if (a % b == 0)
			return 0;
		else
			return b + LCM(a, b);
	}
	//else
	//{
		//if (b % a == 0)
			//return 0;
		//else
			//return a + LCM(a, b);
	//}
}
void main()
{ 
	///float num2;
	int num = 0;
	//num = fib(5);
	//num = sumdownby2(6);
	//num2 = harmonicsum(4.0);	
	//num2 = geometricsum(2.0);
	//num = mult(5, 4);
	//num = exp(2, 5);
	num - LCM(3, 5);
	cout << num << endl;
	system("pause > 0");
}


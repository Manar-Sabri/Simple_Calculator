#pragma once
#pragma once
#include <iostream>
using namespace std;
class Calc
{
private:
	int res ;
	int x ;
public:
	Calc()
	{
		res = 0;
		x = 0;
	}
	~Calc()
	{
		cout << " Final Result is =" << endl;
		cout << res << endl;

	}
	void Sum()
	{
		cout << "enter number ";
		cin >> x;
		res = res + x;
		cout << "Result = " << res;
	}
	void Subtract()
	{
		cout << "enter number" << endl;
		cin >> x;
		res = res - x;
		cout << "Result = " << res;

	}
	void division()
	{

		cout << "enter number" << endl;
		cin >> x;
		if (x != 0)
		{
			res = res / x;
			cout << "Result = " << res;
		}
		else
			cout << "math error " << endl;

	}
	void  multiplication()
	{

		cout << "enter number" << endl;
		cin >> x;
		res = res * x;
		cout << "Result = " << res;
	}

};
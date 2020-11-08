 // Lab_5.4

#include <iostream>
#include<cmath>
using  namespace std;

double P0(const int N)
{
	double p = 1;
	double tmp = 0;
	for (int i = N;i <= 10;i++)
	{
		tmp = (i + (1 / ((1. * i) * (1. * i)))) / (sqrt(1 + exp(1. / i)));
		p *= tmp;
	}
	return p;
}
double P1(const int N, const int i)
{
	if (i > 10)
		return 1;
	else
		return ((i + (1 / ((1. * i) * (1. * i)))) / (sqrt(1 + exp(1. / i)))) * P1(N, i+1);
}
double P2(const int N, const int i)
{
	if (i < N)
		return 1;
	else
		return ((i + (1 / ((1. * i) * (1. * i)))) / (sqrt(1 + exp(1. / i)))) * P2(N, i - 1);
}
double P3(const int N, const int i, double t)
{
	t = t * (i + (1 / ((1. * i) * (1. * i)))) / (sqrt(1 + exp(1. / i)));
	if (i >= 10)
		return t;
	else
		return P3(N, i + 1, t);
}
double P4(const int N, const int i, double t)
{
	t = t * (i + (1 / ((1. * i) * (1. * i)))) / (sqrt(1 + exp(1. / i)));
	if (i <= N)
		return t;
	else
		return P4(N, i - 1, t);
}
int main()
{
	int N;
	cout << "N = "; cin >> N;
	cout << "(iter)         P0 = " << P0(N) << endl;
	cout << "(rec up ++)    P1 = " << P1(N, N) << endl;
	cout << "(rec up --)    P2 = " << P2(N, 10) << endl;
	cout << "(rec down ++)   P3 = " << P3(N, N, 1) << endl;
	cout << "(rec downn --)   P4 = " << P4(N, 10, 1) << endl;
	return 0;
}
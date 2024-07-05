#include <bits/stdc++.h>
using namespace std;
int main()
{
	double xn,xm,yn,ym,rast,r;
	cin >> xn >> yn >> xm >> ym;
	rast=sqrt(pow(xn-xm,2)+pow(yn-ym,2));
	r=10*rast;
	cout << setprecision(2) << fixed;
	cout << rast << endl;
	cout << r;
}
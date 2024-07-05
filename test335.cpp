#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[6],y[6],rast;
	int i;
	for (i=0; i<6; i++) cin >> x[i] >> y[i];
		rast=0;
	for (i=0; i<5; i++)
		rast+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
	cout << setprecision(2) << fixed;
	cout << rast;
}
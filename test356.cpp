#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[7],y[7],rs,rn;
	int i;
	for (i=0; i<7; i++) cin >> x[i] >> y[i];
		rs=0;
	for (i=0; i<5; i++)
		rs+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
	rn=0;
	for (i=0; i<2; i++)
		rn+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
	  rn+=sqrt(pow(x[2]-x[6],2)+pow(y[2]-y[6],2));
	cout << setprecision(2) << fixed;
	cout << rn << endl;
	cout << rs-rn;
}
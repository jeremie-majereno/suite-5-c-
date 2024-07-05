#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[5],y[5],r;
	int i;
	for (i=0; i<4; i++) cin >> x[i] >> y[i];
		x[4]=x[0]; y[4]=y[0];
	r=0;
	for (i=0; i<4; i++)
		r+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
	cout << setprecision(2) << fixed;
	cout << r;
}
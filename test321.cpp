#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],d[10],max;
	int i;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
	for (i=0; i<9; i++) 
	d[i]=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
	max=0;
	for (i=0; i<9; i++) 
		if (d[i]>max) max=d[i];
	cout << setprecision(3) << fixed;
	cout << max;
}
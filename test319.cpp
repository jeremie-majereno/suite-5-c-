#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],d;
	int i;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
		d=0;
	for (i=0; i<9; i++) 
		d+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
	cout << setprecision(2) << fixed;
	cout << d;
}
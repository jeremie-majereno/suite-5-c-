#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[7],y[7],d[7],xn,yn;
	int i;
	cin >> xn >> yn;
	for (i=0; i<7; i++) cin >> x[i] >> y[i];
	for (i=0; i<7; i++)
	d[i]=sqrt(pow(x[i]-xn,2)+pow(y[i]-yn,2));
	cout << setprecision(2) << fixed;
	for (i=0; i<7; i++) cout << d[i] << endl; 
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],d[10],x0,y0;
	int i;
	cin >> x0 >> y0;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
	for (i=0; i<10; i++)
		d[i]=sqrt(pow(x[i]-x0,2)+pow(y[i]-y0,2));
	cout << setprecision(2) << fixed;
	for (i=0; i<10; i++)
		cout << d[i] << endl;
}
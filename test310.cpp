#include <bits/stdc++.h>
using namespace std;
int main()
{
	double y0,x0,x[5],y[5],d[5],min;
	int i;
	cin >> x0 >> y0;
	for (i=0; i<5; i++) cin >> x[i] >> y[i];
	for (i=0; i<5; i++)
		d[i]=sqrt(pow(x[i]-x0,2)+pow(y[i]-y0,2));
	min=d[0];
	for (i=0; i<5; i++)
		if (d[i]<min) min=d[i];
			cout << setprecision(3) << fixed;
		cout << min;

}
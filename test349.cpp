#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[7],y[7],xn,d[7],yn,min;
	int i,n;
	cin >> n;
	cin >> xn >> yn;
	for (i=0; i<n; i++) cin >> x[i] >> y[i];
		for (i=0; i<n; i++)
			d[i]=sqrt(pow(x[i]-xn,2)+pow(y[i]-yn,2));
		     if (d[i]<min) min=d[i];
	min=d[0];
	for (i=0; i<n; i++)
		if (d[i]<min) min=d[i];
	cout << setprecision(2) << fixed;
	cout << min;
}
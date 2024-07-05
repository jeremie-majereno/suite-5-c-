#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[11],y[11],d[11],max,x1,y1;
	int n,i;
	cin >> n;
	cin >> x1 >> y1; 
	for (i=0; i<n; i++) cin >> i[x] >> y[i];
	for (i=0; i<n; i++)
		d[i]=sqrt(pow(x[i]-x1,2)+pow(y[i]-y1,2));
	max=d[0];
	for (i=0; i<n; i++)
		if (d[i]>max) max=d[i];
	cout << setprecision(2) << fixed ;
	cout << max;
}
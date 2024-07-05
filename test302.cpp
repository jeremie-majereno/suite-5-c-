#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],d[10],x0,y0,max;
	int i;
	cin >> x0 >> y0;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
	for (i=0; i<10; i++)
		d[i]=sqrt(pow(x[i]-x0,2)+pow(y[i]-y0,2));
	max=d[1];
	for (i=1; i<10; i++)
		if(d[i]>max) max=d[i];
		 cout << setprecision(2) << fixed;
         cout << max; 
}
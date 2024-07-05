#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],r,d;
	int i,j,n1,n2;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
		r=0;
	for (i=0; i<9; i++)
		for (j=i+1; j<10; j++)
		{
			d=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
			if (d>r) {r=d; n1=i; n2=j;};
		}
	cout << n1+1 << " " << n2+1;
	cout << setprecision(2) << fixed;
	cout  << r;
	
 }
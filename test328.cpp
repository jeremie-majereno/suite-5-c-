#include <bits/stdc++.h>
using namespace std;
int main()
{
	double xl[10],yl[10],xr[10],yr[10],min,d;
	int i,j,n,m,k1,k2;
	cin >> n >> m;
	for (i=0; i<n; i++) cin >> xl[i] >> yl[i];
	for (j=0; j<m; j++) cin >> xr[j] >> yr[j];
		min=1e9;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
		{
			d=sqrt(pow(xl[i]-xr[j],2)+pow(yl[i]-yr[j],2));
			if (d<min) {min=d; k1=i; k2=j;};

		}
		cout << k1+1 << " " << k2+1;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double xl[10],xr[10],yl[10],yr[10],s;
	int i,j,n,m;
	cin >> n >> m;
	for (i=0; i<n; i++) cin >> xl[i] >> yl[i];
	for (j=0; j<m; j++) cin >> xr[j] >> yr[j];
	    s=0;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			s+=sqrt(pow(xl[i]-xr[j],2)+pow(yl[i]-yr[j],2));
		cout << setprecision(2) << fixed;
		cout << s;
}
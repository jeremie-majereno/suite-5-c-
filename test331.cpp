#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x1[10],x2[10],y1[10],y2[10],max,d;
	int i,j,k1,k2,n,m;
	cin >> n >> m;
	for (i=0; i<n; i++) cin >> x1[i] >> y1[i];
	for (j=0; j<m; j++) cin >> x2[j] >> y2[j];
		max=0;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
		{
			d=sqrt(pow(x1[i]-x2[j],2)+pow(y1[i]-y2[j],2));
			if (d>max) {max=d; k1=i; k2=j;}
		}
		cout << k1+1 << " " << k2+1;
}
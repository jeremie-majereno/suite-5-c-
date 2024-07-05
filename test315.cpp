#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[14],y[14],x1[14],d[14],max,y1[14];
	int i,n,nom;
	cin >> n;
	for (i=0; i<n; i++) cin >> x[i] >> y[i] >> x1[i] >> y1[i];
	for (i=0; i<n; i++)
		d[i]=sqrt(pow(x[i]-x1[i],2)+pow(y[i]-y1[i],2));
	max=d[0]; nom=0;
	for (i=1; i<n; i++)
		if (d[i]>max) {max=d[i]; nom=i;};
	cout << nom+1;
}
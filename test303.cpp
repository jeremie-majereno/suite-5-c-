#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],d[10],x1,y1,min,nom;
	int i,n;
	cin >> n;
	cin >> x1 >> y1;
	for (i=0; i<n; i++) cin >> x[i] >> y[i];
		for (i=0; i<n; i++)
		d[i]=sqrt(pow(x[i]-x1,2)+pow(y[i]-y1,2));
	min=d[1]; nom=0;
	for (i=1; i<n; i++)
		if (d[i]<min) {min=d[i];nom=i;};
	cout << nom+1;
}
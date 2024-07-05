#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[101],y[101],d[101],s;
	int i,n;
	cin >> n;
	for (i=0; i<n; i++) cin >> x[i] >> y[i];
		x[n]=x[0]; y[n]=y[0];
	for (i=0; i<n; i++) 
		d[i]=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
	s=0;
	for (i=0; i<n; i++) s+=d[i];
		cout << setprecision(2) << fixed;
	    cout << s;
}
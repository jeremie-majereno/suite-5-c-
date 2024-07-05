#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[9],y[9],sum;
	int i,n;
	cin >> n;
	for (i=0; i<n; i++) cin >> x[i] >> y[i];
		sum=0;
	for (i=0; i<n; i++)
		sum+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
		cout << setprecision(2) << fixed;
	   cout << sum;
}
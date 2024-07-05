#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[5],y[5],sum;
	int i,j;
	for (i=0; i<5; i++) cin >> x[i] >> y[i];
		sum=0; 
	for (i=0; i<5; i++)
		for (j=i+1; j<5; j++)
			sum+=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
		cout << setprecision(2) << fixed;
		cout << sum; 
}
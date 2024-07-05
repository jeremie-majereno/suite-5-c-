#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[20],y[20];
	int i,n;
	cin >> n; 
	for (i=0; i<n; i++) cin >> x[i] >> y[i];
	for (i=0; i<n; i++) x[i]+=i+1;
	cout << setprecision(4) << fixed;
    for (i=0; i<n; i++) cout << x[i] << " " << y[i] << endl;
    	
}
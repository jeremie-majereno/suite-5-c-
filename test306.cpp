#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[400],y[400],d[400][400],max;
    int i,j,n;
    cin >> n;
    for (i=0; i<n; i++) cin >> x[i] >> y[i];
    	for (i=0; i<n; i++)
    	 for (j=0; j<n; j++)
    		d[i][j]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
    	max=d[0][0];
    	for (i=0; i<n; i++)
    		for (j=0; j<n; j++)
    			if (d[i][j]>max) max=d[i][j];
    		cout << setprecision(3) << fixed;
    		cout << max;
}
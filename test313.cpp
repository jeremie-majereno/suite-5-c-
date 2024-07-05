#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[11],y[11],d[11],x1,y1,r1,r2;
	int n,kol,i;
	cin >> n;
	cin >> x1 >> y1;
	for (i=0; i<n; i++) cin >> x[i] >> y[i];
    cin >> r1 >> r2;
    for (i=0; i<n; i++)
    d[i]=sqrt(pow(x[i]-x1,2)+pow(y[i]-y1,2));
    kol=0;
    for (i=0; i<n; i++)
    	if ((d[i]>=r1) && (d[i]<=r2)) kol++;
    cout << kol;
}
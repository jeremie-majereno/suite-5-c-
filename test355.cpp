#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[14],y[14],d[14],max,x1,y1,sum;
	int i,n,nom;
	cin >> n;
	for (i=0; i<n ; i++) cin >> x[i] >> y[i];
	cin >> x1 >> y1;
    for (i=0; i<n; i++)
    	d[i]=sqrt(pow(x[i]-x1,2)+pow(y[i]-y1,2));
    sum=0;
    for (i=0; i<n; i++) sum+=d[i];
    max=d[0] ;nom =0;
    for (i=0; i<n; i++)
    	if (d[i]>max) {max=d[i];nom=i;};
    cout << setprecision(1) << fixed;
    cout << max << endl;
    cout << nom+1 << endl;
    cout << 2*sum ;

 }
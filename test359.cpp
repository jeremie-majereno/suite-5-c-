#include <bits/stdc++.h>
using namespace std;
int main()
{
 double x[9],y[9],rast;
 int    i,n;
 cin >> n;
 for (i=0; i<n+1; i++) cin >> x[i] >> y[i];
 x[n+1]=x[0]; y[n+1]=y[0];
 rast=0;
 for (i=0; i<n+1; i++)
   rast+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
 cout << setprecision(2) << fixed;
 cout << rast;
}
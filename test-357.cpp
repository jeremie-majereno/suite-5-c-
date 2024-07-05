#include <bits/stdc++.h>
using namespace std;
int main()
{
 double x[9],y[9],rast;
 int    i,m;
 cin >> m;
 for (i=0; i<m+1; i++) cin >> x[i] >> y[i];
 rast=0;
 for (i=0; i<m; i++)
   rast+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
 cout << setprecision(2) << fixed;
 cout << rast;
}
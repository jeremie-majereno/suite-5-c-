#include <bits/stdc++.h>
using namespace std;
int main()
{
 double x[6],y[6],r;
 int    i;
 for (i=0; i<5; i++) cin >> x[i] >> y[i];
 x[5]=x[0]; y[5]=y[0];
 r=0;
 for (i=0; i<5; i++)
   r+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
 cout << setprecision(2) << fixed;
 cout << r;
}
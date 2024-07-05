#include <bits/stdc++.h>
using namespace std;
int main()
{
 double xi,yi,xs,ys,xk,yk,dik,dsk,dis,rast,min;
 cin >> xi >> yi;
 cin >> xs >> ys;
 cin >> xk >> yk;
 dik=sqrt(pow(xi-xk,2)+pow(yi-yk,2));
 dsk=sqrt(pow(xs-xk,2)+pow(ys-yk,2));
 dis=sqrt(pow(xi-xs,2)+pow(yi-ys,2));
 if (dik<dsk) min=dik;
   else       min=dsk;
 rast=dik+dis;
 cout << setprecision(1) << fixed;
 cout << min << endl;
 cout << rast;
}
#include <bits/stdc++.h>
using namespace std;
double d(double x1,double y1,double x2,double y2 )
{
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
int main()
{
	double x0,xa,x3,x4,x5,x6,x7,x8,y0,ya,y3,y4,
	       y5,y6,y7,y8,d1,d2,d3,d4,d5,d6,d7,d8,da,db;
	cin >> x0 >> y0;
	cin >> xa >> ya;
	cin >> x3 >> y3;
	cin >> x4 >> y4;
	cin >> x5 >> y5;
	cin >> x6 >> y6;
	cin >> x7 >> y7;
	cin >> x8 >> y8;
	d1=d(x8,y8,x0,y0);
	d2=d(x0,y0,xa,ya);
	d3=d(xa,ya,x3,y3);
	d4=d(x3,y3,x4,y4);
	da=d1+d2+d3+d4;
	cout << setprecision(1) << fixed; 
	cout << da << endl ;
	d5=d(x3,y3,y5,y5);
	d6=d(x5,y5,x6,y6);
    d7=d(x6,y6,x7,y7);
    d8=d(x7,y7,x8,y8);
    db=d4+d5+d6+d7+d8;
    cout << db;
}
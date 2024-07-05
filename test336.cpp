#include <bits/stdc++.h>
using namespace std;
int main()
{
	double xn,yn,y1,y2,y3,x1,x2,x3,x4,y4,rast,dbi_ba,dba_do,ddo_ss;
	cin >> xn >> yn;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	cin >> x4 >> y4;
	dbi_ba=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	dba_do=sqrt(pow(x3-xn,2)+pow(y3-yn,2));
	ddo_ss=sqrt(pow(xn-x4,2)+pow(yn-y4,2));
	rast=dbi_ba+dba_do+2*ddo_ss;
	cout << setprecision(2) << fixed;
	cout << rast;
}
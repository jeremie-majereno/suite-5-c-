#include <bits/stdc++.h>
using namespace std;
int main()
{
	double xn,yn,x1,x2,x3,y1,y2,rast;
	cin >> xn >> yn;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	rast=sqrt(pow(xn-x1,2)+pow(yn-y1,2))+
	sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout << setprecision(2) << fixed;
	cout << rast;
}
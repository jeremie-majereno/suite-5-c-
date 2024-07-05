#include <bits/stdc++.h>
using namespace std;
int main()
{
	double xn,yn,x4,y4,rast;
	int i;
	cin >> xn >> yn;
	for (i=0; i<4; i++) cin >> x4 >> y4;
	rast=sqrt(pow(xn-x4,2)+pow(yn-y4,2));
	cout << setprecision(2) << fixed;
	cout << rast ;	
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double y1,y2,y3,x1,x2,x3,x4,y4,d1,d2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	cin >> x4 >> y4;
	d1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	d2=sqrt(pow(x3-x4,2)+pow(y3-y4,2));
	if (d1>d2) cout << "SASHA" ;
	    else cout  << "KOLYA" ;
}
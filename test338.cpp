#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3,x4,y4,p;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	x3=x1; y3=y2;
	x4=x2; y4=y1;
	p=(x4-x1+y3-y1)*2;
	cout << x3 << " " << y3;
	cout << x4 << " " << y4;
	cout << p;

}
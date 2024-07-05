#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4,x,y,e;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	cin >> x4 >> y4;
	x=abs(x1-x2)+abs(y1-y2);
	y=abs(x3-x4)+abs(y3-y4);
	if (x>y) cout << "AB";
	if (x<y) cout << "CD" ;
	if (x==y) cout << "EQ";
}
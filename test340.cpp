#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3,x4,y1,y3,y2,y4,d1,d2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	if (x1==x2) {x4=x3; d1=abs(x3-x1);};
	if (x1==x3) {x4=x2; d1=abs(x2-x1);};
	if (x2==x3) {x4=x1; d1=abs(x2-x1);};
	if (y1==y2) {y4=y3; d2=abs(y3-y1);};
	if (y1==y3) {y4=y2; d2=abs(y2-y1);};
	if (y2==y3) {y4=y1; d2=abs(y2-y1);};
	cout << x4 << " " << y4 << endl;
	cout << 2*(d1+d2) ;
}
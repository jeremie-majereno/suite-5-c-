#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x1,x2,y1,y2,r;
	int i,n;
	cin >> n;
	cin >> x1 >> y1;
	r=0;
	for (i=0; i<n; i++)
	{
		cin >> x2 >> y2;
		r+=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	}
	cout << setprecision(2) << fixed ;
	cout << 2*r;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,y,x1,y2,d;
	int i,n,kol;
	cin >> n;
	kol=0;
	for (i=1; i<=n; i++)
	{
		cin >> x >> y >> x1 >> y2;
		d=sqrt(pow(x-x1,2)+pow(y-y2,2));
		if (d>3) kol++;

	}
	cout << kol;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,y,x1,d,y1;
	int i,n;
	cin >> n;
	for (i=0; i<n; i++) 
		{
			cin >> x >> y >> x1 >> y1;
				d+=sqrt(pow(x-x1,2)+pow(y-y1,2));
		}
	cout << setprecision(3) << fixed;
	cout << d;
}
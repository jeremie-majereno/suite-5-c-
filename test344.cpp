#include <bits/stdc++.h>
using namespace std;
int main()
{
	double xn,yn,x[4],y[4],d[4];
	int i;
	cin >> xn >> yn;
	for (i=0; i<4; i++) cin >> x[i] >> y[i];
		for (i=0; i<4; i++)
		d[i]=sqrt(pow(x[i]-xn,2)+pow(y[i]-yn,2));
	cout << setprecision(3) << fixed;
	for (i=0; i<4; i++) cout << d[i] << endl;

	
}
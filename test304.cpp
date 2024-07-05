#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],d[10],x1,y1;
	int i;
	cin >> x1 >> y1;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
		for (i=0; i<10; i++)
			d[i]=sqrt(pow(x[i]-x1,2)+pow(y[i]-y1,2));
		i=0;
		while ((i<10) && (d[i]>5)) i++;
		if (i==10) cout << "No";
		else cout << "Yes";
}
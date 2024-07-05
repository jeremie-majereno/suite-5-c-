#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],d[10],x1,y1,min;
	int i,nom;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
	for (i=0; i<10; i++)
		d[i]=sqrt(pow(x[i],2)+pow(y[i],2));
	min=d[0]; nom=0;
	for(i=0; i<10; i++)
		if (d[i]<min) {min=d[i];nom=i;};
	cout << setprecision(2) << fixed;
	cout << x[nom] << " " << y[nom] << endl;
	cout << min;
}
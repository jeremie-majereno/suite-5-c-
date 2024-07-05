#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,y,x1,y1,min,d;
	int n,i,nom;
	cin >> n;
	min=1e9;
	for(i=1; i<=n; i++) 
		{
			cin >> x >> y >> x1 >> y1;
			d=sqrt(pow(x-x1,2)+pow(y-y1,2)) ;
			if (d<min) {min=d; nom=i;};
		}
	cout << nom;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[10],y[10],d,a;
	int i;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
		d=1e9;
	for (i=0; i<9; i++)
        {
        	a=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
              	if (a<d) d=a;
        }    
    cout << setprecision(3) << fixed;
    cout << d;

}
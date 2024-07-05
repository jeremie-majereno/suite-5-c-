#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[5],y[5],d;
	int i,j,kol;
	for (i=0; i<5; i++) cin >> x[i] >> y[i];
	kol=0;
    for (i=0; i<4; i++)
        for (j=i+1; j<5; j++)
        {
        	d=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
        	if (d>1) kol++;
        } 
        cout << kol;
}
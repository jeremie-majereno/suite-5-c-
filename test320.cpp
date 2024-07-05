#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[6],y[6];
    int i,kol;
    for (i=0; i<6; i++) cin >> x[i] >> y[i];
    	kol=0;
    for (i=0; i<5; i++)
    if	 (sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2))>1) kol++;
    cout << kol;
}
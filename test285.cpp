#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[30][3],i,j,n,sum;
	cin >> n;
	for(i=0; i<n; i++)
		for (j=0; j<3; j++) cin >> a[i][j];
	sum=0;
    for (i=0; i<n; i++)
    	for (j=0; j<3; j++) sum+=a[i][j];
    		cout << sum;
}
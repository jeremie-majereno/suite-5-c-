#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[25][10],i,j,sum,n,m;
	cin >> n >> m;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) cin >> a[i][j];
	sum=0;
    for (i=0; i<n; i++)
    	for (j=0; j<m; j++) sum+=a[i][j];
    		cout << sum;
}
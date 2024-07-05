#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[50][50],i,j,n,m,b[50];
	cin >> n >> m;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) cin >> a[i][j];
	for (i=0; i<n; i++)
	{
		b[i]=0;
		for (j=0; j<m; j++) b[i]+=a[i][j];
	}
     for (i=0; i<n; i++)cout << b[i] << endl;
}
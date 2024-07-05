#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10][15],n,m,i,j,b[10];
	cin >> n >> m;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) cin >> a[i][j];
	for (i=0; i<n; i++)
	{
		b[i]=0;
		for (j=0; j<m; j++)
			if (a[i][j]==3) b[i]++;
	}
	for (i=0; i<n; i++) cout << b[i] << endl;
}
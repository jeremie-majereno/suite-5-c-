#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[11][3],i,j,n,nom,kol;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<3; j++) cin >> a[i][j];
	for (i=0; i<n; i++)
		if ((a[i][0]==a[i][1]) && 
			(a[i][1]==a[i][2])) cout << i+1 << endl;
}
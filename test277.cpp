#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[40][4],n,i,j,sum;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<4; j++) cin >> a[i][j];
			sum=0;
	for (i=0; i<n; i++) sum+=a[i][2];
		cout << sum;
}
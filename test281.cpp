#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[12][3],i,j,sum,n;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<3; j++) cin >> a[i][j];
			sum=0;
	for (i=0; i<n; i++) sum+=a[i][0];
		cout << sum;
}
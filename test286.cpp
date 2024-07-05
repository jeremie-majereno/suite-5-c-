#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[30][3],i,j,n,b[30];
	cin >> n;
	for(i=0; i<n; i++)
		for (j=0; j<3; j++) cin >> a[i][j];
	for (i=0; i<n; i++)
	{
		b[i]=0;
		for (j=0; j<3; j++) b[i]+=a[i][j];
	}
    for (i=0; i<n; i++)
    if (b[i]==30) cout << i+1 << endl;
    
}
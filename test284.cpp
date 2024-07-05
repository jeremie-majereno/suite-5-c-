#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[40][5],i,j,b[5],n;
	cin >> n; 
	for (i=0; i<n; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			for (j=0; j<5; j++)
	{
		b[j]=0;
	    for (i=0; i<n; i++) b[j]+=a[i][j];
	}
   for(j=0; j<5; j++)cout << b[j] << " " ;
}
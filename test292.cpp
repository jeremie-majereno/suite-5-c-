#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[4][17],b[4],i,j,n;
	cin >> n;
	for (i=0; i<4; i++)
		for (j=0; j<n; j++) cin >> a[i][j];
    for (i=0; i<4; i++)
    {
    	b[i]=0;
    	for (j=0; j<n; j++)
    		if (a[i][j]==9) b[i]++;
    }
    for (i=0; i<4; i++) cout << b[i] << " ";
}


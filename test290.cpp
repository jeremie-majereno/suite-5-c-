#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[40][4],n,i,j,b[4],max,nom;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<4; j++) cin >> a[i][j];
	for (j=0; j<4; j++)
	{
		b[j]=0;
		for (i=0; i<n; i++) b[j]+=a[i][j];
	}
    max=b[0] ;nom=0;
    for (j=0; j<4; j++) 
    	if (b[j]>max) {max=b[j];nom=j;};
    cout << nom+1;
}
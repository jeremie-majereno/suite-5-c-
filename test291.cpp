#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15][11],b[15],i,j,n,max,nom;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<11; j++) cin >> a[i][j];
	for (i=0; i<n; i++)
	{
		b[i]=0;
		for (j=0; j<11; j++) b[i]+=a[i][j];
	}
     max=b[0]; nom=0;
     for (i=0; i<n; i++)
     	if (b[i]>max) {max=b[i]; nom=i;};
     cout << nom+1 << endl;
     for (j=0; j<11; j++)
	{
		b[j]=0;
		for (i=0; i<n; i++) b[j]+=a[i][j];
	}
     max=b[0]; nom=0;
     for (j=0; j<11; j++)
     	if (b[j]>max) {max=b[j]; nom=j;};
     cout << nom+1 << endl;
}
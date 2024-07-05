#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[7][24],n,i,j,max,nom;
	cin >> n;
	for (i=0; i<7; i++)
		for (j=0; j<n; j++) cin >> a[i][j];
		max=a[0][0] ;nom=0;
	for (j=0; j<n; j++)
		for  (i=0; i<7; i++) 
			if (a[i][j]>max) {max=a[i][j]; nom=j;};
	cout << max << endl;
	cout << nom+1;
}
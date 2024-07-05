#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[30][4],i,j,b[30],max,nom,n;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<4; j++) cin >> a[i][j];
	for (i=0; i<n; i++)
	{
		b[i]=0; 
		for (j=0; j<4; j++) b[i]+=a[i][j];
	}
    max=b[0]; nom=0;
    for (i=0; i<n; i++)
    	if (b[i]>max) {max=b[i];nom=i;};
    cout << nom+1 << endl;
    for (j=0; j<4; j++) cout << a[nom][j] << " ";
}
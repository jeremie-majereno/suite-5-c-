#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[30][4],i,j,sum1,sum2,sumt,n;
    cin >> n;
    for (i=0; i<n; i++)
    	for (j=0; j<4; j++) cin >> a[i][j];
    		sum1=0; sum2=0; sumt=0;
    for (i=0; i<n; i++) sum1+=a[i][1];
    for (i=0; i<n; i++) sum2+=a[i][2];
    	sumt=sum1+sum2;
    cout << sumt;
}
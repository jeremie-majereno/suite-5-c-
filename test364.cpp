#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,k,m;
	for (i=0; i<10; i++) cin >> a[i];
		cin >> k >> m;
	sort (a,a+10); reverse(a,a+10);
	for (i=m-1; i<m-1+k; i++)
		cout << a[i] << endl;
}
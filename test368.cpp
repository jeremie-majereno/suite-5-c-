#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i;
	for (i=0; i<10; i++) cin >> a[i];
		sort(a,a+10);
	cout << a[0] << endl;
	for (i=1; i<10; i++)
		if (a[i]!=a[i-1]) cout << a[i] << endl;

}
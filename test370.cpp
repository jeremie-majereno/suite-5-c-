#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5],b[5],i;
	for (i=0; i<5; i++) cin >> a[i];
	for (i=0; i<5; i++) cin >> b[i];
		sort(a,a+5);
	    sort(b,b+5); 
	    reverse(b,b+5);
	for (i=0; i<5; i++) cout << a[i] << " ";
	cout << endl;
	for (i=0; i<5; i++) cout << b[i] << " ";
}
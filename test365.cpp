#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],k1,k2,i;
	for (i=0; i<10; i++) cin >> a[i];
		cin >> k1 >> k2;
	sort(a,a+10); reverse(a,a+10);
	for (i=k1-1; i<k2; i++) cout << a[i] << endl;
}
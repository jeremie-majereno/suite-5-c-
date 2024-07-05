#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,s,n;
	cin >> n;
	for(i=0; i<n; i++) cin >> a[i];
		sort(a,a+n); reverse(a,a+n);
	for(i=0; i<n/2; i++) s+=a[i];
	for (i=n/2; i<n; i++) s-=a[i];
		cout << s;

}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i;
	for (i=0; i<10; i++) cin >> a[i];
	 sort(a,a+10) ; reverse (a,a+10);
	 cout << a[6];
}
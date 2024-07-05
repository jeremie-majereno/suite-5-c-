#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5],b[5],c[5],i;
	for(i=0; i<5; i++) cin >> a[i];
	for (i=0; i<5; i++) cin >> b[i];
	for (i=0; i<5; i++) c[i]=a[i]-b[i];
	sort(c,c+5); reverse(c,c+5);
    for (i=0; i<5; i++) cout << c[i] << " ";
}
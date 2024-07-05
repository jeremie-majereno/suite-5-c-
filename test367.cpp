#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i;
	for (i=0; i<10; i++) cin >> a[i];
	for(i=0; i<10; i++) a[i]=a[i]*10+i;
	sort(a,a+10); 
	for (i=0; i<4; i++) cout << (a[i]%10)+1 << endl; 
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x[10],y[10],s,i;
	for (i=0; i<10; i++) cin >> x[i] >> y[i];
	s=0;
	for (i=0; i<9; i++)
	s+=abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
	cout << s; 
}
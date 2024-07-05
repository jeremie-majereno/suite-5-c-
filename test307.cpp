#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,xt,yt;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> xt >> yt;
	if (sqrt(pow(xt-x1,2)+pow(yt-y1,2))>1)                          cout << "Error" ;
		else if ((abs(xt-x2)+abs(yt-y2)<(abs(x1-x2)+abs(y1-y2))))   cout << "Blizhe";
		else                                                        cout << "Dalshe";
}
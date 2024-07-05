#include <bits/stdc++.h>
using namespace std;
int main()
{
 double x[8],y[8],r[8],xk,yk;
 int    i;
 cin >> xk >> yk;
 for (i=0; i<4; i++) cin >> x[i] >> y[i];
 x[4]=x[0]+4; y[4]=y[0];
 x[5]=x[1]-2; y[5]=y[1]+3;
 x[6]=x[2]-1; y[6]=y[2];
 x[7]=x[3]+5; y[7]=y[3]-2;
 for (i=0; i<8; i++)
   r[i]=sqrt(pow(x[i]-xk,2)+pow(y[i]-yk,2));
 cout << setprecision(7) << fixed;
 for (i=0; i<8; i++) cout << r[i] << endl;
}
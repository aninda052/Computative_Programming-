#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    double l,d;
    cin>>a;
    while(a--)
    {
        cin>>d>>l;
        double m=sqrt((l/2)*(l/2)-(d/2)*(d/2));
        double M=((l-d)/2)+d/2;
        printf("%.3lf\n",M_PI*M*m);
    }
  return 0;
}

#include<bits/stdc++.h>


using namespace std;
int main (){
int k;
double a;
while(cin>>a>>k)
{

    double theta=((double)90-((double)360/(k*2)))*M_PI/180;

    double base=2*a*cos(theta);
    double hight=a*sin(theta);
    double q=(hight*base)/2;
    printf("%.3lf\n",k*q);
}
return 0;}

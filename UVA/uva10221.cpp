#include<bits/stdc++.h>
using namespace std;
int main (){
double a,s,theta;
string d;
while(cin>>a>>s>>d)
{
    if(d=="deg"){
            if(s>180){s=360-s;}
            theta=(M_PI/180)*s;}
    else{theta=(M_PI/180)*(s/60);}
    double arc=theta*(a+6440);
    double chord=2*(a+6440)*sin(theta/2);
    printf("%.6lf %.6lf\n",arc,chord);
}
return 0;}

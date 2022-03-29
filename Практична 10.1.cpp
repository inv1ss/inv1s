#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main () 
{
float x,a,b,c,d,i=2,y,fi,om;
cout<<"x=";
cin>>x;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
cout<<"d=";
cin>>d;
fi=tan(x+a)-log(fabs(b+7))/log(i);
om=c*pow(pow(x,2)+d*exp(1.3),1/5.);
(fabs(x)>=10)?y=cos(fabs(2*om)/1.12-cos((3*om-2)+6.15)): y=fabs(sin(fi)/3.12+cos(pow(fi,2)))-8.3*sin(3*fi);
cout<<"y="<<y;
ofstream gg("cl.txt");
gg<<y;
gg.close();
return(0);
}

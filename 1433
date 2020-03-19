#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define debug(args...)do{cerr<< #args << " : ";shaon(args);}while(0)
void shaon () { cerr << endl; }
template <typename T, typename ... north>
void shaon(T arg, const north &... rest){cerr << arg << ' ';shaon(rest...);}
 
const double pi = 2 * acos ( 0.0 );
 
struct point {
    double x,y;
    point(double a, double b){x = a; y=b;}
    point(){}
};
 
double dist(point a, point b) {
    double k=a.x-b.x;
    double p=a.y-b.y;
    return sqrt(k*k+p*p);
}
 
double dot (point a, point b, point c) { return (a.x - b.x) * (c.x - b.x) + (a.y - b.y) * (c.y - b.y); }
 
//double angle (point a, point b, point c, bool isRadian) {
//  double theta=acos(dot(a, b, c) / (dist(a, b) * dist(b, c)));
//  if(isRadian==0)  theta*=(180.0/pi);
//  return theta;
//}
 
double arcFromChordAndRadius(double chord, double radius)
{
    chord/=2.0;
    double theta = asin(chord/radius);
    return 2.0*theta*radius;
}
 
double angle (point a, point b, point c, bool isRadian){
    double aa = dist(b,c), bb = dist(a,c), cc = dist(a,b);
    double theta = acos(((aa*aa)+(cc*cc)-(bb*bb))/(2.0*aa*cc));
    if(isRadian==0)  theta*=(180.0/pi);
    return theta;
}
 
int main()
{
    ll T;
//    ll ax, ay, bx, by, ox, oy;
    double ax, ay, bx, by, ox, oy;
 
    scanf("%lld",&T);
 
    for(ll tc=1; tc<=T; tc++){
//        scanf(" %lld %lld %lld %lld %lld",&ox,&oy,&ax,&ay,&bx,&by);
        scanf(" %lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        point a, b, o;
//        shaon("HI",ox,oy,"GG",ax,ay,"III",bx,by);
        a=point(ax,ay), b=point(bx,by), o=point(ox,oy);
//        shaon("OO",o.x,o.y,"AA",a.x,a.y,"BB",b.x,b.y);
        double r=dist(a,o);
        double Angle = angle(a,o,b,1);
 
//        shaon("RR",r,"angle",Angle,"Ans",Angle*r);
 
        printf("Case %lld: ",tc);
        cout<<fixed<<setprecision(9);
        cout<<Angle*r*1.0<<"\n";
    }
 
 
 
    return 0;
}

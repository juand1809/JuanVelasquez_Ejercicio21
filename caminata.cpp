#include <iostream>
#include <random>
#include <cmath>

using std::cout;
using std::endl;

int main(){
    srand48(1);
    double x;
    double y;
    double dx;
    double dy;
    int i;
    float r;
    float r1;
    double L;
    x = 0.0;
    y = 0.0; 
    
    for(i=0;i<1000;i++){
        r = drand48();
        r1 = drand48();  
        dx = 2.0*r-1.0;
        dy = 2.0*r1-1.0;
        L = sqrt(dx*dx + dy*dy);
        
        dx = dx/L;
        dy = dy/L;
        
        x = x + dx;
        y = y + dy; 
        
        cout << x << " " << y << endl;        
    }
    return 0;
}        
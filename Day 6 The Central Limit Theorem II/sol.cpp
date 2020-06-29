#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


double normal_dist(double m, double sd, double x)
{   
    /*
        p = 1/2*(1 + erf((x - m)/(sd*sqrt(2))));
    */
    
    double p = 0.5*(1 + erf((x-m)/(sd*sqrt(2.0))));
    return p; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    double m = 100*2.4, sd = sqrt(100)*2.0, x = 250;
    
    double p=normal_dist(m,sd,x);
    cout<<fixed<<setprecision(4)<<p;
    
    return 0;
}


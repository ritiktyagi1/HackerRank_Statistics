#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    double mean = 500;
    double std = 80;
    int n = 100;
    double zScore = 1.96;
    
    double marginOfError = zScore * std/sqrt(n);
    
    double m1= mean - marginOfError;double m2= mean + marginOfError;
    cout<<fixed<<setprecision(2)<<m1<<"\n";
    cout<<fixed<<setprecision(2)<<m2;
    
    return 0;
}
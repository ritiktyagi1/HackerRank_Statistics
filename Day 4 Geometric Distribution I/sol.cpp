#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   double p=0.33;
   double q=1-p;
   //5-1=4
   double g_prob=pow(q,4)*p;
   cout<<fixed<<setprecision(3)<<g_prob;
    return 0;
}

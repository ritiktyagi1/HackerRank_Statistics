
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,maximum;
    float mean=0,median;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mean+=a[i];
    }
    cout<<round((mean/n)*10)/10<<endl;
    sort(a.begin(),a.end());
    if(n%2==0)
    {
        median=(a[n/2]+a[(n/2)-1])/(float)2;    
    }
    else 
    {
        median=a[n/2]/(float)2;
    }
    cout<<round(median*10)/10<<endl;
    maximum=a[0];
    for(int i=1;i<n;i++)
    {
          if(count(a.begin(),a.end(),a[i])==count(a.begin(),a.end(),maximum))
            {
                if(maximum>a[i])
                  maximum=a[i];
            }
          if(count(a.begin(),a.end(),a[i])>count(a.begin(),a.end(),maximum))
          {
              maximum=a[i];
          }
        
    }
    cout<<maximum;
return 0;
}

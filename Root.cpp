#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int d;
    d=b*b-(4*a*c);
    double root1,root2;
    if(d>0){
        root1=(-b + sqrt(d))/2*a;
        root2=(-b - sqrt(d))/2*a;
        cout<<root1<<" "<<root2;
    }
    else
    {
        cout<<"No real roots";
    }

    return 0;
}
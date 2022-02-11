#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int s,k,m,n,P,T;
    cin>>a>>b>>c;
    P=a+b+c;
    s=a+b*c;
    k=a*(b+c);
    m=a*b*c;
    n=(a+b)*c;
    T= max(n,max(m,(max (k,(max (s,P))))));
    cout << T << endl;
    return 0;
}

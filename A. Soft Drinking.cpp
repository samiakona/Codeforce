#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,M,N,O,S, Result;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    S=k*l;
    O=S/nl;
    M=c*d;
    N=p/np;
    Result= min(min(O, M), N)/n;
    cout << Result << endl;
    return 0;
}

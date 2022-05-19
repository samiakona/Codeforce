#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=1900)
        {
            cout << "Division 1" << endl;
        }
        else if(n>=1600 && 1899>=n )
        {
            cout << "Division 2" << endl;
        }
        else if(n>=1400 && 1599>=n)
        {
            cout << "Division 3" << endl;
        }
        else if(1399>=n)
        {
            cout << "Division 4" << endl;
        }

    }
    return 0;
}


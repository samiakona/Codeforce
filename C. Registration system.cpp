#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int i, j, T;
    map<string,int>mp;
    cin>> T;
    string s;
   while(T--)
    {
        cin>>s;
        mp[s]++;

        if(mp[s]==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

    }
    return 0;
}

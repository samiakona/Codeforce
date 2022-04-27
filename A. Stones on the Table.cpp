#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i, cnt=0,t;
    cin >> t;
    cin >> s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

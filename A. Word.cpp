#include<iostream>
using namespace std;
int main()
{
    string s;
    int i, up=0,low=0;
    cin >> s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if(up>low)
    {
        for(i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
        cout << s;
    }
    else if(up<low)
    {
        for(i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }

        cout << s;
    }
    else if(up==low)
    {
        for(i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }

        cout << s;
    }
    return 0;

}

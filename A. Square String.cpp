
#include<iostream>
using namespace std;
int main()
{
    int i,T;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> s;
        int len=s.size();

        if(len%2==0)
        {
            string A, B;
            for(i = 0; i<len/2; i++)
            {
                A+=s[i];
            }
            for(i=len/2; i<len; i++)
            {
                B+=s[i];
            }
            if(A==B)
            {
                cout << "YES"<< endl;
            }
            else
            {
                cout << "NO"<< endl;
            }
        }
        else
        {
            cout << "NO"<< endl;
        }

    }

    return 0;
}

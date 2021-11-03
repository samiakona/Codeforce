#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string k;
    int temp;
    cin >> k;
    for(int i=0; i<k.size(); i+=2)
    {
        for(int j=0; j<k.size()-1; j+=2)
        {
            if(k[j]>k[j+2])
            {
                temp=k[j];
                k[j]=k[j+2];
                k[j+2]=temp;
            }
        }
    }
    cout << k << endl;

    return 0;
}

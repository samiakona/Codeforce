#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int cnt=0;
    int i ,n;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        if(a+b+c>=2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

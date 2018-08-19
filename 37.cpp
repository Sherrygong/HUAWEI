#include <iostream>
using namespace std;

int main()
{
    int m;
    while(cin >> m)
    {
        int a=1,b=0,c=0; //a:1个月大兔子b：两个月大兔子c：3个月大兔子
        while(m-1)
        {
            c+=b;
            b=a;
            a=c;
            m--;
        }
        cout << a+b+c << endl;
    }
    return 0;
}
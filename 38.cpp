#include <iostream>
using namespace std;
int main()
{
    int y;
    while(cin >> y)
    {
        double sum=y;
        double cur=y;
        for(int i=1;i<=4;i++)
        {
            sum+=cur;
            cur=cur/2;
        }
        cur/=2;
        cout << sum << endl << cur << endl;
    }
    return 0;
}
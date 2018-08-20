#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string inputstr;
    stringstream ss;
    while(cin >> inputstr)
    {
        int mask1,mask2,mask3,mask4;
        int ip1a,ip1b,ip1c,ip1d;
        int ip2a,ip2b,ip2c,ip2d;
        char ch;
        ss << inputstr;
        ss >> mask1 >> ch >> mask2 >> ch >> mask3 >> ch >>mask4;
        ss.clear();
        cin >> inputstr;
        ss << inputstr;
        ss >> ip1a >> ch >> ip1b >> ch >> ip1c >> ch >>ip1d;
        ss.clear();
        cin >> inputstr;
        ss << inputstr;
        ss >> ip2a >> ch >> ip2b >> ch >> ip2c >> ch >>ip2d;
        ss.clear();
        if((mask1 > 255 || mask1 < 0) || (mask2 > 255 || mask2 < 0) || (mask3 > 255 || mask3 < 0) || (mask4 > 255 || mask4 < 0)
           || (ip1a > 255 || ip1a < 0) || (ip1b > 255 || ip1b < 0) || (ip1c > 255 || ip1c < 0) || (ip1d > 255 || ip1d < 0)
           || (ip2a > 255 || ip2a < 0) || (ip2b > 255 || ip2b < 0) || (ip2c > 255 || ip2c < 0) || (ip2d > 255 || ip2d < 0))
            cout<<1<<endl;
        else if(((mask1 & ip1a) == (mask1 & ip2a)) && ((mask2 & ip1b) == (mask2 & ip2b)) && ((mask3 & ip1c) == (mask3 & ip2c)) && ((mask4 & ip1d) == (mask4 & ip2d)))
            cout<<0<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
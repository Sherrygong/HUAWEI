#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int m[10]={0},x[10]={0};
        for(int i=0;i<n;i++)
        {
            cin >> m[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> x[i];
        }
        vector<int> weigth;
        weigth.push_back(0);
        for(int i=1;i<=x[0];i++)
            weigth.push_back(i*m[0]);
        for(int i=1;i<n;i++)
        {
            int len = weigth.size();
            for(int j=1;j<=x[i];j++)
            {
                for(int k=0;k<len;k++)
                {
                    int wei = weigth[k] + j*m[i];
                    if (find(weigth.begin(), weigth.end(), wei) == weigth.end())
                        weigth.push_back(weigth[k] + j*m[i]);
                }
            }
        }
        cout << weigth.size() << endl;
    }
    return 0;
}
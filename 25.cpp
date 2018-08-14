//
//  main.cpp
//  25
//
//  Created by 宫晓艺 on 2018/8/14.
//  Copyright © 2018年 宫晓艺. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool match(int m,int n)
{
    string str1=to_string(m);
    string str2=to_string(n);
    int pos=str2.find(str1);
    if(pos!=-1)
        return true;
    else return false;
}

int main(int argc, const char * argv[]) {
    int m,n;
    while(cin >> m)
    {
        vector<int> I;
        vector<int> R;
        for(int i=0;i<m;i++)
        {
            int tmp;
            cin >> tmp;
            I.push_back(tmp);
        }
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin >> tmp;
            R.push_back(tmp);
        }
        sort(R.begin(),R.end());
        R.erase(unique(R.begin(),R.end()),R.end());
        
        vector<int> index;
        vector<int> value;
        vector<int> cnt;
        vector<int> index1;
        
        for(int i=0;i<R.size();i++)
        {
            int cnt1=0;
            for(int pos=0;pos<I.size();pos++)
            {
                if(match(R[i],I[pos]))
                {
                    cnt1++;
                    index.push_back(pos);
                    value.push_back(I[pos]);
                }
            }
            if(cnt1!=0)
            {
                cnt.push_back(cnt1);
                index1.push_back(i);
            }
        }
        int j=0;
        cout<<2*index.size()+index1.size()+cnt.size()<<' ';
        for(int i=0;i<cnt.size();i++)
        {
            cout << R[index1[i]]<< ' ' << cnt[i] << ' ';
            while(cnt[i]-- > 0)
            {
                cout<<index[j]<<' '<<value[j];
                if(i==cnt.size()-1&&cnt[i]==0)
                {
                    cout<<endl;
                }
                else
                {
                    cout<<' ';
                }
                j++;
            }
        }
    }
    return 0;
}

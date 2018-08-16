//
//  main.cpp
//  34
//
//  Created by 宫晓艺 on 2018/8/16.
//  Copyright © 2018年 宫晓艺. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(int a,int b)
{
    return a<b;
}

int main()
{
    string str="";
    while(getline(cin,str))
    {
        int len=str.length();
        string daxie="",xiaoxie="",num="";
        for(int i=0;i<len;i++)
        {
            if(str[i]>='0'&&str[i]<='9')
                num+=str[i];
            else if(str[i]>='a'&&str[i]<='z')
                xiaoxie+=str[i];
            else if(str[i]>='A'&&str[i]<='Z')
                daxie+=str[i];
        }
        sort(num.begin(),num.end(),cmp);
        sort(daxie.begin(),daxie.end(),cmp);
        sort(xiaoxie.begin(),xiaoxie.end(),cmp);
        cout << num << daxie << xiaoxie <<endl;
    }
    return 0;
}
//
//  main.cpp
//  35
//
//  Created by 宫晓艺 on 2018/8/17.
//  Copyright © 2018年 宫晓艺. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    while (cin>>n)
    {
        int beg=1;
        for(int i=1;i<=n;i++)
        {
            cout<<beg;
            int tmp = beg;
            for(int j=i+1;j<=n;j++)
            {
                tmp+=j;
                cout<<" "<<tmp;
            }
            cout<<endl;
            beg+=i;
        }
    }
    return 0;
}
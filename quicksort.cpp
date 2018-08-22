//
//  main.cpp
//  quicksort
//
//  Created by 宫晓艺 on 2018/8/22.
//  Copyright © 2018年 宫晓艺. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> a={35,18,16,72,24,65,12,88,46,28,55};
int part(int left,int right)
{
    int tmp = a[left];
    while(left < right)
    {
        while (left<right&&a[right]>tmp) {
            right--;
        }
        a[left]=a[right];
        while (left<right&&a[left]<=tmp) {
            left++;
        }
        a[right]=a[left];
    }
    a[left]=tmp;
    return left;
}

void quicksort(int left,int right)
{
    if(left < right)
    {
        int pos=part(left,right);
        quicksort(left,pos-1);
        quicksort(pos+1,right);
    }
}

int main(int argc, const char * argv[]) {
    
    int left=0,right=a.size()-1;
    quicksort(left,right);
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}

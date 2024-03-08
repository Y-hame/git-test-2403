//
// Created by Yhame on 2024/3/6.
//
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;


const int  N =10;
int cnt,n;
int a[N]; // a[i]表示第i行上的皇后放于a[i]列上，假设 a[3]=7
bool check(int x,int y)
{
    for ( int i=1;i<=x;i++)
    {
        if(a[i]==y)return  false ;
        if(a[i]+i==x + y) return false;
        if(a[i]-i==x -y) return false;

    }
    return true;
}

void dfs (int row)  // 表示第row 皇后放于何处
{
    if (row == n+1)
    {
        //产生了一组解
        cnt++;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if (check(row,i))
        {
            a[row]=i;         // 把皇后放到i上
            dfs(row+1);    //然后八皇后移到下一行
            a[row]=0;      //回溯
        }
    }

}

int main()
{
    cin>>n;    //输入多少个皇后
    dfs(1);
    cout<<cnt;   //输出最后统计的的结果有多少种
    return 0;

}

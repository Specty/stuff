/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void show(int a, int b,int c, int d, bool e)
{
    bool q=e;
    if(!q){
    cout<<"Min index = "<<a<<", min znach = "<<b<<endl;}
    else
    cout<<"Max index = "<<c<<", max znach = "<<d<<endl;
    system("pause");
}

void minmax(int z, int *a, bool c)
{
    int x=z;
    bool b=c;
    int minInd, min=100, maxInd, max=-100;
    if (b)
    {
        for (int j=x-1; j>-1;j--)
        {
            if (max<a[j])
            {
            max=a[j];
            maxInd=j;
            }
        }
    } else
    {
        for (int j=x-1; j>-1;j--)
        {
            if (min>a[j])
            {
            min=a[j];
            minInd=j;
            }
        }
    }
    show(minInd,min,maxInd,max,b);
}

int main()
{
    srand( time(0) );
    int x;
    bool b;
    cin>>x;
    int a[x];
    for (int i=0; i<x;i++){
        a[i]=rand() % 20 - 8;
        cout<<a[i]<<" ";
    }
    cout<<"Min or max? (0/1)"<<endl;
    cin>>b;
    minmax(x, a ,b);
    return 0;
}



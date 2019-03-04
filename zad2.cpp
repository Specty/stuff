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

void min(int z)
{
    int x=z;
    int minInd, min=100, maxInd, max=-100;
    
    cout<<endl;
    int a[x];
    for (int i=0; i<x;i++){
        a[i]=rand() % 10 - 5;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int j=x-1; j>-1;j--)
    {
        if(min>a[j])
        {
            min=a[j];
            minInd=j;
            cout<<min<<" "<<minInd<<endl;
        } else
        if(max<a[j])
        {
            max=a[j];
            maxInd=j;
            cout<<max<<" "<<maxInd<<endl;
        }
    }
    show(minInd,min,maxind,max);
}

void show(int a, int b,int c, int d)
{
     cout<<"Min index = "<<a<<", min znach = "<<b<<endl;
     cout<<"Max index = "<<c<<", max znach = "<<d<<endl;
}

int main()
{
    srand( time(0) );
    int x;
    cin>>x;
    min(x);
    system("pause");
    return 0;
}


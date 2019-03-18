/*
Simple Selection Sort
Сортировка простым выбором

Функция упорядочивает по возрастанию элементы массива от элемента 
с индексом first по элемент с индексом last следующим образом:
среди них выбирает максимальный элемент и устанавливает на подходящее 
место, то есть на место последнего элемента; выбирается максимальный
элемент среди оставшихся и устанавливается на подходящее место, 
то есть на место предпоследнего элемента и т.д. до тех пор, пока 
неупорядоченным в рассматриваемой части массива останется один элемент.

Выбор максимального элемента выполняется следующим образом:
неупорядоченные элементы поочередно сравниваются с последним из них;
если рассматриваемый элемент оказывается больше последнего, то они
обмениваются значениями; в результате максимальный элемент оказывается 
последним среди рассматриваемых.
*/
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void show(int *a, unsigned first, unsigned last)
{
    unsigned k;
    for (k=last; k!=first-1; --k)
        cout<<a[k]<<" ";
}

void simpleSSort(int *a, unsigned first, unsigned last)
{
  unsigned k,i;
  int temp;
  for (k=last; k>first; --k)
    for (i=first; i<k; ++i)
      if (a[i]>a[k]){
         temp=a[i];
         a[i]=a[k];
         a[k]=temp;
      }
     show(a, first, last);
}

int main()
{
    srand(time(0));
    int x, first, last;
    cout<<"Enter X"<<endl;
    cin>>x;
    int a[x];
    for (int i=0; i<x;i++)
    {
        a[i]=rand() % 20;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter 1st element and last element(1st<last<X)"<<endl;
    cin>>first>>last;
    simpleSSort(a, first, last);
    system("pause");
    return 0;   
}


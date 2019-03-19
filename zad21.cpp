#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void
show (int *a, unsigned first, unsigned last)
{
  unsigned k;
  for (k = last; k != first - 1; --k)
    cout << a[k] << " ";
    cout<<"===Sorted==="<<endl;
    cout<<endl;
}

void
simpleSSort (int *a, unsigned first, unsigned last)
{
  unsigned k, i;
  int temp;
  for (k = last; k > first; --k)
    for (i = first; i < k; ++i)
      if (a[i] > a[k])
	{
	  temp = a[i];
	  a[i] = a[k];
	  a[k] = temp;
	}
  show (a, first, last);
}



int main ()
{
    srand (time (0));
    int x, j, first, last;
    cout << "Enter X" << endl;
    cin >> x;
    int a[x];
    cout << endl;
    cout << "Enter 1st element and last element(1st<last<X)" << endl;
    cin >> first >> last;
    for (j=0;j<21;j+=10){
    for (int i = 0; i < x; i++)
    {
        a[i] = rand () % 20 - j;
        cout << a[i] << " ";
    }
    cout<<"===generated==="<<endl;
    simpleSSort (a, first, last);
    a[x]=0;
    }
    system ("pause");
    return 0;
}

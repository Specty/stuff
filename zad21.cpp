#include <stdio.h>
#include <iostream>
#include <conio.h>

#define M 7
#define N 12

using namespace std;

void show (int a[])
{
  unsigned k;
  for (k = 0; k < N && a[k] != 0; ++k)
    {
      cout << a[k] << " ";
    }
  cout << endl;
}

void simpleSSort (int a[], unsigned first, unsigned last)
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
}

struct Test
{
  int arr[N];
  unsigned first, last;
};


int main ()
{
  struct Test mass[M] = {
    {{98, 4, 9, 52, 18}, 0, 4},
    {{57, 81, 82}, 0, 2},
    {{76, 20, 53}, 0, 2},
    {{30, 87, 7, 71, 80}, 1, 4},
    {{51, 11, 8, 22, 7, 11, 54, 34}, 1, 5},
    {{43, 32, 52}, 2, 2},
    {{99, 74, 77, 30, 13, 21, 64, 10, 45, 10, 53}, 10, 0}
  };
  for (int i = 0; i < M; i++)
    {
      show (mass[i].arr);
      cout << mass[i].first << " " << mass[i].last << endl;
      simpleSSort (mass[i].arr, mass[i].first, mass[i].last);
      show (mass[i].arr);
    }
  return 0;
}

#include <time.h>
#include <stdio.h>
#define MMAX 4
#define NMAX 5

main(){
/*
	 Поиск минимального среди максимальных элементов
	 строк матрицы и его положения в ней
*/
  srand(time(NULL)); 
  unsigned int m,n,i;
  char a[MMAX][NMAX], max[MMAX], *ptrmax[MMAX], *ptrminmax, *minmax();
  int read_matrix();
  char gt(), lt();
			 /* Ввод матрицы */
  do {printf("m="); scanf("%u",&m);} while (m>MMAX);
  do {printf("n="); scanf("%u",&n);} while (n>NMAX);
  printf("A:\n");
  read_matrix (a,m,n);
			 /* Поиск максимальных элементов строк матрицы */
  for (i=0; i<m; i++){
      ptrmax[i]=minmax(a[i],0,n-1,gt);
      max[i]=*ptrmax[i];
  }
			 /* Поиск минимального элемента среди
			    максимальных элементов строк матрицы */
  ptrminmax=minmax(max,0,m-1,lt);
			 /* Вывод результата поиска */
  i=ptrminmax-max;
  printf ("a[%u,%u]=%d\n", i+1, ptrmax[i]-a[i]+1, *ptrminmax);
}

int read_matrix(a,m,n)		 /* Ввод матрицы размера m*n   */
  char a[][NMAX];
  unsigned int m,n;
{
  unsigned int i,j;
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      scanf ("%c",&a[i][j]);
}

char *minmax (a, first, last, operrel) /* Поиска максимального      */
   char a[];                           /* (минимального) среди      */
   unsigned int first, last;               /* элементов массива типа    */
   int operrel();                          /* TYPEELEM от first по last */

{ char *minmax;
  unsigned int i;
  minmax=a+first;
  for (i=first+1; i<=last; i++)
    if (operrel(a[i],*minmax)) minmax=&a[i];
  return (minmax);
}

char gt(a,b) char a,b; { return(a>b); }  /* операция "больше" */

char lt(a,b) char a,b; { return(a<b); }  /* операция "меньше" */


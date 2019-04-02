void simpleSSort (int *a,        /* указатель на первый элемент массива */
                  unsigned first, /* индексы первого (first) и           */
                  unsigned last)  /* последнего (last) элементов
                                     сортируемой части массива.          */
{
  unsigned k,i;
  int temp;
  for (k=last; k>first; --k)
    for (i=first; i<k; ++i)
      if (a[i]<a[k]){
         temp=a[i];
         a[i]=a[k];
         a[k]=temp;
      }
}

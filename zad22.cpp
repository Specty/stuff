void simpleSSort (int *a,        /* указатель на первый элемент массива */
                  unsigned first, /* индексы первого (first) и           */
                  unsigned last)  /* последнего (last) элементов
                                     сортируемой части массива.          */
{
  unsigned k,i;
  int temp;
  for (k=first; k<last; ++k)
    for (i=last; i>k; --i)
      if (a[i]<a[k]){
         temp=a[i];
         a[i]=a[k];
         a[k]=temp;
      }
}

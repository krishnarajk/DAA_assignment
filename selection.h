void selection_sort (int ar[], int size)
{
  int min_ele_loc;
  for (int i = 0; i < size-1; ++i)
  {
    min_ele_loc = i;
    for (int j = i + 1; j < size; ++j)
    {
      if (ar[j] < ar[min_ele_loc])
      {
        min_ele_loc = j;
      }
    }
    int temp;
    temp=ar[i];
    ar[i]=ar[min_ele_loc];
    ar[min_ele_loc]=temp;
 
  }	
}


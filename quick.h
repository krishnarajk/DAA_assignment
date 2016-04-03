void quick(int a[],int l,int u)
{
  int i,j;
   int p,temp;
   if(l<u)
   {
   p=a[l];
   i=l;
   j=u;
    while(i<j)
   {
      while(a[i] <= p && i<j )
	 i++;
      while(a[j]>p && i<=j )
	   j--;
      if(i<=j)
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;}
  }
  temp=a[j];
  a[j]=a[l];
  a[l]=temp;
  quick(a,l,j-1);
  quick(a,j+1,u); 
 }
}

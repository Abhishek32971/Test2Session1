#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the value up to which you want the series\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  for (int i=1;i<n;i++)
    {
      a[i]=i+1;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
    
    for (int i=0;i<n;i++)
    {
      if (a[i]%2==0)
       {
         a[i]=0;
       }
      if (a[i]%3==0)
       {
         a[i]=0;
       }
      if (a[i]%5==0)
      {
        a[i]=0;
      }
      if (a[i]%7==0)
      {
        a[i]=0;
      }
    }
    for (int i=0;i<n;i++)
      {
        if (a[i]==0)
        {
          for ()
          
        }
      }
}
void out_put(int n, int a[n]);
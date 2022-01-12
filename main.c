#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int i, n, j, c=0;
  int k=0;
  static int primearr[50];
  int *a;
  
  n = argc-1;
  a = (int*)malloc(sizeof(int)*n);

  for(i=0; i<n; i++)
  {
    a[i] = atoi(argv[i+1]);
  }

  for(j=0; j<n; j++)
  {
    for (i=2; i <= a[j]/2; ++i) 
    {
      if (a[j] % i == 0) {
        c = 1;
        break;
      }
    }
    if(c==0 && a[j]>1)
    {
      primearr[k] = a[j];
      k++;
    }
    c=0;
  }

  for(i=0; i<k; i++)
  {
    printf(" %d \n", primearr[i]);
  }
  
  printf("Smallest Prime Numbers is = %d\n", findsmall(primearr));
  printf("Largest Prime Number is %d\n", findbig(primearr));

  return 0;
}

int findsmall(int primearr[])
{
  int i, smallest;
  int size = sizeof(primearr)/sizeof(primearr[0]);
  smallest = primearr[0];
  for (i = 0; i<size; i++) {
    if (primearr[i] < smallest) {
        smallest = primearr[i];
    }
  }

  return smallest;
}

int findbig(int primearr[])
{
  int i, biggest;
  int size = sizeof(primearr)/sizeof(primearr[0]);
  biggest = primearr[0];
  for (i = 0; i<size; i++) {
    if (primearr[i] > biggest) {
        biggest = primearr[i];
    }
  }

  return biggest;
}

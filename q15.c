#include <stdio.h>
int main()
{
  int m=5, n=5, z,i,j;
  int a[5]={1,2,3,4,5};
  int b[6]={6,7,8,9,10};
  z=m+n;
  int c[z];
  for (i=0;  i<m; i++){
    c[i]=a[i];
  }
  for (i=0, j=m; j<z && i<n; i++,j++){
    c[j]=b[i];
  }
  for (i=0; i<z; i++){
    printf("%d",c[i]);
  }
    return 0;
  }  

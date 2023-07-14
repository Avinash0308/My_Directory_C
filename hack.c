#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int  d=0,e=0,f=0;
  for (int i = 1; i<=n; i++) {
  for (int j = i+1; j <=n; j++) {
      if (((i&j) > d ) && ((i&j) < k )) {
       d= i&j;
      }
      if (((i|j) > e ) && ((i|j) < k )) {
       e= i|j;
      }
      if (((i^j) > f ) && ((i^j) < k )) {
       f= i^j;
      }
  }
     }
  printf("%d\n",d);
  printf("%d\n",e);
  printf("%d\n",f);  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
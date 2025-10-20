#include <stdio.h>

int main() {

   int n;
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++) {
         scanf("%d", &a[i]);
   }
  int k = 0; 
  int j = n - 1;
  while (k < j) {
      int temp = a[k];
      a[k] = a[j];
      a[j] = temp;
      k++;
      j--;
  }


  for (int i = 0; i < n; i++) {
      printf("%d ", a[i]);
  }
    return 0;
}

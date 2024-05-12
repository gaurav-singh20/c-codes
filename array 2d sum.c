#include <stdio.h>

int main() {
   int row, col, i, j;
   int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
   int sum[3][3];
   for(row = 0; row < 3; row++) {
      for(col = 0; col < 3; col++) {
         sum[row][col] = arr1[row][col] + arr2[row][col];
      }
   }
   printf("Sum of two arrays:\n");
   for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
}


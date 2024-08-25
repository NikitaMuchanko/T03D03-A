#include <stdio.h>

int main(void) {
     int x1, x2;
     printf("Input numbers: ");
     scanf("%d%d", &x1, &x2);
     if (x1 >= x2) {
          printf("The max number is %d", x1);
     } else {
          printf("The max number is %d", x2);
     }
}
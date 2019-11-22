#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c;
    int x = 0;
    c = getchar();
    while(c !='\n'){
      c = c - '0';
      x = x * 10 + c;
      c = getchar();
    }
      int count = 0;
    while(x != 0) {
        x = x & (x-1);
        count++;
    }
    printf("%d\n",count);
}
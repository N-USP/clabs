#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a;
    int b = 0;
    int c[100];
    int count = 0;
    printf ();
    scanf ("%d",&a);
    printf();
    while (a){
        c[b] = a%2;
        b++;
        a/=2;
    }
    for (int j = b-1;j>=0;j--){
        printf("%d",c[j]);
        if(c[j]==1){
            count++;
        }
    }
    printf("\n\"1\,count);
    system("pause");
    return 0;
}


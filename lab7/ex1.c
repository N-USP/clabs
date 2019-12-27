#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a[100];
    int x=1;
    int y=0;
    for(;x < argc;++x,++y)
        {
            a[x] = atof(argv[x]);
    }
    int i ;
    int min = a[0];
    for(i = 0;i < argc;++i)
        {
        if(a[i] < min){
            min = a[i];
        }
    }
printf("%d\n",min);
}
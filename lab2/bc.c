#include <stdio.h>
#include <stdlib.h>
main()
{
    int c[4];
    int b = 0;
    int x;

   do{ c[b] = getchar();
       putchar(c[b]);
       c[b] = c[b] - '0';
       b++;
      }
    while (c[b] !='\n');
    
    if(b == 1)
    {x = c[0];}

    else if(b == 2)
    {x = c[0]*10 + c[1];}
    
    else if(b == 3)
    {x = c[0]*100 + c[1]*10 + c[2];}

    else if(b == 4)
    {x = c[0]*1000 + c[1]*100 + c[2]*10 + c[3];}

    else if(b == 5)
    {x = c[0]*10000 + c[1]*1000 + c[2]*100 + c[3]*10 + c[4];}

    else{printf("数字过大\n");}

 int count = 0;
 int i = 0;
 while(x !=0){
   i = x & 1;
   x = x<<1;
   if(i !=0){
     count++;
   }
 }
printf("%d\n",count);
return 0;
}
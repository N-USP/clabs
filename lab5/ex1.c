 2019/12/4 8:06:04
#include<stdio.h>
    int count(char *str){
    int i = 0;
    while(str[i++] !='\0'){
        ;
        }
    i--;
    return i;
    }
int main()
{
    char a[50];
    int i = 0;
    a[i] = getchar();
    while (a[i] !='\n'){
        i++;
        a[i] = getchar();
        }

    char b[50];   
    int x = count(a);
    int y = 0;
    char *ap;

    while(x !=0){
        ap = &a[x];
        b[y] = *ap;
        y++,x--;
    }
    printf("%s\n",b);
}

 2019/12/4 13:13:45


 2019/12/4 13:24:26


 21:29:09
#include<stdio.h>
    int count(char *str){
        int i = 0;
        while(str[i++] !='\0'){
            ;
        }
    i--;
    return i;
    }

    void reverse(char s[],char z[]){
        int x = count(s);
        int y = 0;

        while(x >=0){
            z[y] = s[x];
            x--;
            y++;
        }
    }
    
int main()
{
    char a[50];
    int i = 0;
    a[i] = getchar();
    while (a[i] !='\n'){
        i++;
        a[i] = getchar();
    }
    
    char b[50];
    reverse(a,b);
    printf("%s\n",b);
}


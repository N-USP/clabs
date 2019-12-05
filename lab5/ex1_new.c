#include<stdio.h>
int count(char str[]){
    int i = 0;
    while(str[i++] !='\0'){
        ;
    }
    return i;
}

    void reverse(char s[]){
        int b = count(s);
        while(b >=0){
            printf("%c",s[b]);
            b--;
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
    
    reverse(a);
    printf("\n");
}
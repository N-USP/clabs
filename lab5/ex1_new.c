#include<stdio.h>
int count(char str[]){
    int i = 0;
    while(str[i++] !='\0'){
        ;
    }
    return i;
}

void reverse(char input[], char result[]) {
    int length = count(s);
    int index = 0;
    while(length >= 0){
      result[index++] = input[length--];
    }
}
    
int main()
{
    char input[1024];
    int i = 0;
    a[i] = getchar();
    while (a[i] !='\n'){
        i++;
        a[i] = getchar();
    }

    char result[1024];
    reverse(input, result);
    printf("%s\n", result);
}

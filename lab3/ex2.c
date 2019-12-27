#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("输入一个16进制的非负整数,以“0x”开头.\n");
    char c;
    int i = 0;
    int x = 0;
    c = getchar();
    if(c !='0'){
        printf("输入了不合法的字符\n");
        exit(0);
    }
    c = getchar();
    if(c !='x' ||c !='X'){
        printf("输入了不合法的字符\n");
        exit(0);
    }
    c = getchar();
    while (c !='\n'&&c !=EOF){
        if((c>='0'&&c<='9')||(c>='a'&&c <= 'f')||(c>='A'&&c <= 'F')){
            if(c=='a'||c=='A'){
                x = x * 16 + 10;
            }else if(c=='b'||c=='B'){
                x = x * 16 + 11;
            }else if(c=='c'||c=='C'){
                x = x * 16 + 12;
            }else if(c=='d'||c=='D'){
                x = x * 16 + 13;
            }else if(c=='e'||c=='E'){
                x = x * 16 + 14;
            }else if(c=='f'||c=='F'){
                x = x * 16 + 15;
            }else{x = x * 16 + (c - '0');
            }
            ++i;
            c = getchar();
        }else{
            printf("输入了不合法的字符\n");
            exit(0);
        }
    }
    if(i > 10){
        printf("输入的数字太大，需要换一个小的数字,最大不超过0xffffffff\n");
        exit(0);
    }else{
        printf("%d\n",x);
    }
} 
#include<stdio.h>
#include<string.h>
int count(char *str){
    int i = 0;
    while(str[i++] !='\0'){
        ;
    }
    i--;i--;
    return i;
}
int strrindex(char line[],char pattern[]){
    int a = count(line);
    int b = count(pattern);
    
    int i = a;
    while(i >=0){
      int k = 0;int j = i - b;
      while(j >=0 && line[j] == pattern[k]){
      if(k == b){
          i = i - b;
          return i;
         }
      k++;j++;
      }
      i--;
    }
      return -1;
}
main()
{
    char line[1000];
    char pattern[1000];
    scanf("%s %s",line,pattern);
    printf("%d\n",strrindex(line,pattern));
}

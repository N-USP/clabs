#include<stdio.h>
int count(char *str){
    int i = 0;
    while(str[i++] !='\0'){
        ;
    }
    i--;
    return i;
}
int strrindex(char line[],char pattern[]){
    int a = count(line);
    int b = count(pattern);
    
    int i = a;
    while(i !=1){
      int k = 0;int j = i - b + 1;
      while(j !=1 && line[j] ==  pattern[k]){
      k++;j--;
      }
      i--;
      if(k == b){
          return i;
         }
      return -1;
    }
 }
main()
{
    char line[1000];
    char pattern[1000];
    scanf("%s %s",line,pattern);
    printf("%d\n",strrindex(line,pattern));
}
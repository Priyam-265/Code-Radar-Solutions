#include <stdio.h>
int main(){
    int a,b;
    char c;
    int sum=a+b;
    int diff=a-b;
    int mul=a*b;
    int div=a/b;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",sum);
    }
    else if(c=='-'){
        printf("%d",diff);
    }
    else if(c=='*'){
        printf("%d",mul);
    }
    else if(c=='/'){
        printf("%d",div);
    }
    else{
        printf("error");
    }
    return 0;
    }
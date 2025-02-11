#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d%c",&a,&b,&c);
    if(c='+'){
        int sum=a+b;
        printf("%d",sum);
    }
    else if(c=='-'){
        int diff=a-b;
        printf("%d",diff);
    }
    else if(c=='*'){
        int mul=a*b;
        printf("%d",mul);
    }
    else if(c=='/'){
        int div=a/b;
        printf("%d",div);
    }
    else{
        printf("error");
    }
    return 0;
    }
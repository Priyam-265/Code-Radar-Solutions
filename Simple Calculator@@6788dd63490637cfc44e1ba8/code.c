#include <stdio.h>
int main(){
    int a,b,c;
    // char c;
    scanf("%d %d %d",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
    }
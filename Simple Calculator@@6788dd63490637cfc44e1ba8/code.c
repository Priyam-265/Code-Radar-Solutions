#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    if(c=='+'){
        printf(a+b);
    }
    else if(c=='-'){
        printf(a-b);
    }
    else if(c=='+'){
        printf(a+b);
    }
    else if(c=='*'){
        printf(a*b);
    }
    else if(c=='/'){
        printf(a/b);
    }
    return 0;
    }
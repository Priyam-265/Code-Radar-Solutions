#include <stdio.h>
int main(){
    int a,b;
    char[100] c;
    scanf("%d %d %s",&a,&b,&c);
    if(c=="+"){
        printf("%d",a+b);
    }
    else if(c=="-"){
        printf("%d",a-b);
    }
    else if(c=="*"){
        printf("%d",a*b);
    }
    else if(c=="/"){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
    }
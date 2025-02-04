#include <stdio.h>
int main(){
    int a,b;
    char c[100];
    scanf("%d %d %s",&a,&b,&c);
    // if(c=="+"){
    //     printf("%d",a+b);
    // }
    // else if(c=="-"){
    //     printf("%d",a-b);
    // }
    // else if(c=="*"){
    //     printf("%d",a*b);
    // }
    // else if(c=="/"){
    //     printf("%d",a/b);
    // }
    // else{
    //     printf("error");
    // }
    switch(c):
    case "+":
    printf("%d",a+b);
    break;
    case "-":
    printf("%d",a-b);
    break;
    case "*":
    printf("%d",a*b);
    break;
    case "/":
    printf("%d",a/b);
    break;
    default:
    printf("error");
    return 0;
    }
#include <stdio.h>
int main(){
    int a,b;
    char[100] choice;
    scanf("%d %d %s",&a,&b,&choice);
    if(choice=="+"){
        printf("%d",a+b);
    }
    else if(choice=="-"){
        printf("%d",a-b);
    }
    else if(choice=="*"){
        printf("%d",a*b);
    }
    else if(choice=="/"){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    // switch(choice){
    // case '+':
    // printf("%d",a+b);
    // break;
    // case '-':
    // printf("%d",a-b);
    // break;
    // case '*':
    // printf("%d",a*b);
    // break;
    // case '/':
    // printf("%d",a/b);
    // break;
    // default:
    // printf("error");
    // }
    return 0;
    }
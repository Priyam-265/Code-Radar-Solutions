#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    switch(c){
        case '+':
        printf(a+b);
        break;
        case '-':
        printf(a-b);
        break;
        case '*':
        printf(a*b);
        break;
        case '/':
        printf(a/b);
        default:
        printf("error");
    }
}
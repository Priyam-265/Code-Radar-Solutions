#include <stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f %f%c",&a,&b,&c);
    // if(c=='+'){
    //     int sum=a+b;
    //     printf("%d",sum);
    // }
    // else if(c=='-'){
    //     int diff=a-b;
    //     printf("%d",diff);
    // }
    // else if(c=='*'){
    //     int mul=a*b;
    //     printf("%d",mul);
    // }
    // else if(c=='/'){
    //     if(b!=0){
    //     int div=a/b;
    //     printf("%d",div);
    //     }
    //     else{
    //         printf("error");
    //     }
    // }
    // else{
    //     printf("error");
    // }
    switch(c){
        case '+':
        printf("%.0f",a+b);
        break;
        case'-':
        printf("%.0f",a-b);
        break;
        case'*':
        printf("%.0f",a*b);
        break;
        case'/':
        if(b!=0){
            printf("%.0f",a/b);
        }
        else{
            printf("error");
        }
        break;
        default:
        printf("er");
    }
    return 0;
    }
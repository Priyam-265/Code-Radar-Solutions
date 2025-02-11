#include <stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if(c=='+'){
        float sum=a+b;
        printf("%.0f",sum);
    }
    else if(c=='-'){
        float diff=a-b;
        printf("%.0f",diff);
    }
    else if(c=='*'){
        float mul=a*b;
        printf("%.0f",mul);
    }
    else if(c=='/'){
        if(b!=0){
        float div=a/b;
        printf("%.0f",div);
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    // switch(c){
    //     case '+':
    //     printf("%.0f",a+b);
    //     break;
    //     case'-':
    //     printf("%.0f",a-b);
    //     break;
    //     case'*':
    //     printf("%.0f",a*b);
    //     break;
    //     case'/':
    //     if(b!=0){
    //         printf("%.0f",a/b);
    //     }
    //     else{
    //         printf("error");
    //     }
    //     break;
    //     default:
    //     printf("er");
    // }
    // return 0;
    // }
#include <stdio.h>
int  main(){
    int a;
    scanf("%d",&a);
    if(a>1){
    for(int i=2;i*i<=a;i++){
    if(a%1==0&&a%i==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }}
    }
    return 0;
}
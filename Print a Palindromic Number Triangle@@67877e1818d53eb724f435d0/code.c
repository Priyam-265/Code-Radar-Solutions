#include <stdio.h>
int main(){
    int a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
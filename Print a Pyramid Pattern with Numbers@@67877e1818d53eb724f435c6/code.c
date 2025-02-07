#include <stdio.h>
int main(){
    int a;
    scanf("%a",&a);
    for(int i=0;i<=2*a-1;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<2*a-i;k++){
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;

}
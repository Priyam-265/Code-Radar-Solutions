#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<2*a-1;i++){
        int comp;
        if(i<a)comp=2*(a-i)-1;
        else comp=2*(i-a+1)+1;
        for(int j=0;j<comp;j++){
            printf(" ");
        }
        for(int k=0;k<2*(a-comp);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
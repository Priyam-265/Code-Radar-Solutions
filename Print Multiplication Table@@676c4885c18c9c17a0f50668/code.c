#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<11;i++){
        mul=a*i;
        printf("%d × %d = %d",a,i,mul);
    }
    return 0;
}
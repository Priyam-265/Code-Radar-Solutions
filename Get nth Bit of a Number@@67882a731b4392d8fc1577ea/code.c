#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=&a;
    printf("%d",c);
    return 0;
}
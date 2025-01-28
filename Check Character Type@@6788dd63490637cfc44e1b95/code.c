#include <stdio.h>
#include<ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(isdigit(a)){
        printf("Digit");
    }
    else if (isalpha(a)){
        char lower=tolower(a);
        if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant")
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}
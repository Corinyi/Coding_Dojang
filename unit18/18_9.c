#include <stdio.h>

int main(){
    
    char input;
    
    scanf("%c", &input);
    
    if(input == 'a'){
        printf("%s","a입니다.");
    }
    else
        printf("%s","a가 아닙니다.");
    
    return 0;
}
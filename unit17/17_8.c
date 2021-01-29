# include <stdio.h>

int main(void){
    
    int age;
    scanf("%d", &age);
    
    if(age < 18){
        printf("%s","청소년 관람 불가");
    }
    
    return 0;
}
# include <stdio.h>

int main(void){
    
    int num;
    int ans;
    scanf("%d", &num);
    // num초기화 후 값 입력
    
    while(num > 0){ //마지막 자리수 까지 연산
        ans = num%10; //마지막 자리수
        printf("%d ", ans); //마지막 자리수 출력
        num = (num - (num%10))/10; // 소수점 한자리씩 앞으로
        
    }
    
    return 0;
}
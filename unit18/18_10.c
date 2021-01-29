# include <stdio.h>

int main(){
    
    int kor, eng, math, sci ;
    float avg;

    scanf("%d",&kor);
    scanf("%d",&eng);
    scanf("%d",&math);
    scanf("%d",&sci);
    
    if(((kor>=0 && kor<=100)*(eng>=0 && eng<=100)*(math>=0 && math<=100)*(sci>=0 && sci<=100))==0)
        printf("%s","잘못된 점수");
    else{
    avg = (kor+ eng+ math+ sci) / 4;
    
    printf("%s",(avg>=85)? ("합격"):("불합격"));
    }
    
    return 0;
}
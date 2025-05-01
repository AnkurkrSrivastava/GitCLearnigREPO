#include <stdio.h>

int main(){
    printf("enter your 3 subjects narks\n");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a,b,c>33){
        float z=(a+b+c)*100/300;
        printf("your percentage is %f\n",z);
        if(z>40){
            printf("you are pass");
        }
        else{
            printf("you are fail\n");
        }
    }
    else{
        printf("you are fail\n");
    }
    return 0;
}
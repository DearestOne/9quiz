#include<stdio.h>
void main(){
    float x;
    scanf("%f",&x);
    x -= 20;
    printf("%.0f\n",(x * 60.0/100.0));
    printf("%.0f",(x * 70.0/100.0));
}
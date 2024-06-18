#include<stdio.h>
void main(){
    float x;
    int y;
    scanf("%f %d",&x ,&y);
    float time = ((y * 1000000) / x) / 86400;
    printf("%.2f",time);
}
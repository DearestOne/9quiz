#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x ,&y);
    printf("%.1f\n",(y - x) - (y * 0.07) - (x * 0.03));
    printf("%.1f",y - (y * 0.07) - (x * 1.03));
    printf("%.1f",(y * 0.93) - (x * 1.03));
}
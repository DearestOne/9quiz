#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x ,&y);
    printf("%.1f",(y * 93.0/100.0) - (x * 97.0/100.0) - (y * 0.07) - (x * 0.03));
}
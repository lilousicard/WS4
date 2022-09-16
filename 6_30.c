#include <stdio.h>

int MaxNumber(int num1, int num2, int num3, int num4) {
    int max;
    if(num1>num2 && num1>num3 && num1>num4){
        max = num1;
    } else if (num2>num3 && num2>num4) {
        max = num2;
    } else if (num3>num4){
        max = num3;
    } else max = num4;
    return max;
}

int MinNumber(int num1, int num2, int num3, int num4) {
    int min = num1;
    if(num1<num2 && num1<num3 && num1<num4){
        min = num1;
    } else if (num2<num3 && num2<num4) {
        min = num2;
    } else if (num3<num4){
        min = num3;
    } else min = num4;
    return min;
}

int main() {
    int w,x,y,z;
    scanf("%d %d %d %d" ,&w,&x,&y,&z);
    int max = MaxNumber(w,x,y,z);
    int min = MinNumber(w,x,y,z);
    printf("Maximum is %d\n",max);
    printf("Minimum is %d\n",min);
    return 0;
}

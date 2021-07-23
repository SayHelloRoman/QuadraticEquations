#include <stdio.h>
#include <math.h>


int main(){
    int a, b, c;
    float d;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    d = (pow(b, 2)) - (4 * a * c);
    printf("D = %f\n", d);

    if(d > 0){
        printf("x1 = %f\nx2 = %f", (-b + sqrt(d)) / 2 * a, (-b - sqrt(d)) / 2 * a);

    }else if(d == 0){
        printf("x = %f\n", -(b / (2 * a)));

    }else{
        printf("No solution!");

    }

    return 0;
}   
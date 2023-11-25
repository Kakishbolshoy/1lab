#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, x;
    printf("Enter a -> ");
    scanf("%f", &a);

    printf("Enter b -> ");
    scanf("%f", &b);

    printf("Enter x -> ");
    scanf("%f", &x);

    if ((a+b) < x) {
        printf("%.2f", (a+b)/x);
    }
    else if ((a+b) > x) {
        printf("%.2f", x/(a+b));
    }
    else {
        printf("%.2f", b/x);
    }

    return 0;
}




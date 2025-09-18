#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("enter an integer : ");
    scanf("%i", &a);

    printf("enter an integer : ");
    scanf("%i", &b);

    printf("%f\n", (float)a/b);

    system("PAUSE");
    return 0;
}

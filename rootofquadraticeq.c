#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 1;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Two real roots: %.2f and %.2f\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("One repeated root: %.2f\n", root1);
    } else {
        printf("Roots are complex (no real roots)\n");
    }

    return 0;
}
11#include <math.h>
#include <stdio.h>
void displayResult(double discriminant, double a, double b, double root1, double root2, double realPart, double imagPart) {
  if (discriminant > 0) {
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        printf("root1 = root2 = %.2lf\n", root1);
    } else {
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}

}
int main() {
   double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        displayResult(discriminant, a, b, root1, root2, 0, 0);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        displayResult(discriminant, a, b, root1, root2, 0, 0);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        displayResult(discriminant, a, b, 0, 0, realPart, imagPart);
    }

    return 0;

}

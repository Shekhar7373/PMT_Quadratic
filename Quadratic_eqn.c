#include <math.h>
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
}

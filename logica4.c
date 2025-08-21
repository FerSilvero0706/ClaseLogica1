#include <stdio.h>

int mayorDeTres(int a, int b, int c) {
    int mayor = a;

    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }

    return mayor;
}

int main() {
    int num1, num2, num3;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    int mayor = mayorDeTres(num1, num2, num3);
    printf("El mayor de los tres números es: %d\n", mayor);

    return 0;
}
#include <stdio.h>

int Sumar (int a, int b) {
    return a + b;
}

int main () {   
    int numer1;
    printf ("Ingrese el primer numero: ");
    scanf("%d", &numer1);
    int numer2;
    printf ("Ingrese el segundo numero: ");
    scanf("%d", &numer2);
    int a = numer1;
    int b = numer2;
   
int resultado = Sumar(a, b);
printf("La suma es: %d\n", resultado);
return 0;
}
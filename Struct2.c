#include <stdio.h>

int main() {
    int CantidadMarcas;
    int CantidadModelos;
    int CantidadVehiculos;

    printf("Ingrese la cantidad de marcas: ");
    scanf("%d", &CantidadMarcas);

    printf("Ingrese la cantidad de modelos: ");
    scanf("%d", &CantidadModelos);

    printf("Ingrese la cantidad de vehículos: ");
    scanf("%d", &CantidadVehiculos);

    printf("\nResumen:\n");
    printf("Marcas: %d\n", CantidadMarcas);
    printf("Modelos: %d\n", CantidadModelos);
    printf("Vehículos: %d\n", CantidadVehiculos);

    return 0;
}
#include <stdio.h>
#include <string.h>

typedef struct {
  char nombre[20];
} Marca;

typedef struct {
  char nombre_modelo[10];
} Modelo;

typedef struct {
  Marca marca;
  Modelo modelo;
  int anio;
  char color[10];
} Vehiculo;

int main() {

  Marca marca_uno = {"Toyota"};
  Marca marca_dos = {"Ford"};
  Marca marca_tres = {"Chevrolet"};

  Modelo modelo_uno = {"Corolla"};
  Modelo modelo_dos = {"Mustang"};
  Modelo modelo_tres = {"Camaro"};

  Vehiculo vehiculo = {marca_uno, modelo_uno, 2024, "Rojo"};
  Vehiculo vehiculo2 = {marca_dos, modelo_dos, 2023, "Azul"};
  Vehiculo vehiculo3 = {marca_tres, modelo_tres, 2022, "Negro"};

  printf("\n");
  printf("Vehiculo 1:\n");
  printf("Marca: %s\n", vehiculo.marca.nombre);
  printf("Modelo: %s\n", vehiculo.modelo.nombre_modelo);
  printf("Anio: %d\n", vehiculo.anio);
  printf("Color: %s\n", vehiculo.color);
  printf("\n");
  printf("Vehiculo 2:\n");
  printf("Marca: %s\n", vehiculo2.marca.nombre);
  printf("Modelo: %s\n", vehiculo2.modelo.nombre_modelo);
  printf("Anio: %d\n", vehiculo2.anio);
  printf("Color: %s\n", vehiculo2.color);
  printf("\n");
  printf("Vehiculo 3:\n");
  printf("Marca: %s\n", vehiculo3.marca.nombre);
  printf("Modelo: %s\n", vehiculo3.modelo.nombre_modelo);
  printf("Anio: %d\n", vehiculo3.anio);
  printf("Color: %s\n", vehiculo3.color);
  printf("\n");
  return 0;
}

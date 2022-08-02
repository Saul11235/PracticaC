#include <stdio.h>

// programa que imprime los resultados de celsius
// a fahrenheit

int main(void){
  // declarando variables
  int fahrenheit, celsius;
  int minimo, maximo, pasos;

  minimo = 0;   // temeperatura minima
  maximo = 200; // temeperatura maxima
  pasos  = 15;  // variacion entre temperaturas

  fahrenheit=minimo;

  //titulo
  printf("fahrenheit - celsius\n");

  //escribiedo tabla de datos
  while (fahrenheit<maximo){
    celsius = 5*(fahrenheit-32)/9;
    printf("%d \t %d \n",fahrenheit,celsius);
    fahrenheit=fahrenheit+pasos;
  }

}

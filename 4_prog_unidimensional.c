/* Autor: Daniel Pedro Lopez Cruz----------------------------------------*/
/* E-mail: elcrackdani.1999@gmail.com------------------------------------*/
/* Fecha de creacion: 10/04/2018-----------------------------------------*/
/* Fecha de actualizacion: 11/04/2018-----------------------------------*/
/* Descripcion: este programa encuentra el numero menor en un arreglo
   unidimencional de enteros.--------------------------------------------*/

/* Declaracion de bibliotecas de cabecera */
#include <stdio.h>

/*declaracion de las constantes*/
#define TAM 10

/* Implementacion del cuerpo del programa */
int main(void)

{
  /* Declaracion e inicializacion del arreglo */
  int arreglo[TAM] = {7, 1, 2, 0, 5, 6, 4, 3, 9, 8};

/* Se asigna a la variable mayor el primer elemento del arreglo */
  int menor = arreglo[0];

  /* Se evalua cada una de las posiciones del arreglo para hallar el numero menor*/
  /* Se inicializa i con 1, para no evaluar la posicion 0. */

  for(int i = 1; i < TAM; i++)
  {
    if(menor > arreglo[i])
      menor = arreglo[i];
  }

  printf("El numero menor es: %d\n", menor);
  return 0;
}

/* Autor: Lopez Cruz Daniel Pedro                                         */
/* E-mail: elcrackdani.1999@gmail.com                                     */
/* Fecha de creacion: miercoles 11 de abril del 2018                      */
/* Fecha de actualizacion:                                                */
/* DescripciOn: este programa mostrara cuantas veces se repie un
  numero en un arreglo unidimensional                                      */

/*declaracion de bibliotecas*/
#include <stdio.h>

/*declaracuion de constantes*/
#define TAM 10

/*declracion de la funcion principal*/
int main (void)

{
/* Declaracion e inicializacion del arreglo */
  int arreglo [TAM]= {0,1,2,3,4,5,6,7,8,9};
  int contador=0;
  int i,j;
  for (i=0; i<TAM; i++)
  
{
  contador=0;
  for (j=i; j<TAM; j++)
{
  if (i==arreglo[j])
  contador++;

}
printf ("el  numero %d se repite %d veces \n", arreglo [i], contador);
}
return 0;
}

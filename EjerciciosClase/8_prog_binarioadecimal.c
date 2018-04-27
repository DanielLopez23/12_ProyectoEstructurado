
/* Autor: Lopez Cruz Daniel Pedro                                         */
/* E-mail: elcrackdani.1999@gmail.com                                     */
/* Fecha de creacion: miercoles 25 de abril del 2018                      */
/* Fecha de actualizacion: miercoles 25 de abril del 2018                 */
/* DescripciOn:convertir un numero decimal a binario                      */

/*decclaracion de bibliotecas*/
#include <stdio.h>
#include <math.h>
/*declatracion de la funcion principal*/
int main (void)

{
  const int dimension=4;
  int num[dimension];
  int suma, i;
 

  for (i=0; i<dimension; i++)
 	 {
    	   printf("inserte el numero binario\n");
           scanf ("%d",&num[i]);

  	 }
  for (i=0; i<dimension; i++)
  	 {
   	   suma=suma+ num[i]*pow(2,i);
  	 }
   printf("%d",suma);
   return 0;
 }

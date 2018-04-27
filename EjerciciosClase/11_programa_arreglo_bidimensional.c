/*-------------------------------------------------------------*/
/*Autor Daniel Pedro Lopez Cruz--------------------------------*/
/*E-mail: Elcrackdani.1999@gmail.com---------------------------*/
/*Fecha de creacion : 24 de abril del 2018---------------------*/
/*Fecha de actualizacion: 27 de abril del 2018-----------------*/
/*Descripcion:------------------------------------------------ */

/*declaracion de biliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*declaracion de constatntes*/
#define ROW 3 /*numero de filaz de la matriz*/
#define COL 3 /*numero de columnas de la matriz*/
#define MAX 1000 /*limite superior de los datos aleatorios*/

/*declaracion de la funcion principal*/
int main (void)
 {
   int  array [ROW][COL];
   srand((unsigned) time( NULL));

 /*inicializar el array con valores enteros aleatorios 1-100*/
   for (int i = 0; i < ROW; i++) /*ciclo que controla las filas del arreglo*/
   {
     for (int j= 0; j < COL; j++) /*ciclo que controla las columnas del arreglo*/
     {
 /* Asignacion de datos al array */
 /* Utilizar la funcion scanf() para solicitar datos al usuario */
 /* Utilizar la funcion array para obtener datos de forma aleatoria */
 /* La funcion se encuentra definida dentro de la biblioteca stdlib.h */
       array [i][j]= rand() % (MAX +1);
     }
   }

 printf("\x1b[32m Datos aleatorios de la matriz : array[%d][%d]\n", ROW,COL);
 printf("\x1b[42m siguiente mensaje\n");
 printf("\x1b[0m siguiente mensaje \n");


 for (int i = 0; i < ROW; i++)/* Ciclos que controla las filas del arreglo */
 {
   printf("{");
   for (int j = 0; j < COL; j++)/* Ciclo que controla las columnas */
   {
     printf("%d ", array[i][j]);
   }
   printf("}\n");
 }

 return 0;

}

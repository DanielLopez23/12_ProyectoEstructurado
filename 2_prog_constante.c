/*-------------------------------------------------------------*/
/*Autor Daniel Pedro Lopez Cruz--------------------------------*/
/*E-mail: Elcrackdani.1999@gmail.com---------------------------*/
/*Fecha de creacion : 10 de abril del 2018---------------------*/
/*Fecha de actualizacion: 13 de abril del 2018-----------------*/
/*Descripcion:Programa que muestra la declartacion de constantes
co #define y const y que muestre en pantalla los valores de las
constantes.Asi mismo, definir 6 macros para simular las (opera-
ciones (suma, resta,multiplicacion ,division y potencia) he im-
primir los valores en pantalla. Tambien se deberan simular los
ciclos for , while y do-while-------------------------------- */

#include <stdio.h>

/* DECLARACION DE CONSTANTES CON #define*/

#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN  0
#define MAX 100

/* Implementacion de macro */
#define SUMA(x, y) x+y
#define RESTA(x, y) x-y
#define MULT(x, y) x*y
#define DIV(x, y) x/y
#define POTCUADRADO(x) x*x
#define POTCUBO(x) x*x*x

/* Definir ciclos con macro */
#define CICLOFOR(x, y) for(x=0; x < y; x++)
#define CICLOWHILE(x , y) while( x < y )
#define CICLODOWHILE(x , y) do while(x<y)

/*Declaracion de constantes con cont*/

const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;

int main(void)
{

  /* Imprimir constantes #define */
  printf("El valor de PI es:\n %f \n", PI);
  printf("\n\n");
  printf("El valor de GRAVEDAD es:\n %f \n",G);
  printf("\n\n");
  printf("El valor de TAMANIO es:\n %d \n",TAMANIO);
  printf("\n\n");
  printf("El valor  MINIMO es:\n %d \n",MIN);
  printf("\n\n");
  printf("El valor  MAXIMO es:\n %d \n",MAX);
  printf("\n\n");

  /* Imprimir macros */
  printf("Operacion SUMA= \n %d \n", SUMA(3,4));
  printf("\n\n");
  printf("Operacion RESTA= \n %d \n", RESTA(3,4));
  printf("\n\n");
  printf("Operacion MULTIPLICACION= \n %d \n", MULT(3,4));
  printf("\n\n");
  printf("Operacion DIVICION= \n %d \n", DIV(3,4));
  printf("\n\n");
  printf("Operacion POTCUADRADO= \n %d \n", POTCUADRADO(3));
  printf("\n\n");
  printf("Operacion POTCUBO= \n %d \n", POTCUBO(3));
  printf("\n\n");

  /* Imprimir constantes const */
  printf("El valor de pi es:\n %f \n", pi);
  printf("\n\n");
  printf("El valor de la gravedad es:\n %f \n",g);
  printf("\n\n");
  printf("El valor del tamanio es:\n %d \n",tamanio);
  printf("\n\n");
  printf("El valor minimo es:\n %d \n",min);
  printf("\n\n");
  printf("El valor maximo es :\n %d \n",max);
  printf("\n\n");


  /* Utilizando las macros de ciclo */
  int x;
  int y = 10;

  CICLOFOR(x, y)
  {
    printf("\n Hola Mundo...\n" );
  }

  x = 0;
  printf("\n\n");

  CICLOWHILE (x , y)
  {
    printf("\nHola universo...\n");
    ++x;
  }

   return 0;
 }

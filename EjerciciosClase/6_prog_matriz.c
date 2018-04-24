/*-------------------------------------------------------------*/
/*Autor Daniel Pedro Lopez Cruz--------------------------------*/
/*E-mail: Elcrackdani.1999@gmail.com---------------------------*/
/*Fecha de creacion : 23 de abril del 2018---------------------*/
/*Fecha de actualizacion: 24 nde abril del 2018-----------------*/
/*Descripcion:  crear un programa para crear una matriz columna
cuadrada y rectangular---------------------------------------- */

/*declaracion de bibliotecas*/
#include <stdio.h>

int main (void)
{
  int matriz1[5][1] = { {1},{1},{1},{1},{1}};
  for (int i = 0; i < 5 ; i++)
  {
  for (int j = 0; j < 1; j++)
  {
  printf(" %d ", matriz1[i][j] );
  }
  printf("\n");
  }

  printf("\n");

  int matriz2[3][3] = { {1,1,1},{1,1,1},{1,1,1}};
  for (int i = 0; i < 3 ; i++)
  {
  for (int j = 0; j < 3; j++)
  {
  printf(" %d ", matriz2[i][j] );
  }
  printf("\n");
  }

  printf("\n");


  int matriz3[3][5] = { {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
  for (int i = 0; i < 3 ; i++)
  {
  for (int j = 0; j < 5; j++)
  {
  printf(" %d ", matriz3[i][j] );
  }
  printf("\n");
  }

  return 0;
}

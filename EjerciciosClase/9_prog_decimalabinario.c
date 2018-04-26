
/* Autor: Lopez Cruz Daniel Pedro                                         */
/* E-mail: elcrackdani.1999@gmail.com                                     */
/* Fecha de creacion: miercoles 24 de abril del 2018                      */
/* Fecha de actualizacion: miercoles 25 de abril del 2018                 */
/* DescripciOn:convertir un numero decimal a binario                      */

/*decclaracion de bibliotecas*/
#include <stdio.h>

/*declatracion de la funcion principal*/
int main (void)

{
    int numero_binario[100], i=0, j=0, y;
    printf("inserte un numero que desea convertir a binario:\n");
    scanf("%d",&y);

    for (i=100; i>0; i--)
    {
      numero_binario[i]=y%2;
      y=y/2;
    }
      for (i=1; i<=100; i++)
        {
          if (numero_binario [i]==1)
            {
              for (j=i; j<=100; j++)
                {
                  printf("%d", numero_binario [j]);
                }
              break;
            }
         }
    return 0;
}

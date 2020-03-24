/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main ()
{
  int data,i,j,digit;

  srand (time(NULL));

printf("Selamat datang di Random number generator, masukan angka 0 untuk keluar \n");
do
{

  printf("\nMasukan jumlah digit : "); scanf("%i", &digit);
  printf("\n");

  for (i=1;i<=10;i++)
  {
    printf("      ");
    for (j=1;j<=digit;j++)
        {data = rand() % 10; printf("%i", data) ;
    }
    printf("\n\n");
  }


}while(digit!=0);
  return 0;
}

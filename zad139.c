// Program treba izbrojat koliko ima parnih i neparnih brojeva u matrici.

#include <stdio.h>

int main()
{
        int A[10][10];
        int i, j, m, n, paran = 0, neparan = 0;

        printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi vrijednost A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
                 if ((A[i][j] % 2) == 0)
                 {
                     ++paran;
                 }
                 else
                     ++neparan;
             }
        }
        printf("\nDana matrica je \n\n");
        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n\n");
    }
    printf("\nU matrici ima  = %d parnih brojeva \n", paran);
    printf("\nU matrici ima  = %d neparnih brojeva \n", neparan);

    return 0;

}

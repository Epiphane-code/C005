#include <stdio.h>
int main ()
{
    int i, n;
    scanf("%d", &n);
    int tab[n];
    for(i = 0; i < n; i++){
        tab[i] = i + 1;
    }
    int temp = tab[0];
    for(i = 0; i < n-1; i++){
        tab[i] = tab[i + 1];
    }
    tab[n-1] = temp;

    printf("Tableau après rotation :");

    for (i = 0; i < n; i++)
    {
        printf(" %d", tab[i]);
    }

    return 0;
}
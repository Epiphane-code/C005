#include <stdio.h>
int main()
{
    int i, n, v;
    scanf("%d", &n);
    int tab[n];
    for(i = 0; i < n; i++){
        scanf("%d",&tab[i]);
    }
    scanf("%d",&v);
    int count = 0;
    for(i = 0; i < n; i++){
        if(tab[i] == v)
        count++;
    }

    printf("L'élément %d apparaît %d fois.\n", v, count);
}
#include <stdio.h>
int main()
{
    int n, m, i;
    scanf("%d",&n);
    int tab1[n];
    for (i = 0; i < n; i++){
        scanf("%d", &tab1[i]);
    }
    scanf("%d", &m);
    int tab2[n];
    for(i = 0; i < m; i++){
        scanf("%d", &tab2[i]);
    }
    printf("Tableau fusionné :");
    
    int k = n + m;
    int tab[k];
    for (i = 0; i < k; i++){
        if (i < n){
            tab[i] = tab1[i];
        }
        else tab[i] = tab2[i - n];
    }

    for (i = 0; i < k; i++){
        printf(" %d", tab[i]);
    }
}
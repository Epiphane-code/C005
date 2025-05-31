#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int tab[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    
    // Initialisation de la variable min avec le premier élément du tableau
    int min = tab[0];
    
    // Parcours du tableau pour trouver le minimum
    for (i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    
    printf("Le minimum est : %d\n", min);
    
    return 0;
}
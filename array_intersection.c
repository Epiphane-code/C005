#include <stdio.h>
int main()
{
    int n, m, i, j, k;
    scanf("%d",&n);
    int tab1[n];
    for (i = 0; i < n; i++){
        scanf("%d", &tab1[i]);
    }
    scanf("%d", &m);
    int tab2[m];
    for(i = 0; i < m; i++){
        scanf("%d", &tab2[i]);
    }
    k = n < m ? n : m;
    int tab3[k];
    int index = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérification si l'élément n'est pas déjà dans tab3
                // On utilise une variable "found" pour vérifier si l'élément existe déjà
                // dans tab3 avant de l'ajouter
                int found = 0;
                for (k = 0; k < index ; k++) {
                    if (tab3[k] == tab1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    // Ajout d'un élément à tab3
                    tab3[index] = tab1[i];
                    index++;
                }
            }
        }
    }

    printf("Intersection :");

    // Affichage du tableau d'intersection
    for (i = 0; i < index; i++) {
        printf(" %d", tab3[i]);
    }


}

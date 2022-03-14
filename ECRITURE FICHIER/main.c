
#include <stdio.h>
#include <stdlib.h>



/*
fputc écrit un caractère dans le fichier (

fputs écrit une chaîne dans le fichier

fprintf écrit une chaîne formatée dans le fichier
*/

int main()
{
    FILE* fichier = NULL;
 
    fichier = fopen("texte2.txt", "w");
 
    if (fichier != NULL)
    {
        fputc('A', fichier); // Écriture du caractère A
        fclose(fichier);
    }
 
    return 0;
}

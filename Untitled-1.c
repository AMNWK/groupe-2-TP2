// Fonction  la somme des éléments d'un tableau
int sommeTableau(int tab[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tab[i];
    }
    return somme;
}

int main() {
    int tableau[] = {5, 10, 15, 20, 25};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int resultat = sommeTableau(tableau, taille);
    printf("La somme des éléments du tableau est : %d\n", resultat);
    return 0;
}

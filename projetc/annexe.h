
char lireCaractere()
{
    char caractere = 0;
    caractere = getchar();
    caractere = toupper(caractere);

    while (getchar() != '\n');

    return caractere;
}

int gagne(int lettreTrouvee[])
{
    int i = 0;
    int joueurGagne = 1;

    for(i = 0 ; i < 4 ; i++)
    {
        if(lettreTrouvee[i] == 0)
            joueurGagne = 0;
    }

    return joueurGagne;
}

int rechercheLettre(char lettre, char motSecret[] , int lettreTrouvee[])
{
    int i = 0;
    int bonneLettre = 0;

    for(i = 0 ; motSecret[i] != '\0' ; i++)
    {
        if(lettre == motSecret[i])

        {
          bonneLettre = 1;
          lettreTrouvee[i] = 1;
        }
    }

    return bonneLettre;
}

void viderBuffer(void)
{
  int c;
  while((c=getchar()) != EOF && c != '\n');

}

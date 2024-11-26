#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int jour;
	int mois;
	int annee;
}date_dechaence;
typedef struct {
	char titre[50];
	char discription[50];
	date_dechaence date_decha;
	char priorite[100];
}tache;
tache pr[5];
int taille=0;
void ajouter() {
	int choix;
	printf("Entrer le titre de tache :");
	scanf("%s",pr[taille].titre);
	printf("Entrer la discription de tache : ");
	scanf("%s",pr[taille].discription);
	printf("Enter la date dechance de tache :\n ");
	printf("Entrer le jour :");
	scanf("%d",&pr[taille].date_decha.jour);
	printf("Entrer le mois de tache  :");
	scanf("%d",&pr[taille].date_decha.mois);
	printf(" Entrer annee de tache :");
	scanf("%d",&pr[taille].date_decha.annee);
	do{
		printf("Enter la priorite (1-high 2-low):");
		scanf("%d",&choix);
		switch(choix){
			case 1 : strcpy(pr[taille].priorite,"high");break;
			case 2 : strcpy(pr[taille].priorite,"low");break;
			default : printf("choix invalide !");
		}
	}while(choix!=1 && choix!=2);
	taille++;
}
void  Affichage(){
	int i;
	if(taille==0) {
		printf(" il n est pas des taches !");
		return;
	}
	for (i=0;i<taille;i++){
	printf("\nVotre titre  de tache est : %s\n",pr[i].titre);
	printf("Votre discription de tache est : %s\n",pr[i].discription);
	printf("Votre date dechance  de tache est : \n");
	printf("Le jour de tache  est  :%d\n",pr[i].date_decha.jour);
	printf("Le mois de tache est :%d\n",pr[i].date_decha.mois);
	printf("L annee  de tache est :%d\n",pr[i].date_decha.annee);
	printf("Votre priorite  de tache est :%s\n",pr[i].priorite);
	}
}
int main(){
	int p;
    do {
        printf("\n      <Menu>       \n");
        printf("1 - Ajouter \n");
        printf("2 - Affichage \n");
        printf("3 - Modifier \n");
        printf("4 - Supprimer \n");
        printf("5 - filtrer \n");
        printf("6 - Quitter\n");
        printf("Entrer votre choix : ");
        scanf("%d", &p);
        switch (p) {
            case 1: ajouter(); break;
	    case 2: Affichage(); break;
            case 3: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (p != 4);
return 0;
}

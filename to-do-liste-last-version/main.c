#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_taches 100

typedef struct {
    int jour;
    int mois;
    int annee;
}date;

typedef struct {
    char titre[50];
    char description[100];
    char statut[100];
    date deadline;
    int ID;
}to_do;

int main(){
   to_do taches[max_taches];
   int nbr=0;
   int i,j;
    int n, choix;
    int annee_ac,mois_ac,jour_ac;
   printf("TO DO LIST\n");
   do{
    printf("1 . ajouter une nouvelle tache\n");
    printf("2 . ajouter plusieurs taches\n");
    printf("3 . afficher la liste de toutes les taches\n");
    printf("4 . modifier une tache\n");
    printf("5 . supprimer une tache par identifiant\n");
    printf("6 . rechercher les taches\n");
    printf("7 . statistiques\n");
    printf("entrer votre choix");
    scanf("%d",&choix);
    switch(choix){
      int nbr_complet=0;
      int nbr_incomplet=0;
       int nbr_en_cours=0;
       int r;
case 1 :
    if(nbr<max_taches){
        printf("entrer le indentifiant unique\n");
        scanf("%d",&taches[nbr].ID);
        printf("entrer le titre\n");
        scanf("%s",taches[nbr].titre);
        printf("entrer la description\n");
        scanf("%s",taches[nbr].description);
        printf("entrer le statut : tapper 1 si le statut est complet \t taper 2 si le statut est incomplet\t taper 3 si le statut est en cours \n");
        scanf("%d",&r);
        if( r==1){
       strcpy(taches[nbr].statut,"complet");
            nbr_complet++;
        }
       else if (r==2){
        strcpy(taches[nbr].statut,"incomplet" );
        nbr_incomplet++;
        }
        else if (r==3){
     strcpy(taches[nbr].statut,"en cours" );
        nbr_en_cours++;
           }
        printf("entrer le deadline\n");
        int annee,mois,jour;
        printf("entrer l annee\n");
        scanf("%d",&annee);
       if(annee>=2024)
        taches[nbr].deadline.annee=annee;
        printf("entrer le mois\n");
        scanf("%d",&mois);
        if(mois<=12&&mois>=1)
            taches[nbr].deadline.mois=mois;
        printf("entrer le jour\n");
        scanf("%d",&jour);
        if(jour<=31&&jour>=1)
            taches[nbr].deadline.jour=jour;
    }nbr++;
    break;

case 2 :

    printf("entrer le nombre des taches a ajouter \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    if(nbr<max_taches){
        printf("entrer le indentifiant unique\n");
        scanf("%d",&taches[nbr].ID);
        printf("entrer le titre\n");
        scanf("%s",taches[nbr].titre);
        printf("entrer la description\n");
        scanf("%s",taches[nbr].description);
        printf("entrer le statut\n");
        scanf("%s",taches[nbr].statut);
        printf("entrer le deadline\n");
        int annee,mois,jour;
        printf("entrer l annee\n");
        scanf("%d",&annee);
       if(annee>=2024)
        taches[nbr].deadline.annee=annee;
        printf("entrer le mois\n");
        scanf("%d",&mois);
        if(mois<=12&&mois>=1)
            taches[nbr].deadline.mois=mois;
        printf("entrer le jour\n");
        scanf("%d",&jour);
        if(jour<=31&&jour>=1)
            taches[nbr].deadline.jour=jour;}
            nbr++;
    }

    break;
    int a;
case 3:
        printf (" taper 1 pour un affichage simple \n taper 2 pour afficher les tâches par ordre alphabétique croissant\n taper 3 pour afficher les taches trieé par deadline \n taper 4 pour affichage les taches dont le deadline est dons trois jour ou moins\n ");
        scanf("%d",&a);
        if (a==1){
    for(i=0;i<nbr;i++){
        printf("voici les taches demander sans trie\n");
        printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
    } }
    else if(a==2){
            for(i=0;i<n-1;i++)
            {
              for(j=0;j<nbr-i-1;j++){
                /*if(strcmp(taches[j].titre,taches[j+1].titre)<0){
                    char temp_titre[50];
                    strcpy(temp_titre,taches[j].titre);
                    strcpy(taches[j].titre,taches[j+1].titre);
                    strcpy(taches[j+1].titre,temp_titre);

                     char temp_description[50];
                    strcpy(temp_description,taches[j].description);
                    strcpy(taches[j].description,taches[j+1].description);
                    strcpy(taches[j+1].description,temp_description);

                    char temp_statut[50];
                    strcpy(temp_statut,taches[j].statut);
                    strcpy(taches[j].statut,taches[j+1].statut);
                    strcpy(taches[j+1].statut,temp_statut);
                    int temp_ID;
                    temp_ID=taches[j].ID;
                    taches[j].ID=taches[j+1].ID;
                    taches[j+1].ID=temp_ID;
                    int temp_annee;
                    temp_annee=taches[j].deadline.annee;
                    taches [j].deadline.annee=taches[j+1].deadline.annee;
                    taches[j+1].deadline.annee=temp_annee;
                    int temp_mois;
                    temp_mois=taches[j].deadline.mois;
                    taches [j].deadline.mois=taches[j+1].deadline.mois;
                    taches[j+1].deadline.mois=temp_mois;
                    int temp_jour;
                    temp_jour=taches[j].deadline.jour;
                    taches [j].deadline.jour=taches[j+1].deadline.jour;
                    taches[j+1].deadline.jour=temp_jour;*/
                    if(strcmp(taches[j].titre,taches[j+1].titre)<0){

                     to_do temp;
                     temp=taches[j+1];
                     taches[j+1]=taches[j];
                     taches[j]=temp;
                   }
              }
            }
            printf("voici les taches demander en ordre alphabetique croissant par titre\n");
            for(i=0;i<nbr;i++){
        printf("voici les taches demander sans trie\n");
        printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
    }
        }
        else if (a==3){
                 for(i=0;i<n-1;i++) {

              for(j=0;j<nbr-i-1;j++){
               if(taches[j].deadline.annee>taches[j+1].deadline.annee && taches[j].deadline.mois>taches[j+1].deadline.mois&& taches[j].deadline.jour>taches[j+1].deadline.jour ){
                    }
                     to_do temp;
                     temp=taches[j+1];
                     taches[j+1]=taches[j];
                     taches[j]=temp;
              }
                 }
                 for(i=0;i<nbr;i++){
        printf("voici les taches demander par tri en ordre croissant\n");
        printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
    }
        }
        else if(a==4){
                 printf("entrer l'annee\n");
                 scanf("%d",&annee_ac);
                 printf("enter le mois\n");
                 scanf("%d",&mois_ac);
                 printf("entrer le jour\n");
                 scanf("%d",&jour_ac);
               for(i=0;i<nbr;i++){
                if(taches[i].deadline.annee==annee_ac&&taches[i].deadline.mois==mois_ac,jour_ac<=taches[i].deadline.jour<=jour_ac+3){
                    printf("voici les taches dont le deadline est dons trois jour ou moins\\n");
        printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
               }
               }
        }
        else if (a==0)
            printf("votre choix invalid\n");

    break;
    int id_modifier;
    int nouvelle_annee,nouveau_mois,nouveau_jour;
case 4:

    printf("entrer la tache a modifier\n");
    printf("entrer id\n");
    scanf("%d",&id_modifier);
    for(i=0;i<nbr;i++)
    {
        if(id_modifier==taches[i].ID){
            printf("entrer la nouvelle description\n");
            scanf("%s",taches[i].description);
            printf("entrer le nouveau statut\n");
            scanf("%s",taches[i].statut);
            printf("entrer le nouveau deadline\n");
             printf("entrer la nouvelle  annee\n");
        scanf("%d",&nouvelle_annee);
       if(nouvelle_annee>=2024)
        taches[i].deadline.annee=nouvelle_annee;
        printf("entrer le mois\n");
        scanf("%d",&nouveau_mois);
        if(nouveau_mois<=12&&nouveau_mois>=1)
            taches[i].deadline.mois=nouveau_mois;
        printf("entrer le jour\n");
        scanf("%d",&nouveau_jour);
        if(nouveau_jour<=31&&nouveau_jour>=1)
            taches[i].deadline.jour=nouveau_jour;}

        }
     break;
     int id_supprimer;
case 5:
    printf("entrer le id de  tache a supprimer\n");
    scanf("%d",&id_supprimer);
    for(i=0;i<nbr;i++){
    if(id_supprimer==taches[i].ID){
    for(j=i;j<nbr-1;j++){
        strcpy(taches[j].titre,taches[j+1].titre);
        strcpy(taches[j].description,taches[j+1].description);
        strcpy(taches[j].statut,taches[j+1].statut);
        taches[j+1].ID=taches[j].ID;
        taches[j+1].deadline.annee=taches[j].deadline.annee;
         taches[j+1].deadline.mois=taches[j].deadline.mois;
          taches[j+1].deadline.jour=taches[j].deadline.jour;

    }nbr--;
    }
    }
printf("la tache est supprimer\n");break;
int id_rechercher;
int c;
char titre_rechercher[50];
case 6 :
    printf("taper 1 pour recherch par identifiant  ou 2 pour recherche par titre\n");
    scanf("%d",&c);
    if(c==1){
        printf("recherch par identifiant\n");
        printf("entrer id rechercher\n");
        scanf("%d",&id_rechercher);
        for(i=0;i<nbr;i++){
            if(id_rechercher==taches[i].ID){
                printf("voila la tache est trouver");
            printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
        }}
    }else if(c==2){
     printf("recherch par titre\n");
        printf("entrer titre rechercher\n");
        scanf("%s",titre_rechercher);
        for(i=0;i<nbr;i++){
            if(strcmp(titre_rechercher,taches[i].titre)==0){
                printf("voila la tache est trouver");
            printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
     }
     }
     }
     break;
     int k;
case 7 :
    printf("taper 1 pour afficher le nombre total des taches \t taper 2 pour Afficher le nombre de tâches complètes et incomplètes\t taper 3 pour Afficher le nombre de jours restants jusqu'au délai de chaque tâche \n");
    if(k==1)
    printf("nombre totale des taches %d\t",nbr);
    else if (k==2){
        printf("nombre totale des taches %d\t",nbr_complet);
    printf("nombre totale des taches %d\t",nbr_incomplet);
    }


default :
    printf("choix non valid");
   }
  } while(choix!=0);


    return 0;
}


#include "Categorie.h"
#include "Triathlete.h"
#include "Inscription.h"
#include "Triathlon.h"
#include "Type.h"
#include "Prelevement.h"
#include "Epreuve.h"
#include "Annee.h"
#include "Taux.h"
#include "Produit_Dopants.h"
#include "Temps.h"
#include "Courses.h"
#include "Natation.h"
#include "Cyclisme.h"

int main()
{

    // Cr�ation de deux Categories
    Categorie* J1 = new Categorie(1, "Junior", 15, 18);
    Categorie* S1 = new Categorie(2, "S�nior", 19, 30);


    // Cr�ation de 4 Triathletes
    Triathlete A(1, "TOTO", "TOTO", "M", "Annecy", "23/02/2009", J1);
    Triathlete B(2, "TITI", "TITI", "F", "Rumilly", "12/02/2008", J1);
    Triathlete C(3, "TATA", "TATA", "M", "Chamb�ry", "22/03/2000", S1);
    Triathlete D(4, "TUTU", "TUTU", "F", "Epagny", "30/06/2009", J1);


    // Cr�ation d'un type d'�preuveS
    Type M(0, "M", 1.5, 50.0, 10.0);

    // 1. Afficher La distance de L'�preuve de natation du type M
    

        // Cr�ation du Triathlon International d'Annecy
        Triathlon* Annecy = new Triathlon(1, "Triathlon International Annecy", "le Pasquier", "21/06/2025");

    // 2. Type du Triathlon d'Annecy
    

        // 3. Faire une Liste de 100 Inscriptions vides pour un Triathlon
        int nombreParticipants = 100;

        Inscription* lesInscriptions = new Inscription[nombreParticipants];
    

        // R�aliser deux Inscriptions
    Inscription J11(1, "22/11/2024", false, 0, &A, Annecy);
    Inscription J12(2, "22/11/2024", false, 0, &B, Annecy);

    // 4. Ins�rer les deux Inscriptions � la Liste d'Inscriptions lesInscriptions
    

        // 5. Ajouter la liste lesInscriptions au Triathlon d'Annecy
      

        // Ajouter les deux Inscriptions sur la partie Natation du Triathlon d'Annecy
    //Natation J11nage(9, 45.0, 5.0, Annecy, &J11);
    //Natation J12nage(9, 45.0, 5.0, Annecy, &J12);

    // AFFICHAGE DES DONNEES

    // Faire une Liste de 100 Inscriptions vides pour le Triathlon d'Annecy
    Inscription** lesInscriptionsAAnnecy;
    

        // 6. Afficher la temp�rature de l'eau pour la partie natation de l'Inscription J11 � Annecy
        

        // 7. � partir de l'Inscription de J11, r�cup�rer le Triathlon et les Inscriptions associ�es
        

        // 8. Afficher les deux Triathl�tes inscrits sur le Triathlon d'Annecy avec leur Cat�gorie
        

        // 9. Afficher les deux Inscriptions sur le Triathlon d'Annecy
        

        Triathlete** listJunior;

    // 10. Ajouter les Triathl�tes A, B, D � la liste listJunior
    

        // 11. Ajouter la liste listJunior de Triathl�tes juniors � la Cat�gorie J1
        

        Triathlete** list;

    // 12. Afficher les Triathl�tes juniors de la Cat�gorie J1 en v�rifiant la Cat�gorie avec une boucle while � partir de list
   

        return 0;
}

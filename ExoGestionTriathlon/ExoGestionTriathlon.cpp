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

    // Création de deux Categories
    Categorie* J1 = new Categorie(1, "Junior", 15, 18);
    Categorie* S1 = new Categorie(2, "Sénior", 19, 30);


    // Création de 4 Triathletes
    Triathlete A(1, "TOTO", "TOTO", "M", "Annecy", "23/02/2009", J1);
    Triathlete B(2, "TITI", "TITI", "F", "Rumilly", "12/02/2008", J1);
    Triathlete C(3, "TATA", "TATA", "M", "Chambéry", "22/03/2000", S1);
    Triathlete D(4, "TUTU", "TUTU", "F", "Epagny", "30/06/2009", J1);


    // Création d'un type d'épreuveS
    Type M(0, "M", 1.5, 50.0, 10.0);

    // 1. Afficher La distance de L'épreuve de natation du type M
    

        // Création du Triathlon International d'Annecy
        Triathlon* Annecy = new Triathlon(1, "Triathlon International Annecy", "le Pasquier", "21/06/2025");

    // 2. Type du Triathlon d'Annecy
    

        // 3. Faire une Liste de 100 Inscriptions vides pour un Triathlon
        int nombreParticipants = 100;

        Inscription* lesInscriptions = new Inscription[nombreParticipants];
    

        // Réaliser deux Inscriptions
    Inscription J11(1, "22/11/2024", false, 0, &A, Annecy);
    Inscription J12(2, "22/11/2024", false, 0, &B, Annecy);

    // 4. Insérer les deux Inscriptions à la Liste d'Inscriptions lesInscriptions
    

        // 5. Ajouter la liste lesInscriptions au Triathlon d'Annecy
      

        // Ajouter les deux Inscriptions sur la partie Natation du Triathlon d'Annecy
    //Natation J11nage(9, 45.0, 5.0, Annecy, &J11);
    //Natation J12nage(9, 45.0, 5.0, Annecy, &J12);

    // AFFICHAGE DES DONNEES

    // Faire une Liste de 100 Inscriptions vides pour le Triathlon d'Annecy
    Inscription** lesInscriptionsAAnnecy;
    

        // 6. Afficher la température de l'eau pour la partie natation de l'Inscription J11 à Annecy
        

        // 7. À partir de l'Inscription de J11, récupérer le Triathlon et les Inscriptions associées
        

        // 8. Afficher les deux Triathlètes inscrits sur le Triathlon d'Annecy avec leur Catégorie
        

        // 9. Afficher les deux Inscriptions sur le Triathlon d'Annecy
        

        Triathlete** listJunior;

    // 10. Ajouter les Triathlètes A, B, D à la liste listJunior
    

        // 11. Ajouter la liste listJunior de Triathlètes juniors à la Catégorie J1
        

        Triathlete** list;

    // 12. Afficher les Triathlètes juniors de la Catégorie J1 en vérifiant la Catégorie avec une boucle while à partir de list
   

        return 0;
}

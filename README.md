# le-dev
<details>
  <summary>ScreenShot Qt project c++</summary> 
  </details>
  <img src="./presentation/capture/1.png" name="image-name">
  <img src="./presentation/capture/2.png" name="image-name">
  <img src="./presentation/capture/3.png" name="image-name">

# Algorithme et structure de donnee 
## Languages
 * c++ 
 * Qt (c++) pour l'interface grafique 
## L'algorithme 
 * en java 
### Specification
inserer et verifier si les elements de ce tableau sont tous consequtif

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://pabiosoft.com)
Tableau consecutif
Position | #1 | #2 | #3 | #4 | #5 | -- | -- | -- | -- | -- | L-1
--- | --- | --- | --- |--- |--- |--- |--- |--- |--- |--- |---
element | 1 | 2 | 3 | 4 | 5 | 6 | -- |-- | val-1 | val | t(L-1)

Tableau non consecutif
Position | #1 | #2 | #3 | #4 | #5 | -- | -- | -- | -- | -- | L-1
--- | --- | --- | --- |--- |--- |--- |--- |--- |--- |--- |---
element | 1 | 1 | 3 | 4 | 5 | 6 | -- |-- | val-1 | val | t(L-1)

- ✨Magic ✨


## Alors Ecrivons  cet algorithme en Java 
```java
class Tableau{
    public int[] tab;
    public static int N = 100; // la taille maximal
    public int l; // la position du dernier element 
    
    public Tableau(){
        tab = new int[N];
        this.l = 0;
    }
    
    /**
    * Permet d'ajouter des element au tableau
    */
   public void  insertion(){
        int i = 0;
        int elt = 0;
        Scanner sc = new Scanner(System.in);
        do{
           System.out.println( " veuillez saisir une valeur et/ou 0 pour terminer");
            elt = sc.nextInt();
            tab[l] = elt;
            this.l = this.l + 1;
            i++;
        }while(elt != 0);
    }
    
   public void affichage(){
        int i = 0;
        System.out.println(" les valeurs saisie sont : \n");
        while(i != l-1){
            System.out.print("["+tab[i]+"]");
            i = i + 1;
        }
        System.out.println();
    }
    
  /*
  * Principe : on positionne LE i a la premiere case et j a la case suivante
  * On verifie a chaque fois si (tab[i]+  1) est egale a tab[j]. en incrementant  les deux  compteurs
  */
    public void estConsecutif(){
        int i = 0;
        int j = 0;
        bool rep = false;
        
        if(tab[l] == 0){
            System.out.println("la liste est vide ");
        }else if(l ==2){
            System.out.println("la liste ne comporte qu'un seul element ");
        }else{
            while(i != l-1){
                j = i + 1;
                while(j != l-1    ){
                    
                        if( (tab[j] - 1) != tab[i]){
                            rep = false;
                        }else{
                            rep = true;
                        }
                    j++;
                }
              i = i + 1;
            }
           
            if( rep == false){
               System.out.println("les elements ne sont pas tous consecutif ");
            }else{
              System.out.println("les elements sont tous consecutif ");
            }
    }
}
     
// le Fichier Test

public class Main{
    Public static void main(String[] args){
        Tableau t = new Tableau();
        t.insertion();
        t.affichage();
        t.estConsecutif();
    }
}
```
## Outils
Mac OS 

| IDE | README |
| ------ | ------ |
| xCode | [Pour le project c++] |
| C lION | [ egaillement c++ ] |
| Qt Creator | [ pour le projet avec interface grafique] |

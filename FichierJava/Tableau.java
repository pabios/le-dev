import java.util.Scanner;


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
        boolean  rep = false;
      System.out.println(l);
        if(l == 0){
            System.out.println("la liste est vide ");
        }else if(l ==2){
            System.out.println("la liste ne comporte qu'un seul element ");
        }else{
            i = 0;
            while(i != l-1 &  (tab[i] + 1) == (tab[i+1] )  ){
                j = i + 1;
                while(j != l-1){
                        if( (tab[i] + 1) != (tab[j])  ){
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

public static void main(String[] args) {
        Tableau t = new Tableau();
        t.insertion();
        t.affichage();
        t.estConsecutif();

    }
}
     
 
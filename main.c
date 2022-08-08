#include <stdio.h>
#include <stdlib.h>

int main() {
float T[13],A[15],tab[28];
int i,j,temps,compteur;
float max1,min1,max2,min2;

//CLASSE NUM 1
 	printf("Les moyennes des eleves du classe 1 \n");
 	        for(i=0;i<13;i++){
 	        do{
 	         printf("Donnez la moyenne de letudiant num %d :\n",i+1);
 	         scanf("%f",&T[i]);
 	     }while(T[i]<0 || T[i] >20);
 	     }
 	     max1=T[0];
 	     min1=T[0];
 	     for(i=1;i<13;i++){
 	          if(max1 < T[i]){
 	          max1 =T[i];
 	      }
 	          if(min1>T[i]){
 	          min1= T[i];
          }
    }
 	          printf("La note superieure est: %f \n et la note minimale est : %f \n",max1,min1);
         for(i=0;i<13;i++){
            if(T[i] >= 10){
              printf("Affichez la note superieur ou egale à dix % f \n",T[i] );
            }
         }
//CLASSE NUM 2
 	printf("Les moyennes es eleves du classe 2 \n");
           for(i=0;i<15;i++){
           do{
           printf("Entrez la moyenne de letudiant num %d :\n",i+1);
           scanf("%f",&A[i]);
       }while(A[i]<0 || A[i] >20);
       }
       max2=A[0];
       min2=A[0];
       for(i=1;i<15;i++){
       	   if(max2 < A[i]){
       	   max2 = A[i];
       }
           if(min2>A[i]){
           min2=A[i];
    }
}
           printf("La note superieure est : %f \n et la note minimale est : %f \n",max2,min2);
            for(i=0;i<15;i++){
            if(A[i] >= 10){
              printf("Affichez la note superieur ou egale à dix % f \n", A[i] );
            }
}
// fisionner le tableau T et A dans tab
        for(i=0;i<13;i++){
        	tab[i]=T[i];
		}
		compteur=13;
		for(i=0;i<15;i++){
			tab[compteur]=A[i];
			compteur=compteur+1;
			}
//trie
        for(i=0;i<28;i++){
        	for(j=i+1;j<28;j++){
        		if(tab[i] > tab[j]){
        			temps = tab[i];
        			tab[i] = tab[j];
        			tab[j] = temps;
				}
			}
		}
//afficher le tableau trier tab
       printf("\n voila le tableau trier en ordre croissante :\n");
	   for(i=0;i<28;i++){
	   	printf("%f",tab[i]);
	   }
}

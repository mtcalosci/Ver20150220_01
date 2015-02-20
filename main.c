#include <stdio.h>
#include <stdlib.h>

int const N = 5;
int main(int argc, char** argv) {
 int i;
 int conta = 0;
 int vet[N];
 
 printf("Inserisci l'età di %d persone\n",N);
    
    for(i=0; i<N; i++)
    {
        printf("Inserisci l'età della %da persona:", i+1);
        scanf("%d", &(vet[i]));
        
        if(vet[i] >= 18)
        {
            conta++;
        }
    }
    
 printf("I maggiorenni sono : %d", conta);
    
    
    

    return (EXIT_SUCCESS);
}


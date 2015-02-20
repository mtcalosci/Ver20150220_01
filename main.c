#include <stdio.h>
#include <stdlib.h>

int const N = 5;
int main(int argc, char** argv) {
 int i;
 int conta = 0;
 int vet[N];
    
    for(i=0; i<N; i++)
    {
        printf("Inserisci l'elemento numero %d : \n", i);
        scanf("%d", &(vet[i]));
        
        if(vet[i] >= 18)
        {
            conta++;
        }
    }
    
 printf("I maggiorenni sono : %d", conta);
    
    
    

    return (EXIT_SUCCESS);
}


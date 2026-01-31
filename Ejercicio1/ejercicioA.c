//Para correr usar estos comandos 
//gcc -o ejercicio1 ejercicio1.c
//./ejercicio1

#include <stdio.h>  
#include <unistd.h> 

int main() {

    printf("Hello World!\n"); 
    printf("%d\n", (int)getpid()); 
    
    return (0); 
}
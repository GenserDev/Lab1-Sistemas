//Para compilar usar estos comandos 
//gcc -o ejercicio2 ejercicio2.c
//./ejercicio2

#include <stdio.h>
#include <unistd.h>

int main() {
    int f;
    f = fork(); 

    if (f == 0) {
        execl("./hola", "hola", (char *)NULL); 
    } else {
        printf("%d\n", (int)getpid()); 
        
        execl("./hola", "hola", (char *)NULL);
    }

    return 0;
}
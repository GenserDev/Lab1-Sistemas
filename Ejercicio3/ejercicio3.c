#include <stdio.h>
#include <sys/syscall.h>

int main() {
    long resultado = syscall(345, 15);
    printf("Resultado de mi nueva syscall: %ld\n", resultado);
    return 0;
}
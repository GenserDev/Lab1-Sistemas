#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Uso: %s <origen> <destino>\n", argv[0]);
        return 1;
    }

    int origen, destino;
    char buffer[1024];
    ssize_t bytesRead;

    origen = open(argv[1], O_RDONLY);
    if (origen == -1) { perror("Error al abrir origen"); return 1; }

    destino = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (destino == -1) { perror("Error al abrir destino"); close(origen); return 1; }

    while ((bytesRead = read(origen, buffer, sizeof(buffer))) > 0) {
        write(destino, buffer, bytesRead);
    }

    close(origen);
    close(destino);

    printf("Copia completada con éxito.\n");
    return 0;
}
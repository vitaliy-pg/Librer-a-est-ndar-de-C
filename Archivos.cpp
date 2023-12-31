//programa para abrir un archivo de texto

#include <iostream>
#include <cstdio>

int main() {

    const char* nombreArchivo = "mi_archivo.txt";
    FILE* archivo = fopen(nombreArchivo, "r");

    if (archivo == nullptr) {
        std::cerr << "El archivo no existe. Creando y escribiendo en el archivo." << std::endl;

        // Abrir el archivo para escritura
        FILE* archivoEscritura = fopen(nombreArchivo, "w");

        if (archivoEscritura == nullptr) {
            std::cerr << "Error: No se pudo abrir el archivo para escritura." << std::endl;
            return 1;
        }


        fprintf(archivoEscritura, "Hola, esto es un ejemplo de escritura en archivo.\n");

        fclose(archivoEscritura);

        archivo = fopen(nombreArchivo, "r");

        if (archivo == nullptr) {
            std::cerr << "Error: No se pudo abrir el archivo para lectura." << std::endl;
            return 1;
        }
    }

    char buffer[100];
    fscanf(archivo, "%99[^\n]", buffer);

    std::cout << "Contenido leido del archivo: " << buffer << std::endl;

    fclose(archivo);

    return 0;
}

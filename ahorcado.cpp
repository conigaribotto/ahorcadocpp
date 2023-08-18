#include <iostream>
#include <string.h>
using namespace std;

main()
{
    char palabra[] = "elefante";
    char palabraAux[11] = "________";
    char letra;
    int vidas = 5;
    cout << "Bienvenido al juego del ahorcado" << endl;

    do
    {
        cout << "Ingrese una letra: ";
        cin >> letra;
        int longitudPalabra = strlen(palabra);
        int i = 0;
        bool acerto = false;
        while (i < longitudPalabra)
        {
            if (palabra[i] == letra)
            {
                palabraAux[i] = letra;
                acerto = true;
            }
            i++;
        }
        if (!acerto)
        {
            cout << "la letra no es parte de la palabra" << endl;
            vidas--;
        }
        cout << palabraAux << endl;

    } while ((strcmp(palabra, palabraAux) != 0) && vidas >= 1);

    if ((strcmp(palabra, palabraAux) == 0))
    {
        cout << "Ganaste" << endl;
        cout << "La palabra era: " << palabra << endl;
    }

    return 0;
}
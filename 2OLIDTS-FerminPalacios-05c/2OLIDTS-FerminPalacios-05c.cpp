// 2OLIDTS-FerminPalacios-05c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <vector>//arreglo dinamico - lbreria para el uso de vectores
using namespace std;

int main()
{
    //declaramos el vector de cadenas de un tecto con nombre de aves
    vector<string> aves = { "loros", "palomas", "Tucan" }; //es estatica
    cout << "los valores iniciales del vector son los siguientes:\n";
    //iteracion sobre los valores del vector para imprimirlos
    for (int i = 0; i < aves.size(); i++) 
    {
        cout << aves[i] << endl;
    }
    aves.push_back("perico");
    aves.push_back("aguila del america");
    aves.push_back("cacatua");

    cout << "los valores iniciales del vector son los siguientes:\n";
    for (int i = 0; i < aves.size(); i++)
    {
        cout << aves[i] << endl;
    }
    cout << "\n";
    return 0;
}


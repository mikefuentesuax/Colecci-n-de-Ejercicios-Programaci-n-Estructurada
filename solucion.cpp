#include <iostream>
#include <cstring>

using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
int main(){
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 15.5;

    Estudiante *estudiante2 = new Estudiante;
    strcpy(estudiante2->nombre, "Pedro");
    estudiante2->edad = 21;
    estudiante2->promedio = 16.5;
    
    Estudiante* punteroEst = &estudiante1;
    cout << "Nombre: " << punteroEst->nombre << ", Edad: " << punteroEst->edad << ", Promedio: " << punteroEst->promedio << endl;



    return 0;


}


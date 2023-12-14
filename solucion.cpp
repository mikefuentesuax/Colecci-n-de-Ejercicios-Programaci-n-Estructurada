#include <iostream>
#include <cstring>

using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
Estudiante copiarEstudiante(Estudiante est){
        Estudiante nuevoEst;
        strcpy(nuevoEst.nombre, est.nombre);
        nuevoEst.edad = est.edad;
        nuevoEst.promedio = est.promedio;
        return nuevoEst;
        }
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

    union Dato {
        int i;
        float f;
        char str[20];
    };

    Dato dato;

    dato.i = 10;    
    cout << "dato.i: " << dato.i << endl;

    dato.f = 220.5;
    cout << "dato.f: " << dato.f << endl;

    strcpy(dato.str, "C++");
    cout << "dato.str: " << dato.str << endl;
    
    
            Estudiante estudiante3;
        strcpy(estudiante3.nombre, "Maria");
        estudiante3.edad = 22;
        estudiante3.promedio = 17.5;

        auto imprimirEstudiante = [](Estudiante est){
            cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << endl;
        };

        imprimirEstudiante(estudiante1);

        auto modificarEstudiante = [](Estudiante &est){
            est.edad = 25;
        };
        modificarEstudiante(estudiante1);

        auto imprimirEstudiante2 = [](Estudiante est){
            cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << endl;
        };
        imprimirEstudiante2(estudiante1);

        delete estudiante2;



    return 0;


}


#include <iostream>
using namespace std;

float areaCuadrado(float lado){
    float area=0;
    area=lado*lado;
    return area;
}

float volumenCilindro(float radio, float altura){
    float volumen=0;
    const double Pi=3.1416;
    volumen=Pi*radio*radio*altura;
    return volumen;
}

float volumenEsfera(float radio){
    float volumen=0;
    const double Pi=3.1416;
    volumen=((4/3)*Pi*radio*radio*radio);
    return volumen;
}


int main(){
    int opcion;
    float l=0,r=0,h=0,resultado=0;

    cout<<"--------Areas de figuras geometricas--------"<<endl;
    cout<<"                   Figuras                  "<<endl;
    cout<<"                 1.Cuadrado                 "<<endl;
    cout<<"------Volumenes de figuras geometricas------"<<endl;
    cout<<"                   Figuras                  "<<endl;
    cout<<"                 2.Cilindro                 "<<endl;
    cout<<"                 3.Esfera                   "<<endl;
    cout<<"                 4.Salir                    "<<endl;

    cout<<"Ingresas figura a utilizar: "<<endl;
    cin>>opcion;

     switch (opcion ) {
        case 1:
            cout<<"---Area de un Cuadrado---"<<endl;
            cout<<"Formula: l*l "<<endl;
            cout<<"Ingrese el valor de l"<<endl;
            cin>>l;
            resultado=areaCuadrado(l);
            cout<<"El area del cuadrado es igual a: "<<resultado<<"."<<endl;
        break;

        case 2:
            cout<<"---Volumen de un Cilindro---"<<endl;
            cout<<"Formula: pi*r*r*h "<<endl;
            cout<<"Ingrese el valor de r"<<endl;
            cin>>r;
            cout<<"Ingrese el valor de h"<<endl;
            cin>>h;
            resultado=volumenCilindro(r,h);
            cout<<"El volumen de un cilindro es igual a: "<<resultado<<"."<<endl;
            break;
        case 3:
            cout<<"---Volumen de una Esfera---"<<endl;
            cout<<"Formula: (4/3)*PI*r*r*r "<<endl;
            cout<<"Ingrese el valor de r"<<endl;
            cin>>r;
            resultado=volumenEsfera(r);
            cout<<"El volumen de una esfera es igual a: "<<resultado<<"."<<endl;
            break;
        case 4:
            cout<<"Salio del programa."<<endl;
            break;
        default:
            cout<<"Opcion invalida."<<endl;
    }

    return 0;
}
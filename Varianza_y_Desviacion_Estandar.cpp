/*Realizar un programa que solicite al usuario el numero de posiciones de un vector y 
este sea llenado con números aleatorios y  que calcule la varianza y la desviación estándar de los elementos*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
// Prototipos de la funcion
void pedirDatos();
float varianza(int vec[],int);
float desviacion(int vec[],int);


int vec[100],tam;
 // variables globales


int main()
{

pedirDatos();
cout<<"La varianza es de "<<varianza(vec,tam)<<endl;
cout<<"La desviacion estandar es de "<<desviacion(vec,tam)<<endl;
getch();
return 0;
}

// Definición de la función
void pedirDatos()
{
cout<<"digite el numero de posiciones: ";
cin>>tam;
// llenar arreglo
for(int i=0;i<tam;i++)
{
vec[i]=1+rand()%(100); // aleatorio
cout<<vec[i]<<" "<<endl;
}
}
//varianza

float varianza(int vec[],int tam){
	float media;
	float varianza1=0;
	float suma;
	float varianza;
	for(int i=0; i<tam; i++){
		suma+=vec[i];
		}
media=suma/tam;
	for(int i=0; i<tam; i++){
		varianza1=varianza1 + pow((vec[i]-media),2);
	}
varianza=varianza1/tam;
return varianza;
}
//Desviacion estandar 
float desviacion(int vec[],int tam){
	float media;
	float varianza1=0;
	float suma;
	float varianza;
	float desviacion;
	for(int i=0; i<tam; i++){
		suma+=vec[i];
		}
media=suma/tam;
	for(int i=0; i<tam; i++){
		varianza1=varianza1 + pow((vec[i]-media),2);
	}
varianza=varianza1/tam;
desviacion=sqrt(varianza);
return desviacion;
}

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	
	int multi, operacion, opcion, valor, numfac = 1;
	int ene;
	int impares;
	float pares;
	int suma_impares;
	int suma_pares;
	int x;
	suma_impares = 0;
	suma_pares = 0;
	pares = 0;
	impares = 0;
	int dia;
	float cont,contra;
    cont = 0;

    cout<<"Introdusca lo que quiere hacer:"<<endl<<endl;
    cout<<"1. Calcular el factorial"<<endl;
    cout<<"2. Tabla de multiplicar"<<endl;
    cout<<"3. Calcular cuantos numeros son pares"<<endl;
    cout<<"4. Funcion de la semana (saber si es laboral)"<<endl;
    cout<<"5. Contraseña del sistema bancario"<<endl;
    cin>>opcion;
    
    switch(opcion){
    	case 1:
    		cout<<"Calcular el factorial"<<endl;
    		
    			cout<<"Introdusca su numero: "; cin>>valor;
	
	for(int i=1;i<=valor;i++){
		numfac = numfac * i;
	}
	
	cout<<"El factorial de su numero es: "<<numfac<<endl;
    		
			break;
			
			
			}
	
	  
    

		
    
	
	
	
	
	
	
	

	
	return 0;
}

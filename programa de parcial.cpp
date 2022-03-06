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
			
			case 2:
	
    		cout<<"Tabla de multiplicar"<<endl;
    	do{
    		cout<<"Ingrese un numero: "; cin>>multi;
		}while((multi<1) || (multi>10));
	
	     for(int i=1;i<=10;i++){
	     	cout<<multi<<" * "<<i<<" = "<<multi<<endl;
		 } 

    			
			break;
			
			case 3:
	
          cout<<"Calcular cuantos numero son pares: "<<endl<<endl;
          
          	for (x=1;x<=10;x++) {
		cout << "Ingresa numero" << endl;
		cin >> ene;
		if (ene%2==0) {
			suma_pares = suma_pares+ene;
			pares = pares+1;
		} else {
			suma_impares = suma_impares+ene;
			impares = impares+1;
		}
	}
	cout << "La suma de los numeros pares es: " << suma_pares << endl;
	cout << "Numeros pares: " << pares << endl;
	cout << "El promedio de numeros impares es: " << suma_impares/impares << endl;
    			
			break;


		}
	
	  
    

		
    
	
	
	
	
	
	
	

	
	return 0;
}

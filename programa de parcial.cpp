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
			
			case 4:
	
    		cout<<"Funcion de la semana (saber si es laboral)"<<endl<<endl;
    		
    			cout << "Ingresa un dia de la semana: "<<endl<< endl;
	cout<<"1. Lunes"<<endl;
	cout<<"2. Martes"<<endl;
	cout<<"3. Miercoles"<<endl;
	cout<<"4. Jueves"<<endl;
	cout<<"5. Viernes"<<endl;
	cout<<"6. Sabado"<<endl;
	cout<<"7. Domingo"<<endl;
	cin >> dia;
	
	switch (dia) {
	case 1: 
		cout << "Es un dia laboral" << endl;
		break;
	case 2: 
		cout << "Es un dia laboral" << endl;
		break;
	case 3:
		cout << "Es un dia laboral" << endl;
		break;
	case 4:
		cout << "Es un dia laboral" << endl;
		break;
	case 5:
		cout << "Es un dia laboral" << endl;
		break;
	case 6:
		cout << "No es un dia laboral" << endl;
		break;
	case 7: 
		cout << "No es un dia laboral" << endl;
		break;
	default:
		cout << "Ingrese correctamente el dia" << endl;
	}
    
    			
			break;


					case 5:
	
    		cout<<"Contraseña del sistema bancario"<<endl;
    		
          
       do{
     	cout<<""<<endl;
    	cout<<"Ingrese la contraseña : "<<endl;
	    cout<<""<<endl;
     	cin>>contra;
     	if (contra==123456){
		cout<<"Bancario virtual habierta "<<endl;
    	}else{
		cout<<"Usted no sabe su contraseña bancaria"<< cont+1 <<endl;
		cont = cont+1;
     	}
       }while (!(cont==3 || cont<1));
    			
			break;



		}
	
	  
    

		
    
	
	
	
	
	
	
	

	
	return 0;
}

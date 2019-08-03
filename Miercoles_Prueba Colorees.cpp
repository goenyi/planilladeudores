#include<iostream>
#include <windows.h>
#include<stdio.h>

using namespace std;

//funcion para posición en pantalla
void pre(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
     SetConsoleCursorPosition(hcon,dwPos);  
 }

int main() {
    // Definición de variables
    int codigo[3];
    int i;
    string nombre[3]
    float sueldoB[3], porcecomi[3], vent[3], HEOrdi[3], VEordi[3], HEdoble[3], comiventas[3], VHoraEDoble[3], saldeven[3], igss[3], descuen[3], totliqui[3];
    string mopcion1;
    
    system ("color 02");
    
   // for(i=0; i<3; i++){
    
	do
	{
	 
	    system("cls");
	    pre(55,4);  printf("PLANILLA");
	    pre(22,8);  printf("INGRESO DE DATOS");
	    pre(15,11); printf("Codigo......................");
	    pre(15,12); printf("Nombre......................");
	    pre(15,13); printf("Sueldo Base.................");
	    pre(15,14); printf("Porcentaje Comision.........");
	    pre(15,15); printf("Ventas......................");
	    pre(15,16); printf("Horas Extras Ordinarias.....");
	    pre(15,18); printf("Horas Extras Dobles.........");
	    pre(15,19); printf("Otros Descuentos............");
	    pre(15,20); printf("");
	    
	    
	    pre(45,11); cin>>codigo[i];
	    pre(45,12); cin>>nombre[i];    
	    pre(45,13); cin>>sueldoB[i];
	    pre(45,14); cin>>porcecomi[i];
	    pre(45,15); cin>>vent[i];
	    pre(45,16); cin>>HEOrdi[i];
		pre(45,18); cin>>HEdoble[i];
		pre(45,19); cin>>descuen[i];
	
						 
		//Calculos de valores
		VEordi[i]      = ((sueldoB[i] / 30) / 8) * 1.50 * HEOrdi[i] ;
		VHoraEDoble[i] = ((sueldoB[i] / 30) / 8) * 2 *  HEdoble[i];
		comiventas[i]  = (vent[i] * porcecomi[i]) / 100;
		saldeven[i]    = (sueldoB[i] + porcecomi[i] +  HEOrdi[i] + VHoraEDoble[i]);
		igss[i]        = (saldeven[i] * 4.83) / 100;
		totliqui[i]    = (saldeven[i] - igss[i] - descuen[i]);
				
				
		pre(60,13); printf("Valor Horas Extras Ordinarias............."); 
		cout<<VEordi[i];    	
		pre(60,14); printf("Valor de tiempo Doble....................."); 
		cout<<VHoraEDoble[i];    	
		pre(60,15); printf("Valor de comision de ventas..............."); 
		cout<<comiventas[i]; 
		pre(60,16); printf("Valor de lo devengado....................."); 
		cout<<saldeven[i];   			
	    pre(60,17); printf("IGSS......................................"); 
		cout<<igss[i];   
		pre(60,18); printf("Valor Liquido.............................");  
		cout<<totliqui[i];  	
		pre(60,23); 
		i=i+1;
		pre(50,25); cout<<("Desea continuar......... s/n");
		pre(80,25); cin>>mopcion1;
	}while (mopcion1!="n");	        
}


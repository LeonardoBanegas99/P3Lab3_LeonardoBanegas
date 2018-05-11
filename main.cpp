#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <sstream>

using namespace std;

int main(){
        int opcion;
	do{
       	   cout << "MENU" << endl;
	   cout << "1. Mentes Maestras" << endl;
	   cout << "2. Factorizacion" << endl;
	   cout << "3. Recursiva" << endl;
	   cout << "4. Salir" << endl;
	   cin >> opcion;
	   switch(opcion){
		case 1:{
			int cont=1;
			int mismos = 0;
			string str;
			cout << "ho"<<endl;
			stringstream ss;
     			int random = 0;
			string num;
                        srand(time(NULL));
                        random = (rand()%99999) +10000;
			ss << random;
			str = ss.str();
			cout << str << endl;		
			while(cont < 6){
			mismos = 0;
			cout << "Ingrese numero de 5 digitos: " << endl;
			cin >> num;
			cout << num.length() << endl;
			while(num.length() < 5){
				for(int m =0; m < 5;m++){
					
				}
				cout << "Ingrese numero de 5 digitos: " << endl;
              			cin >> num;
                                cout << num.length() << endl;

			}
			

			for(int i =0;i < 5;i++){
				for(int n =0;n < 5;n++){
					if(num.at(n) == str.at(i)){
					       if(i == n){
							cout << "Su numero en la posicion " << n+1 << " coincide en la misma posicion" <<endl;
							mismos++;
							if(mismos == 5){
								cout << "Gano!!!" << endl;
						        	cont = 6;
								break;
							}
						}else{
							cout << "El numero en la posicion " <<  n+1 << " existe pero no en la misma posicion" << endl;
						}
					}	
				}
			}
 			cont++;			
			}
			if(cont == 6){
				cout << "Ya no tiene mas oportunidades" << endl;
				cont = 1;
			}
			break;
                }
		case 2:{
					
			break;
		}
		case 3:{

			break;
		}
		case 4:{
			cout <<"Tenga un Buen Dia" << endl;
			break;
		}
		default:{
			
			break;

		}
	   }

	}while(opcion != 4);
	}

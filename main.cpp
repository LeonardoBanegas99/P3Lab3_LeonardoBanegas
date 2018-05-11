#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <math.h>

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
			string poli;	
			cout  << "Ingrese un polinomio cuadratico de esta forma ax^2+bx+c" << endl;
			cin >> poli;
			string a,b,c;
			a = poli.at(0);
			b = poli.at(5);
			c = poli.at(8);
			int a1,b1,c1;
			istringstream iss1 (a);
			iss1 >> a1;
			istringstream iss2 (b);
			iss2 >> b1;
			istringstream iss3 (c);
			iss3 >> c1;
			cout << a1 << b1 << c1 << endl;
			int aelevado = pow(b1,2);
			int resta = -1*(4*a1*c1);
			int total = aelevado + resta;
			if(total < 0){
				cout << "No hay factores reales" << endl;
			}else{
				int raiz = sqrt(total);
				int arribasuma = (-1*b1)+raiz;
				int arribaresta = (-1*b1)-raiz;
				int resp1 = (arribasuma/(2*a1));
				int resp2 = (arribaresta/(2*a1));
				cout << "Antes: " << poli << endl;
				if(resp1 < 0){
      					cout << "Despues: " << "("<<poli.at(1)<<"+" << (resp1*-1) << ")";
					if(resp2 < 0){
						cout << "(" << poli.at(1)<<"+" << resp2*-1 << ")" << endl;

					}else{
						cout << "(" << poli.at(1) << (resp2*-1) << ")" << endl;

					}
				}else{
					cout << "Despues: " << "("<<poli.at(1) << resp1*-1 << "2)";
					if(resp2 < 0){
						cout << "(" << poli.at(1)<<"+" << resp2*-1 << ")3" << endl;

					}else{
						cout << "(" << poli.at(1) << resp2*-1 << ")4" << endl;

				}
			}
			}			
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

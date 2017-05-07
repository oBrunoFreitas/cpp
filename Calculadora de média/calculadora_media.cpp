#include<iostream>
#include<stdlib.h>

using namespace std;
int main () {
	
	float pt,mt,dt,ma,mp; 
	
	cout << "Digite o valor da prova de Portugues ";
	cin >> pt;
	
	cout << "Digite o valor da prova de Matematica ";
	cin >> mt;
	
	cout << "Digite o valor da prova de Direito ";
	cin >> dt;
	
	ma= (pt+mt+dt)/3;
	mp= (2*pt+4*mt+3*dt)/9;
	
	cout << "O valor da media aritimetica e  " << ma << "\n";
	cout << "O valor da media ponderada e " << mp <<"\n";

	system("pause");
	return(0);
	
		
}


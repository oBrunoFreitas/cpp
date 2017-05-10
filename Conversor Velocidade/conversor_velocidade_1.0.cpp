#include<iostream>
#include<stdlib.h>

using namespace std;
main()
{
int ms, kmh;


	cout << "Digite a velocidade em M/S para ser transformada em KM/H \n";
	cin >> ms;
	kmh=ms*3.6;
	cout << "A velocidade em KMH e " << kmh << "\n" ;
	system("pause");
	return(0);
	
	
}

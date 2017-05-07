#include <iostream>
#include<stdlib.h>

using namespace std;
main()
{
int c, f;


	cout << "Digite a temperatura em Fahrenheit para ser transformada em Celsius \n";
	cin>> f;
	c=(f-32)/1.8;
	cout << "A temperatura em Celsius e " << c << "\n" ;
	system("pause");
	return(0);
	
	
}

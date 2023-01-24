#include <iostream>
using namespace std;
int main()
{
	float vector1[10], suma = 0, media = 0, med;
    int opcion, i, numeros[10], mayor;
    
	cout<< "Seleccione la opcion que desee realizar" << endl;
	cout << "1) Ordenar numeros, 2) Calcular y ordenar media, 3) Calcular el numero mayor" << endl;
	cin >> opcion;
	
	switch (opcion)
	{
		case 1: cout << "Introduce 10 numeros\n";
    	for (i = 1; i < 11; i++)
    	{
        	cout << i << " valor; \n";
        	cin >> vector1[i];
    	}
    
    cout << "Los 10 numeros fueron: \n";
    for (i = 10; i > 0; i--)
    {
        cout << vector1[i] << endl;
    }
    
    return 0;
		case 2: for (i = 0; i < 10; i++)
    	{
        	cout << "Introduce el numero " << i << endl;
        	cin >> numeros[i];
    	}
    
    	for (i = 0; i < 10; i++)
    	{
        	suma = suma + numeros[i];
    	}
    	media = suma/10;
    	cout << "El promedio es: " << media << endl;
        
    	for (i = 0; i < 10; i++)
    	{
        	if (numeros[i] > media)
        	{
    			cout << "Los numeros mayores que la media son: " << numeros[i] << endl;
        	}
    	}
    
    		return 0;
    		case 3:  for (i = 0; i < 10; i++)
    		{
        		cout << "Introduce el numero " << i << endl;
        		cin >> numeros[i];
    		}
    
    		mayor = numeros[0];
    		for (i = 0; i < 10; i++)
    		{
        		if (numeros[i] > mayor)
        		{
        			mayor = numeros[i];
        		}
    		}
    
    
   	 		cout << "El numero mayor es: " << mayor;
    
    	return 0;
 	}
}

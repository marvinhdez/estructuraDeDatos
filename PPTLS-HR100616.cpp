#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	//declaro srand para que cada vez sea un numero aleatorio y no sea el mismo siempre
	srand(time(NULL));
	//srand((unsigned)time(0));
	//declaro las variables a utilizar
	int resultado = 1;
	int usuario;
	char * jugada;
	char * maquina;
	char * jugadas[] = {"Salir","Piedra","Papel","Tijeras","Lagarto","Spock"};
	//realizo un while para ver si el jugador quiere continuar jugando 
	while(resultado) 
	{
		cout << " \n MARVIN ERNESTO HERNANDEZ REYES \n    HR100616\n ";
		//imprimir en pantalla 
		cout << "Jugador. Por favor elige una opcion: \n  1) Piedra\n  2) Papel\n  3) Tijeras\n  4) Lagarto\n  5) Spock \n  0) SALIR \n  ";
		//capturo la opcion del usuario y la guardo en la variable
		cin >> usuario;
		//la variable jugada es para buscar la opciones que eligio el usuario 
		jugada = jugadas[usuario];
		//con la variable maquina hacemos que nuestro programa elija de manera aleatoria un numero del 1 al 5
		//para que tenga una opcion 
		maquina = jugadas[1+ rand()%5];
		//comparamos la opcion  elegida por el usuario con la posible elegida aleatoriame de la maquina
		if((jugada == "Piedra") && (maquina == "Tijeras"))
		{
			//imprimimos en pantalla lo que eligimos y lo que eligio la maquina
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  GANASTE!!! \n\n";
			//pausamos el programa y esperamos que el usuario presione una tecla 
			system("pause");
		}
		//repetimos mismo del if anterior 
		else if((jugada == "Papel") && (maquina == "Piedra")) 
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  GANASTE!!! \n\n";
			system("pause");
		}
		else if ((jugada == "Tijera") && (maquina == "Papel"))
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  GANASTE!!! \n\n";
			system("pause");
		}
		else if ((jugada == "Lagarto") && (maquina == "Papel"))
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  GANASTE!!! \n\n";
			system("pause");
		}
		else if ((jugada == "Spock") && (maquina == "Piedra"))
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  GANASTE!!! \n\n";
			system("pause");
		}
		//hasta este if el usuario con las opciones ha ganada
		else if((maquina == "Piedra") && (jugada == "Tijeras"))
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  PERDISTE!!! \n\n";
			system("pause");
		}
		else if((maquina == "Papel") && (jugada == "Piedra")) 
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  PERDISTE!!! \n\n";system("pause");
		}
		else if ((maquina == "Tijera") && (jugada == "Papel"))
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  PERDISTE!!! \n\n";
			system("pause");
		}
		else if ((maquina == "Lagarto") && (jugada == "Papel"))
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  PERDISTE!!! \n\n";
			system("pause");
		}
		else if ((maquina == "Spock") && (jugada == "Piedra"))
		{
			cout << "  cpu: " << maquina << "\n  tu: " << jugada << "\n  PERDISTE!!! \n\n";
			system("pause");
		}
		else if ((jugada == "Piedra") && (maquina == "Piedra") || (jugada == "Tijera") && (maquina == "Tijera") || (jugada == "Papel") && (maquina == "Papel") || (jugada == "Largarto") && (maquina == "Lagarto") || (jugada == "Spock") && (maquina == "Spock"))
		{
			cout << "  cpu: " << maquina << "\n  tu:" << jugada << "\n  EMPATE!!! \n\n";
			system("pause");
		}
		//si el usuario elige la opcion salirse entra en este if
		else if ((jugada == "Salir") )
		{
			//imprimimos en pantalla
			cout << "\n  Desea Salirse \n  0=>SI \n  1=>NO\n\n ";
			//capturamos la opcion si desea salirse o no 
			cin >> resultado;
			//si presiona una tecla diferente de cero o uno se sale del programa
			if ((resultado != 1) && (resultado != 0)){
				cout << "\n GOOD BYE !!!";
				system("pause");
				return 0;
			}
		}
	
	}
}




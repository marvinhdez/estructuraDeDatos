#include  <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// Prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora); 
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);
void continuar(int salir);
int salir;

int main(){
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	cout<< "\n  Desea salirse del juego. \n  1- Continuar\n  0- Salir \n";
	cin>> salir;
}

//implementacion 
std:: string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatorio;
	
	//generador de numero aleatorio
	srand(time(0));
		numeroAleatorio = rand() % 5 + 1;
		
	switch (numeroAleatorio)
	{
		case 1:
			movimiento = "piedra";
			break;
		case 2:
			movimiento = "papel";
			break;
		case 3:
			movimiento = "tijeras";
			break;
		case 4:
			movimiento = "lagarto";
			break;
		case 5:
			movimiento = "spock";
	}
	
	std::cout << "Computadora: " << movimiento << "\n";
	
	return movimiento;
}

std::string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout << "piedra, papel, tijeras, lagarto, spock (para terminar el juego, escriba salir)? \n";
	cin >> movimiento; 
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador){
	if(computadora == jugador){
		std::cout << "EMPATE! \n";
	}
	else if(jugador == "piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}
	else if(jugador == "papel"){
		procesarEntradaJugadorPapel(computadora);
	}
	else if(jugador == "tijera"){
		procesarEntradaJugadorTijera(computadora);
	}
	else if(jugador == "lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	}
	else if(jugador == "spock"){
		procesarEntradaJugadorSpock(computadora);
	}
	else {
		std::cout << "Entrada no valida. Ingrese piedra, papel, tijera, lagarto, o spock. \n";		
	}
}

void procesarEntradaJugadorPiedra(std:: string computadora){
	if(computadora == "papel"){
		std::cout<< "La computadora gana. Papel cubre piedra. \n";
	}
	else if(computadora == "tijera"){
		std::cout<< "Ganastes. Piedra quiebra tijera. \n";
	}
	else if(computadora == "lagarto"){
		std::cout<< "Ganastes. Piedra aplasta lagarto. \n";
	}
	else if(computadora == "spock"){
		std::cout<< "La Computadora gana. Spock vaporiza a piedra \n";
	}
}

void procesarEntradaJugadorPapel(std:: string computadora){
	if(computadora == "tijera"){
		std::cout<< "La computadora gana. tijera corta papel. \n";
	}
	else if(computadora == "piedra"){
		std::cout<< "Ganastes. Papel  cubre piedra. \n";
	}
	else if(computadora == "lagarto"){
		std::cout<< "La computadora. Lagarto devora papel. \n";
	}
	else if(computadora == "spock"){
		std::cout<< "Ganastes. Papel desautoriza spock. \n";
	}
}

void procesarEntradaJugadorTijera(std:: string computadora){
	if(computadora == "piedra"){
		std::cout<< "La computadora gana. piedra quiebra tijera. \n";
	}
	else if(computadora == "papel"){
		std::cout<< "Ganastes. Tijera corta papel. \n";
	}
	else if(computadora == "lagarto"){
		std::cout<< "Ganastes. Tijeras decapita lagarto. \n";
	}
	else if(computadora == "spock"){
		std::cout<< "La computadora gana. Spock rompe tijeras. \n";
	}
}

void procesarEntradaJugadorLagarto(std:: string computadora){
	if(computadora == "piedra"){
		std::cout<< "La computadora gana. Piedra aplasta lagarto. \n";
	}
	else if(computadora == "papel"){
		std::cout<< "Ganastes. Lagarto devora papel. \n";
	}
	else if(computadora == "tijera"){
		std::cout<< "La computadora. Tijeras decapita lagarto. \n";
	}
	else if(computadora == "spock"){
		std::cout<< "Ganastes. Lagarto envenena spock. \n";
	}
	
}

void procesarEntradaJugadorSpock(std:: string computadora){
	if(computadora == "piedra"){
		std::cout<< "Ganastes. Spock vaporiza piedra. \n";
	}
	else if(computadora == "papel"){
		std::cout<< "La computadora gana. Papel desautoriza spock. \n";
	}
	else if(computadora == "tijera"){
		std::cout<< "Ganastes. Spock rompe tijera. \n";
	}
	else if(computadora == "lagarto"){
		std::cout<< "La computadora gana. Lagarto envenena spock. \n";
	}
}

	


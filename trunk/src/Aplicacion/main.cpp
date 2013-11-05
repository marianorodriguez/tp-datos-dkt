#include "Programa/Programa.h"
#include "../Excepcion.h"

int main(int argc, char* argv[]){

	try{

		Programa* programa = new Programa();
		programa->ejecutar();
		delete programa;

	}catch(Excepcion &e){
		e.mostrarMensaje();
		cout<< "Se produjo un error inesperado, abortando..."<<endl;
	}

	return 0;
}

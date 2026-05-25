#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main (){
	ifstream archivoentrada ("input/texto endrada.txt");
	if (archivoentrada.is_open()) {
		cout<<"Archivo abierto"<<endl;
		string linea;
		while (getline (archivoentrada, linea)){
			archivosalida<<linea;
		}
		cout<<"Archivo copiado correspondientemente"<<endl;
	}
	
}

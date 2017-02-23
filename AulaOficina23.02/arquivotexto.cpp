// main.cpp

#include "Mago.h"
#include <iostream>
using namespace std;

int main()
{
	// Cria os Magos.
	Mago wiz0("Gandalf", 25, 100, 10);
	Mago wiz1("Loki", 50, 150, 12);
	Mago wiz2("Merlin", 10, 75, 6);

	// Cria a stream 
	ofstream outFile("Mago.txt");

	if( outFile )
	{
		wiz0.save(outFile);
		wiz1.save(outFile);
		wiz2.save(outFile);

		// Se terminou feche!.
		outFile.close();
	}

	//********************************************************************
	// Substitua o bloco anterior(Comente), e use este para carregar o arquivo.
	//********************************************************************

	//
	// Cria Magos "vazios" para carga
	Mago wiz0;
	Mago wiz1;
	Mago wiz2;

	cout << "Antes de Carregar..." << endl;
	wiz0.print();
	wiz1.print();
	wiz2.print();

	ifstream inFile("Mago.txt");

	if( inFile )
	{
		wiz0.load(inFile);
		wiz1.load(inFile);
		wiz2.load(inFile);
	}

	cout << "Depois de Carregar..." << endl;
	wiz0.print();
	wiz1.print();
	wiz2.print();

}
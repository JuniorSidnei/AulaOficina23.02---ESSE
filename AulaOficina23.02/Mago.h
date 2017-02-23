// Wiz.h

#ifndef MAGO_H
#define MAGO_H

#include <fstream>
#include <string>

class Mago
{
public:
	Mago(); 
	Mago(std::string nome, int hp, int mp, int armadura);

	// [...] other methods snipped

	void print();

	void save(std::ofstream& outFile);
	void load(std::ifstream& inFile);

private:
	std::string mNome;
	int mPontosAtaque;
	int mPontosMagia;
	int mArmadura;
};
#endif // Mago_H
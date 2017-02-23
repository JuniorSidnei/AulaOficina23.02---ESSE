// Wiz.cpp

#include "Mago.h"
#include <iostream>
using namespace std;
////
Mago::Mago()
{
	mNome        = "Default";
	mPontosAtaque   = 0;
	mPontosMagia = 0;
	mArmadura       = 0;
}

Mago::Mago(string nome, int hp, int mp, int armadura)
{
	mNome           = nome;
	mPontosAtaque   = hp;
	mPontosMagia    = mp;
	mArmadura       = armadura; 
}

void Mago::print()
{
	cout << "nome= "  << mNome        << endl;
	cout << "HP= "    << mPontosAtaque   << endl;
	cout << "MP= "    << mPontosMagia << endl;
	cout << "armadura= " << mArmadura       << endl;
	cout << endl;
}

void Mago::save(ofstream& outFile)
{
	outFile << "nome= "  << mNome        << endl;
	outFile << "HP= "    << mPontosAtaque   << endl;
	outFile << "MP= "    << mPontosMagia << endl;
	outFile << "armadura= " << mArmadura       << endl;
	outFile << endl;
}

void Mago::load(ifstream& inFile)
{
	string buffer;
	inFile >> buffer >> mNome;          // leitura do nome
	inFile >> buffer >> mPontosAtaque;  // leitura de mPontosAtaque 
	inFile >> buffer >> mPontosMagia;   // leitura de mPontosMagia  
	inFile >> buffer >> mArmadura;      // leitura de mArmadura  
}
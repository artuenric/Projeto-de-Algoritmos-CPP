#include <iostream>
#include <string>
#include "agenda.h"

using namespace std;

agenda add(string nome, double numero){
	agenda contato;
	contato.nome = nome;
	contato.numero = numero;
	return contato;
}

void alterarNome(agenda* contato, string novoNome){
	contato -> nome = novoNome;
}
void alterarNumero(agenda* contato, double novoNumero){
	contato -> numero = novoNumero;
}
void imprime(agenda contato){
	cout << "Nome do Contato: " << contato.nome << endl;
	cout << "Numero do Contato: " << contato.numero << endl;
}
void busca(string nome, agenda contato){
	if (nome == contato.nome){
		cout << "O contato " << nome << " existe!" << endl;
	}
	else{
		cout << "O contao "<< nome <<" não existe" << endl;
	}
}

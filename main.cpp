#include <iostream>
#include <string>

using namespace std;

struct Aluno{
	string nome;
	int matricula;
	char conceito;
};

int main(void){
	struct Aluno al, aux;
	al.nome = "pedro";
	al.matricula = 2022049;
	al.conceito = 's';
	aux = al;
	aux.nome = "Arthur";
	cout << al.nome << " " << al.matricula << " " << al.conceito << endl;
	cout << aux.nome << " " << aux.matricula << " " << aux.conceito << endl;
	
	return 0;
}
#include <iostream> 
#include <string>
#include "agenda.h"

using namespace std;
int main(){
	agenda novoContato;
	string nomeNovoContato;
	double numeroNovoContato;
	
	cout << "Qual o nome do novo contato? ";
	cin >> nomeNovoContato;
	
	cout << "Qual o número do novo contato? ";
	cin >> numeroNovoContato;
	
	novoContato = add(nomeNovoContato, numeroNovoContato);
	imprime(novoContato);
	
	cout << "Altere o nome do contato: ";
	cin >> nomeNovoContato;
	alterarNome(&novoContato, nomeNovoContato);
	
	cout << "Altere o numero do contato: ";
	cin >> numeroNovoContato;
	alterarNumero(&novoContato, numeroNovoContato);
	
	cout << "Depois das alterações o contato ficou desta forma:" << endl;
	imprime(novoContato);
	

	busca(nomeNovoContato, novoContato);

	return 0;
}


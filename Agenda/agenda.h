#include <string>
using namespace std;

typedef struct {
	double numero;
	string nome;
} agenda;

agenda add(string nome, double numero);
void alterarNome(agenda* contato, string novoNome);
void alterarNumero(agenda* contato, double novoNumero);
void imprime(agenda contato);
void busca(string nome, agenda contato);

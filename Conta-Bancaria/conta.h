using namespace std;

typedef struct {
	int numero;
	double saldo;
} conta;

conta iniciar(int numero, double saldo);
void saque(conta* contaUsuario, double valor);
void deposito(conta* contaUsuario, double valor);
void extrato(conta contaUsuario);


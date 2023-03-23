//Programa introduzindo o uso de Struct por meio de uma conta bancária com capacidade de iniciação de conta, saque, depósito e extrato.

#include <iostream> 
#include "conta.h"

using namespace std;

int main(){
	
	//Definindo a variável novaConta com o tipo 'conta'
	conta novaConta;
	
	//Realizando as Operações
	novaConta = iniciar(2023, 100);
	deposito(novaconta, 1500);
	saque(novaConta, 120);
	extrato(novaConta);

	return 0;
}

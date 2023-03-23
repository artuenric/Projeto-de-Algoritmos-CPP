#include <iostream>
#include "conta.h"

using namespace std;

conta iniciar(int numero, double saldo){
	conta novaConta;
	novaConta.numero = numero;
	novaConta.saldo = saldo;
	return novaConta;
}
void saque(conta* contaUsuario, double valor){
	contaUsuario -> saldo -= valor;
}
void deposito(conta* contaUsuario, double valor){
	contaUsuario -> saldo += valor;
}
void extrato(conta contaUsuario){
	cout << "O número da conta é: " << contaUsuario.numero << " e o saldo: " << contaUsuario.saldo << endl;
}



#include <iostream> 
#include "conta.h"

using namespace std;
int main(){
	conta c;
	c = iniciar(202, 1111);
	extrato(c);
	return 0;
}

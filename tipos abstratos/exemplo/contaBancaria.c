#include <stdio.h>
#include "contabancaria.h"
void Inicializa(ContaBancaria* pconta, int numero, double saldo) {
 pconta->numero = numero;
 pconta->saldo = saldo;
}
void Deposito (ContaBancaria* pconta, double valor) {
 pconta->saldo += valor;
}
void Saque (ContaBancaria* pconta, double valor) {
 pconta->saldo -= valor;
}
void Imprime (ContaBancaria conta) {
 printf("Numero: %d\n", conta.numero);
 printf("Saldo: %f\n", conta.saldo);
}
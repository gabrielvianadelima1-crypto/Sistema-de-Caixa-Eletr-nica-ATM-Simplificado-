#include <stdio.h>
int main() {
// Variáveis do sistema
int saldo_disponivel = 5000; // Saldo padrão simulado na caixa eletrônica
int valor_saque;
int n100, n50, n20, n10, n5;

printf("=== SISTEMA DE CAIXA ELETRONICO (ATM) ===\n");
printf("Saldo disponivel em conta: R$ %d\n\n", saldo_disponivel);

// 1. Solicitar ao usuário o valor que deseja sacar
printf("Digite o valor do saque: ");
if (scanf("%d", &valor_saque) != 1) {
    printf("Entrada invalida.\n");
    return 1;
}

// 2. Verificar se o valor é múltiplo de 5 e menor ou igual ao saldo disponível
if (valor_saque <= 0) {
    printf("Erro: O valor do saque deve ser maior que zero.\n");
} 
else if (valor_saque > saldo_disponivel) {
    printf("Erro: Saldo insuficiente para realizar esta operacao.\n");
} 
else if (valor_saque % 5 != 0) {
    printf("Erro: O caixa possui apenas notas de 100, 50, 20, 10 e 5. Digite um valor multiplo de 5.\n");
} 
else {
    // 3. Caso seja possível, calcular a quantidade de notas (cédulas de 100, 50, 20, 10, 5)
    n100 = valor_saque / 100;
    valor_saque %= 100;

    n50 = valor_saque / 50;
    valor_saque %= 50;

    n20 = valor_saque / 20;
    valor_saque %= 20;

    n10 = valor_saque / 10;
    valor_saque %= 10;

    n5 = valor_saque / 5;
    valor_saque %= 5;

    // 4. Mostrar o resultado da distribuição das notas
    printf("\nNotas entregues:\n");
    if (n100 > 0) printf("%d nota(s) de 100\n", n100);
    if (n50 > 0)  printf("%d nota(s) de 50\n", n50);
    if (n20 > 0)  printf("%d nota(s) de 20\n", n20);
    if (n10 > 0)  printf("%d nota(s) de 10\n", n10);
    if (n5 > 0)   printf("%d nota(s) de 5\n", n5);
}

return 0;
}

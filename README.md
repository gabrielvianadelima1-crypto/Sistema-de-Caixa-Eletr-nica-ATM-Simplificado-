<h1 align="center">🏧 Caixa Eletrônico em C</h1> <p align="center"> Simulador de saque em caixa eletrônico que calcula a <b>menor quantidade de cédulas</b> para o valor pedido. </p> <p align="center"> <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" /> <img src="https://img.shields.io/badge/GCC-compilador-A42E2B?style=for-the-badge&logo=gnu&logoColor=white" /> <img src="https://img.shields.io/badge/status-conclu%C3%ADdo-06B6D4?style=for-the-badge" /> </p>
📋 Sobre o projeto

O programa simula um caixa eletrônico (ATM) com saldo de R$ 5.000. O usuário digita o valor que quer sacar e o sistema:

Valida se o valor é possível de sacar;
Calcula quantas cédulas de cada tipo devem ser entregues;
Mostra a distribuição das notas na tela.

Notas disponíveis: R$ 100, R$ 50, R$ 20, R$ 10 e R$ 5.

✅ Validações
Situação	Resposta do sistema
Entrada que não é número	Entrada invalida.
Valor menor ou igual a zero	Erro: o valor deve ser maior que zero
Valor maior que o saldo	Erro: saldo insuficiente
Valor que não é múltiplo de 5	Erro: o caixa só tem notas de 100, 50, 20, 10 e 5
🧠 Como funciona

O cálculo usa um algoritmo guloso: começa pela nota de maior valor e vai descendo. Para cada cédula, a divisão inteira (/) diz quantas notas cabem, e o resto (%) é o que sobra para as notas menores.

c
n100 = valor_saque / 100;
valor_saque %= 100;

n50 = valor_saque / 50;
valor_saque %= 50;
// ... e assim por diante até a nota de 5

Como as cédulas são 100, 50, 20, 10 e 5, esse método sempre entrega o menor número de notas possível.

💻 Exemplo de uso

Saque de R$ 385:

=== SISTEMA DE CAIXA ELETRONICO (ATM) ===
Saldo disponivel em conta: R$ 5000

Digite o valor do saque: 385

Notas entregues:
3 nota(s) de 100
1 nota(s) de 50
1 nota(s) de 20
1 nota(s) de 10
1 nota(s) de 5

Saque de R$ 33 (inválido):

Digite o valor do saque: 33
Erro: O caixa possui apenas notas de 100, 50, 20, 10 e 5. Digite um valor multiplo de 5.
🚀 Melhorias futuras
 Descontar o valor sacado do saldo e mostrar o saldo restante
 Menu para fazer vários saques sem fechar o programa
 Controlar a quantidade de cédulas disponíveis no caixa
 Opções de depósito e consulta de extrato
📚 Conceitos praticados

entrada e saída com printf/scanf · estruturas condicionais (if / else if) · operadores de divisão inteira e módulo · validação de entrada

<p align="center"> Feito por <a href="https://github.com/gabrielvianadelima1-crypto">Gabriel Viana</a> 💻 </p>

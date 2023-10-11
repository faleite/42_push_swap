## Mapa organizacional
### Parte #1
1. Verificar se a entrada é valida
	- ~~se argc == 1, sair do programa~~
	- ~~se argc == 2, continuar~~
		- ~~se argv[1][0] == NULL, sair do programa~~
		- ~~se argv[1][0] != NULL, continuar~~
		- ~~separar numeros de argv[1] para colocar na stack **a** (use ft_split)~~
			- ~~*Você pode adicionar em malloc do array mais 2 espaços: para NULL~~\
			~~e para o argv[0] que é o nome do programa.* (Mais facil para inicializar a stack)~~
	- ~~se argc > 2, continuar~~
	- ~~se argvs não forem numeros, sair do programa com *Error*~~
		- ~~ex: --12, hello, 12a, 12.3, 12.3.4, 12,3,4,~~
	- ~~Converter os num em inteiros~~
		- ~~use ft_atol (long int)~~
		- ~~prototype: long int ft_atol(const char *str);~~
	- ~~verificar se num esta dentro do limite de inteiros~~
		- ~~se num > INT_MAX (2147483647), sair do programa com *Error*~~
		- ~~se num < INT_MIN (-2147483648), sair do programa com *Error*~~
	- ~~verificar se num é duplicado, se duplicado, sair do programa com *Error*~~
	- ~~se tudo ok, adicionar num na stack **a**~~
		- Watch this video: [What is a static variable](https://youtu.be/OngGUoENgWo?si=GoLx9Ng7P3Tny8Yk)
2. ~~Criar uma struct de stack~~
	- ~~Ex declaração: t_stack_node~~
	- ~~criar stack **a** e **b** -> t_stack_node *a, t_stack_node *b;~~
	- ~~atribuir NULL para os ponteiros *a e *b, para evitar lixo de memória~~
3. ~~criar função que inicializa a stack~~
4. Funcões uteis para manipular a stack
	- ~~retornar o tamanho da stack~~
	- ~~Somar cada valor na stack e retornar seu total~~
	- encontrar o ultimo node da stack
	- encontrar o menor valor node da stack
	- encontrar o maior valor node da stack
	- adicionar node na stack (onde? no inicio ou no final?)
	- ~~criar função que libera a stack (free)~~
### Parte #2
1. Implementações de comandos para a stack
	- ~~Swap (Trocar os dois primeiros elementos do topo da stack)~~
	- ~~Rotate (O node do topo da stack se torna o ultimo node da stack)~~
		- ~~Ex: 1 2 3 4 5 -> 2 3 4 5 1~~
	- Reverse Rotate (O ultimo node da stack se torna o node do topo da stack)
		- Ex: 1 2 3 4 5 -> 5 1 2 3 4
	- Push (Tira o node do topo da stack **a** e coloca no topo da stack **b**)
### Parte #3
1. Ordenação de poucos numeros
	- se tamanho da stack == 3 (apenas 3 nodes), função de ordenação especifica
		- Se o primeiro node é o maior, envie-o para o final da stack (ra)
		- Se eu sei que o maior numero esta no final da stack:
			- Eu verifico se o segundo node é o menor, se for, eu faço swap (sa)
	- se tamanho da stack == 1, fazer nada
	- se tamanho da stack == 2, fazer swap (sa)
	- se tamanho da stack == 5, fazer ordenação especifica
### Parte #4
1. Ordenação de muitos numeros... (em progresso)
	- se tamanho da stack > 5, fazer ordenação especifica
		- separar a stack **a** em duas stacks **a** e **b**
		- ordenar a stack **a** com a função de ordenação especifica
		- ordenar a stack **b** com a função de ordenação especifica
		- juntar as duas stacks **a** e **b** em uma stack **a**
		- ordenar a stack **a** com a função de ordenação especifica

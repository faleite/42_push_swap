# NOTES

## Pseudo Code
1. Verificar se a entrada é valida
	- se argc == 1, sair do programa
	- se argc == 2, continuar
		- se argv[1][0] == NULL, sair do programa
		- se argv[1][0] != NULL, continuar
		- separar numeros de argv[1] e colocar na stack **a** (use ft_split)
	- se argc > 2, continuar
		- colocar numeros de argv em **a** use ft_split
			- *Você pode adicionar em malloc do array mais 2 espaços: para NULL\
			e para o argv[0] que é o nome do programa.* (Mais facil para inicializar a stack)
			- Watch this video: [What is a static variable](https://youtu.be/OngGUoENgWo?si=GoLx9Ng7P3Tny8Yk)
	- se argvs não forem numeros, sair do programa com *Error*
		- ex: --12, hello, 12a, 12.3, 12.3.4, 12,3,4,
2. Criar uma struct de stack
	- Ex declaração: t_stack_node
	- criar stack **a** e **b** -> t_stack_node *a, t_stack_node *b;
	- atribuir NULL para os ponteiros *a e *b, para evitar lixo de memória
3. criar função que inicializa a stack
4. criar função que verifica o tamanho da stack
5. criar função que ordena a stack
	- se tamanho da stack == 2, fazer swap (sa)
	- se tamanho da stack == 3, fazer funçaõ de ordenação especifica
6. criar função que libera a stack (free)

## [Linked list](./linked_list.md)

## [Memory Process](./memory_process.png)

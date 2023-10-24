```
██████╗ ██╗   ██╗███████╗██╗  ██╗    ███████╗██╗    ██╗ █████╗ ██████╗
██╔══██╗██║   ██║██╔════╝██║  ██║    ██╔════╝██║    ██║██╔══██╗██╔══██╗
██████╔╝██║   ██║███████╗███████║    ███████╗██║ █╗ ██║███████║██████╔╝
██╔═══╝ ██║   ██║╚════██║██╔══██║    ╚════██║██║███╗██║██╔══██║██╔═══╝
██║     ╚██████╔╝███████║██║  ██║    ███████║╚███╔███╔╝██║  ██║██║
╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝
```
* ### [Introduction](#introduction-1)
* ### [Usage](#usage-1)
* ### [Algorithm used](#algorithm-used-1)
* ### [Study resources](#study-resources-1)
* ### [Tools](#tools-1)
* ### [Workflow](#workflow-1)

## Introduction
*This project involves sorting data on a stack, with a limited set of instructions,\
and the smallest number of moves.*

*To make this happen, you will have to manipulate various sorting algorithms and\
choose the most appropriate solution(s) for optimized data sorting.*

 Skills | Grade |
:------:|:-----:|
[**Unix**] [**Rigor**] [**Algorithmis & AI**] [**Imperative programming**] | **:white_check_mark: 100%**
 <!-- **Subscribed :atom:** -->

**The goal is to sort in ascending order numbers into *stack_a* using the following operations:**
command  | action |
---|------|
`sa` | swap a - swap the first 2 elements at the top of *stack_a*					|
`sb` | swap b - swap the first 2 elements at the top of *stack_b*	|
`ss` | `sa` and `sb` at the same time |
`pa` | push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty|
`pb` | push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty |
`ra` | rotate a - shift up all elements of *stack_a* by 1. The first element becomes the last one			|
`rb` | rotate b - shift up all elements of *stack_b* by 1. The first element becomes the last one 		|
`rr` | `ra` and `rb` at the same time			|
`rra` |  reverse rotate a - shift down all elements of *stack_a* by 1. The last element becomes the first one	|
`rrb` |  reverse rotate b - shift down all elements of *stack_b* by 1. The last element becomes the first one	|
`rrr` | `rra` and `rrb` at the same time		|

## Usage

```sh
git clone git@github.com:faleite/42_push_swap.git
```
```sh
cd push_swap
```
```sh
make
```
```sh
./pushswap <numbers to be sorted>
```

### Numbers can be passed:

* as single arguments
```sh
./push_swap 1 3 7 4 2
```
* as a string 
```sh
./push_swap "1 3 7 4 2"
``` 
* as an environment variable 
```sh
ARG="1 3 7 4 2"; ./push_swap $ARG
```
[↑ Index ↑](#top)

## Algorithm used 
*by [duarte3333](https://github.com/duarte3333/Push_Swap)*

*Here reviewed by me*

*[version in portuguese](./dcs/algorithm.md)*

*This explanation is made for an example of 10 elements, however, to organize\
a larger amount of numbers the procedure is exactly the same,\
without any changes.*

### Start
- Find the average value. At first it is 11.1, in this example.
- If the number is below the average value, **push b (pb)**.
- If the number is above the average value, rotate the **stack A (ra)**

Stack A | Stack B
:------:|:------:
**6**
**52**
**10**
**3**
**2**
**7**
**5**
**4**
**21**
**1**
**Stack A**|**Stack B**
---
- Since 6 is below average, the number will be pushed to **B**.
- Then, the average will be recalculated again and becomes 11.66.

Stack A | Stack B
:------:|:------:
**52**  |
**10**  |
**3**  	|
**2**  	|
**7**  	|
**5**  	|
**4**  	|
**21** 	|
**1**  	|**6**
**Stack A**|**Stack B**
---
- For number **52** -> **ra**
- For the number **10** -> **pb** and the new average is 11.87
- For the number **3** -> **pb** and the new average is 13.14
- For the number **2** -> **pb** and the new average is 15
- For the number **7** -> **pb** and the new average is 16.6

Stack A | Stack B
:------:|:------:
**5**  	|**7**
**4**  	|**2**
**21** 	|**3**
**1**  	|**10**
**52**  |**6**
**Stack A**|**Stack B**
---
- This procedure ends when stack **A** has **5** elements.
- Then a function is created to organize the **5** elements that remained in **A**.
- In this case it would be done with the following: **pb; rra; bp; sa; shovel; shovel**
- If we have 100 numbers, after this procedure we will have 5 in stack **A** and 95 in stack **B**.

Stack A | Stack B
:------:|:------:
**1**  	|**7**
**4**  	|**2**
**5** 	|**3**
**21** 	|**10**
**52**  |**6**
**Stack A**|**Stack B**
---
- Next step: Find the best friend of each number in stack **A**

Friend of 7? |Friend of 2? |Friend of 3?
--|---|--
1-7=-6 |1-2=-1 |1-3=-2
4-7=-3 |4-2=2  |4-3=1
5-7=-2 |5-2=3  |5-3=2
21-7=14|21-2=19|21-3=18
52-7=45|52-2=50|52-3=49
Best friend is **21** | Best friend is **4**| Best friend is **4**

- Repeating the process we obtain the best friends of the rest of the numbers:
- **10**'s best friend is **21**
- **6**'s best friend is **21**
- Rules for choosing the best friend:
1. The number in **A** must be greater than the number in **B**

Best friend | Number | Moves to put your best friend on top | Moves to get the number to the top | Cost
---|---|---|---|------
21 |7  |2  |0  |2
4  |2  |1  |1  |2
4  |3  |1  |2  |3
21 |10 |2  |2  |4
21 |6  |2  |1  |3

- The winner was **7**, because all costs were greater than or equal. Therefore, the winner\
and best friend will be placed on top of your stacks.
- After that the movement **push a (pa)** will be made, which means that the number will be\
added to your best friend.

Stack A | Stack B
:------:|:------:
**21** 	|**7**
**52** 	|**2**
**1** 	|**3**
**4** 	|**10**
**5**   |**6**
**Stack A**|**Stack B**

<------------------------- |
:--:|
**pa**

Stack A | Stack B
:------:|:------:
**7**	|
**21** 	|
**52** 	|**2**
**1** 	|**3**
**4** 	|**10**
**5**   |**6**
**Stack A**|**Stack B**
---
- Repeating the process, now the winner is **6** and his best friend is **7**.

Stack A | Stack B
:------:|:------:
**6**	|
**7**	|
**21** 	|
**52** 	|
**1** 	|**2**
**4** 	|**3**
**5**   |**10**
**Stack A**|**Stack B**
---
- Repeating the process, now the winner is **2** and his best friend is **4**.

Stack A | Stack B
:------:|:------:
**2**	|
**4** 	|
**5**   |
**6**	|
**7**	|
**21** 	|
**52** 	|**3**
**1** 	|**10**
**Stack A**|**Stack B**
---
- Repeating the process, now the winner is **3** and his best friend is **4**.

Stack A | Stack B
:------:|:------:
**3**	|
**4** 	|
**5**   |
**6**	|
**7**	|
**21** 	|
**52** 	|
**1** 	|
**2**	|**10**
**Stack A**|**Stack B**
---
- Repeating the process, now the winner is **10** and his best friend is **21**.

Stack A | Stack B
:------:|:------:
**10**	|
**21** 	|
**52** 	|
**1** 	|
**2**	|
**3**	|
**4** 	|
**5**   |
**6**	|
**7**	|
**Stack A**|**Stack B**
- This procedure ends when there are no more elements in stack **B**.
---
- Finally, simply rotate the **A** stack until the last element is the largest in the stack.

Stack A | Stack B
:------:|:------:
**1** 	|
**2**	|
**3**	|
**4** 	|
**5**   |
**6**	|
**7**	|
**10**	|
**21** 	|
**52** 	|
**Stack A**|**Stack B**
- Using this algorithm it is possible to organize stacks of any size,\
the method is always the same.

[↑ Index ↑](#top)

## Study resources
- [Linked list](./dcs/linked_list.md)
- [Memory Process](./dcs/memory_process.png)
- [A journey to find most efficient sorting algorithm](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
- [The least amount of moves with two stacks](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [Radix Algorithm](https://www.geeksforgeeks.org/radix-sort/)
- ["Spiral rule" and "Right to left" rule to read hard declarations in C](https://riptutorial.com/c/example/18833/using-the-right-left-or-spiral-rule-to-decipher-c-declaration)
  - [int const](https://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const)
  - [right-left or spiral rule](https://riptutorial.com/c/example/18833/using-the-right-left-or-spiral-rule-to-decipher-c-declaration)
- [CS50 Data Structures 2020](https://youtu.be/2T-A_GFuoTo?si=gN5tv-ietP6OSMAT)
- [CS50 Data Structures 2023](https://www.youtube.com/live/X8h4dq9Hzq8?si=H4kYNn6rGhwWWI4h)
- [Short introduction to header files in C](https://www.youtube.com/watch?v=u1e0gLoz1SU)
- [How pointer strings are immutable in C?](https://www.youtube.com/watch?v=RbcAHJOWVzw)
- [The C programming language: Declarations, not that simple bro!](https://www.youtube.com/watch?v=WksGf6DKwXA)
- [Push swap tutorial](https://github.com/duarte3333/Push_Swap) by [Duarte3333](https://github.com/duarte3333)
- [Push swap tutorial](https://github.com/paulahemsi/push_swap) by [Paula Hemsi](https://github.com/paulahemsi)

[↑ Index ↑](#top)

## Tools
- [Random list](https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php)
- [push swap visualizer](https://github.com/o-reo/push_swap_visualizer) by [o-reo](https://github.com/o-reo)
- [push swap simulator](https://phemsi-a.itch.io/push-swap) by [Paula Hemsi](https://github.com/paulahemsi)
- [push swap tester](https://github.com/LeoFu9487/push_swap_tester) by [LeoFu](https://github.com/LeoFu9487)

[↑ Index ↑](#top)

## Workflow
<details>
  <summary>Click to expand </summary>

1. Verificar se a entrada é valida
	- se argc == 1, sair do programa
	- se argc == 2, continuar
		- se argv[1][0] == NULL, sair do programa
		- se argv[1][0] != NULL, continuar
		- separar numeros de argv[1] para colocar na stack **a** (use ft_split)
			- *Você pode adicionar em malloc do array mais 2 espaços: para NULL\
			e para o argv[0] que é o nome do programa.* (Mais facil para inicializar a stack)
	- se argc > 2, continuar
	- se argvs não forem numeros, sair do programa com *Error*
		- ex: --12, hello, 12a, 12.3, 12.3.4, 12,3,4,
	- Converter os num em inteiros
		- use ft_atol (long int)
		- prototype: long int ft_atol(const char *str);
	- verificar se num esta dentro do limite de inteiros
		- se num > INT_MAX (2147483647), sair do programa com *Error*
		- se num < INT_MIN (-2147483648), sair do programa com *Error*
	- verificar se num é duplicado, se duplicado, sair do programa com *Error*
	- se tudo ok, adicionar num na stack **a**
		- Watch this video: [What is a static variable](https://youtu.be/OngGUoENgWo?si=GoLx9Ng7P3Tny8Yk)
2. Criar uma struct de stack
	- Ex declaração: t_stack_node
	- criar stack **a** e **b** -> t_stack_node *a, t_stack_node *b;
	- atribuir NULL para os ponteiros *a e *b, para evitar lixo de memória
3. criar função que inicializa a stack
4. Funcões uteis para manipular a stack
	- retornar o tamanho da stack
	- Somar cada valor na stack e retornar seu total
	- adicionar node no final da stack
	- criar função que libera a stack (free)
5. Implementações de comandos para a stack
	- Swap (Trocar os dois primeiros elementos do topo da stack)
	- Rotate (O node do topo da stack se torna o ultimo node da stack)
		- Ex: 1 2 3 4 5 -> 2 3 4 5 1
	- Reverse Rotate (O ultimo node da stack se torna o node do topo da stack)
		- Ex: 1 2 3 4 5 -> 5 1 2 3 4
	- Push (Tira o node do topo da stack **a** e coloca no topo da stack **b**)
6. Ordenação de poucos numeros, 2, 3, 4 e 5
	- se tamanho da stack == 3 (apenas 3 nodes), função de ordenação especifica
		- Se o primeiro node é o maior, envie-o para o final da stack (ra)
		- Se eu sei que o maior numero esta no final da stack:
			- Eu verifico se o segundo node é o menor, se for, eu faço swap (sa)
	- se tamanho da stack == 1, fazer nada
	- se tamanho da stack == 2, fazer swap (sa)
	- se tamanho da stack == 5, fazer ordenação especifica
7. Criar função para verificar se os numeros da linha de argumento esta ordenada
8. Ordenação de muitos numeros...
	- se tamanho da stack > 5, inplementar Algoritimo de ordenção de grandes numeros.

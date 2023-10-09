# The Algorithm
*Esta explicação é feita para um exemplo de 10 elementos, porém, para organizar\
uma quantidade maior de números o procedimento é exatamente o mesmo,\
sem nenhuma alteração.*

## Ínicio
- Encontre o valor médio. A princípio é 11.1, neste exemplo.
- Se o número estiver abaixo do valor médio, **push b (pb)**.
- Se o número estiver acima do valor médio, gire a **stack A (ra)**

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
- Como o 6 está abaixo da média, o número será empurrado para **B**.
- Então, a média será recalculada novamente e passa a ser 11.66.

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
- Para o número **52** -> **ra**
- Para o número **10** -> **pb** e a nova média é 11.87
- Para o número **3** -> **pb** e a nova média é 13.14
- Para o número **2** -> **pb** e a nova média é 15
- Para o número **7** -> **pb** e a nova média é 16.6

Stack A | Stack B
:------:|:------:
**5**  	|**7**
**4**  	|**2**
**21** 	|**3**
**1**  	|**10**
**52**  |**6**
**Stack A**|**Stack B**
---
- Este procedimento termina quando a stack **A** tiver **5** elementos.
- Depois é feita uma função para organizar os **5** elementos que ficaram em **A**.
- Neste caso seria feito com o seguinte: **pb; rra; pb; sa; pa; pa**
- Se tivermos 100 números, após este procedimento teremos 5 na stack **A** e 95 na stack **B**.

Stack A | Stack B
:------:|:------:
**1**  	|**7**
**4**  	|**2**
**5** 	|**3**
**21** 	|**10**
**52**  |**6**
**Stack A**|**Stack B**
---
- Próxima etapa: Encontre o melhor amigo de cada número na stack **A**

Amigo de 7? |Amigo de 2? |Amigo de 3?
--|---|--
1-7=-6 |1-2=-1 |1-3=-2
4-7=-3 |4-2=2  |4-3=1
5-7=-2 |5-2=3  |5-3=2
21-7=14|21-2=19|21-3=18
52-7=45|52-2=50|52-3=49
Melhor amigo é **21** | Melhor amigo é **4**| Melhor amigo é **4**

- Repetindo o processo obtemos os melhores amigos do resto dos números:
	- O melhor amigo de **10** é **21**  
	- O melhor amigo de **6** é **5**
- Regras para escolher o melhor amigo:
	1. O número em **A** deve ser maior que o número em **B**

Melhor amigo | Número | Movimentos para colocar o melhor amigo no topo | Movimentos para colocar o número no topo | Custo
---|---|---|---|------
21 |7  |2  |0  |2
4  |2  |1  |1  |2
4  |3  |1  |2  |3
21 |10 |2  |2  |5
5  |6  |2  |1  |3

- O vencedor foi **7**, porque todos os custos foram maiores ou iguais. Portanto, o vencedor\
e o melhor amigo serão colocados no topo das suas pilhas.
- Depois disso será feito o movimento **push a (pa)**, o que significa que o número será\
adicionado ao seu melhor amigo.

Stack A | Stack B
:------:|:------:
**21** 	|**7**
**52** 	|**2**
**1** 	|**3**
**4** 	|**10**
**5**   |**6**
**Stack A**|**Stack B**

<-------------------------
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
- Repetindo o processo, agora o vencedor é o **6** e seu melhor amigo é o **7**.

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
- Repetindo o processo, agora o vencedor é o **2** e seu melhor amigo é o **4**.

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
- Repetindo o processo, agora o vencedor é o **3** e seu melhor amigo é o **4**.

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
- Repetindo o processo, agora o vencedor é o **10** e seu melhor amigo é o **21**.

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
- Este procedimento termina quando não há mais elementos na stack **B**.
---
- Por último, basta girar a stack **A** até que o último elemento seja o maior da stack.

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
- Através deste algoritmo é possível organizar pilhas de qualquer tamanho,\
o método é sempre o mesmo.
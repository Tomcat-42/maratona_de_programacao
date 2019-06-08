# Algoritmos de ordenação

Como o nome sugere, esses algoritmos *ordenam* uma dada estrutura de dados com base em um critério de comparação pré-estabelecido.

### Links úteis  

* [geeksforgeeks](https://www.geeksforgeeks.org/sorting-algorithms/) 
* [brilliant.org](https://brilliant.org/wiki/sorting-algorithms/) 
* [wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm) 
* [Video intuitivo](https://youtu.be/kPRA0W1kECg)
  
  
## Bubble Sort

### Descrição:  

 Algoritmo simples e intuitivo.Sendo *n* a quantidade de elementos da estrutura, esse algoritmo a itera da posição *1* até *n* *n* vezes trocando elementos adjacentes.Uma possível otimização é percorrer a estrutura somente até não ter sido feita nenhuma troca em uma iteração.  

### Exemplo:  

Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

**Média**: *O(n^2)*  

**Pior Caso**: *O(n^2)* , ocorre quando a estrutura está ordenada de maneira inversa ao critério utilizado.  

**Melhor Caso**: *O(n)* , ocorre quando a estrutura já está ordenada.  

### Observações e Links úteis:  

* [Vídeo](https://youtu.be/nmhjrI-aW5o)
  
   
## (Cocktail) Shaker Sort  

### Descrição:  

Variação do Bubble Sort.Ao passo que o Bubble Sort percorre e troca os elementos da estrutura em uma direção por iteração, o Shaker Sort percorre e troca os elementos nas duas direções por iteração.

### Exemplo:  

Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

**Média**: *O(n^2)*  

**Pior Caso**: *O(n^2)* , ocorre quando a estrutura está ordenada de maneira inversa ao critério utilizado.  

**Melhor Caso**: *O(n)* , ocorre quando a estrutura já está ordenada.  

### Observações e Links úteis:  

Apesar do Shaker Sort possuir a mesma complexidade de tempo do Bubble Sort, ele é algumas vezes mais rápido.  

* [Vídeo](https://youtu.be/nmhjrI-aW5o)

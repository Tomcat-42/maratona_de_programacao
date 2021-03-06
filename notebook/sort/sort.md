# Algoritmos de ordenação

   Como o nome sugere, esses algoritmos *ordenam* uma dada estrutura de dados com base em um critério de comparação pré-estabelecido.

### Links úteis  

   * [geeksforgeeks](https://www.geeksforgeeks.org/sorting-algorithms/) 
   * [brilliant.org](https://brilliant.org/wiki/sorting-algorithms/) 
   * [wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm) 
   * [Video intuitivo](https://youtu.be/kPRA0W1kECg)

TODO:

   - [x] Bubble Sort
   - [x] Shaker Sort
   - [x] Selection Sort
   - [x] Insertion Sort
   - [x] Shell Sort
   - [x] Merge Sort
   - [x] Quick Sort

  
## Bubble Sort

### Descrição:  

   Algoritmo simples e intuitivo.Sendo *n* a quantidade de elementos da estrutura, esse algoritmo a itera a estrutura *n-1* vezes trocando elementos adjacentes.Uma possível otimização é percorrer a estrutura somente até não ter sido feita nenhuma troca em uma iteração.Além disso, depois de *k* iterações, os últimos *k* elementos já estarão ordenados.Apesar de não oferecer nenhuma vantagem em relação a abordagem iterativa, o Bubblesort pode ser implementado recursivamente.

### Exemplo:  

   Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

   **Média**: *O(n^2)*  

   **Pior Caso**: *O(n^2)* , ocorre quando a estrutura está ordenada de maneira inversa ao critério utilizado.  

   **Melhor Caso**: *O(n)* , ocorre quando a estrutura já está ordenada.  

### Observações e Links úteis:  

   * É **estável**(mantém a ordem dos elementos com chaves de ordenação iguais).
   * Não necessita de espaço extra.

   * [Vídeo 1](https://youtu.be/nmhjrI-aW5o)
   * [Vídeo 2](https://youtu.be/lyZQPjUT5B4)
  
   
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

   * É **estável**(mantém a ordem dos elementos com chaves de ordenação iguais).
   * Não necessita de espaço extra.

   * [Vídeo](https://youtu.be/nmhjrI-aW5o)


## Selection Sort

### Descrição:  

   Trabalha com a idéia de dois subarrays, um dos elementos já ordenados e outro de elementos desordenados.Dessa forma,Itera o subarray do elementos desordenados(inicialmente o array inteiro) **selecionando** o menor elemento e trocando-o com o primeiro(ou último) desse subarray.A cada iteração o limite inferior do subarray dos elementos desordenados e o limite superior do subarray dos ordenados aumenta.Assim, quando o subarray dos elementos desordenados tiver tamanho 1, o array estará ordenado.
   A mesma idéia pode ser implementada recursivamente, porém sem nenhuma vantagem em relação ao algoritmo iterativo.

### Exemplo:  

   Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

   **Média**: *O(n^2)*  

   **Pior Caso**: *O(n^2)* , ocorre quando a estrutura está ordenada de maneira inversa ao critério utilizado.  

   **Melhor Caso**: *O(n)* , ocorre quando a estrutura já está ordenada.  

### Observações e Links úteis:  

   O Selection Sort faz no máximo O(n) trocas, por isso é vantajoso quando a escrita na memória é uma operação custosa.

   * A implementação vanilla **Não** é **estável**(**não** mantém a ordem dos elementos com chaves de ordenação iguais).
   * Pode ser modificado a fim de se tornar estável.
   * Não necessita de espaço extra.

   * [Vídeo 1](https://youtu.be/xWBP4lzkoyM)
   * [Vídeo 2](https://youtu.be/Ns4TPTC8whw)


## Insertion Sort

### Descrição:  
   
   Funciona como uma ordenação de cartas de um baralho.Assim, começando pelo segundo elemento da estrutura, este é guardado em uma variável auxiliar e a partir de uma posição a menos, o elemento n é inserido na posição n+1 enquanto que n seja menor(ou maior) que a variável auxiliar, e ao fim a variável auxliar é inserida na posição n+1.Dessa forma segue até o final da estrutura.

### Exemplo:  

   Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

   **Média**: *O(n^2)*  

   **Pior Caso**: *O(n^2)* , ocorre quando a estrutura está ordenada de maneira inversa ao critério utilizado.  

   **Melhor Caso**: *O(n)* , ocorre quando a estrutura já está ordenada.  

### Observações e Links úteis:  

   O insertion sort Sort é útil quando o número de elementos é pequeno, ou quando apenas alguns elementos estão desordenados em uma estrutura muito grande.

   * A implementação vanilla é **estável**(mantém a ordem dos elementos com chaves de ordenação iguais).
   * Não necessita de espaço extra.
   * Pode ser utilizado o algoritmo de busca binária a fim de se reduzir o tempo gasto na procura do lugar correto do elemento, a busca comum tem complexidade O(i) (na i-ésima posição) enquanto que usando a busca binária a complexidade de tempo da busca cai para O(log(i)).

   * [Vídeo 1](https://youtu.be/ROalU379l3U)
   * [Vídeo 2](https://youtu.be/OGzPmgsI-pQ)


## Shell Sort

### Descrição:  
   
   Sobretudo uma variação do Insertion Sort.A idéia principal do Shell sort é a troca de elementos distantes, h-ordenando(1) o array para um valor grande de h, à medida que ele vai diminuindona proporção(2) definida.Assim, quando h=1, é realizado um Insertion sort comum, porém necessitando de muito menos trocas.

   (1) Um array é dito h-ordenado quando todas as sublistas de i + múltiplos de h está ordenada.  
   (2) O aspecto mais importante do Shell sort é o uso de diferentes [proporções](http://en.wikipedia.org/wiki/Shellsort#Gap_sequences)(ou lacunas) na h-ordenação do array.Alguns são:  

    	* Incremento original de D.L. Shell: N/2^k (divisões consecutivas por 2).
    	* Incremento de Hibbard: 2^k-1 (potências de 2 menos um).
    	* Incremento de Knuth: (3^k-1)/2 (potências de 3 menos um sobre dois).
    	* Incremento de Sedgewick: {1, 5, 19, 41, 109, ...} (sequência definida experimentalmente).
   
### Exemplo:  

   Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

   A complexidade de tempo do Shell sort depende do tipo de lacuna usada na h-ordenação do array, pode variar de O(n*log(n)) à O(n*log^2(n)),porém geramente é considerada perto de O(n) e menor que O(n^2).O exemplo a seguir se refere à sequência original de Shell:

   **Média**: *O(n^2)*  

### Observações e Links úteis:  

   Assim como o insertion sort, O Shell sort é útil quando o conjunto de elementos está parcialmente ordenado.

   * A implementação vanilla **Não** é **estável**(**não** mantém a ordem dos elementos com chaves de ordenação iguais).
   * Não necessita de espaço extra.
   * Em média é 5 vezes rápido que o Bubble sort e 2 vezes mais rápido que o Insertion sort.

   * [Vídeo 1](https://youtu.be/CmPA7zE8mx0)
   * [Vídeo 2](https://youtu.be/SHcPqUe2GZM)

## Merge Sort

### Descrição:  
   
  Algoritmo do paradigma "Dividir e conquistar".Destarte, o array original de tamanho *n* é dividido em dois subarrays de intervalos [0, *n/2*] e (*n/2*, *n-1*] e então a função se chama recursivamente para as duas metades até que um dos subarrays tenha tamanho 1.Assim, quando um subarray unitário é encontrado a função *merge()* é chamada para fundir dois subarrays em um maior ordenado, começando pelos subarrays unitários e terminando nas duas metades originais fundidas no array original agora ordenado.

### Exemplo:  

   Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

   O Merge sort tem a mesma complexidade de tempo para os três casos - melhor, média e pior - pois sempre divide o array recursivamente.
   
   **Geral**: *O(nlog(n))*  

### Observações e Links úteis:  

   O Merge sort sobretudo é útil na ordenação de listas encadeadas, pois não necessita de tantos acessos randômicos na estrutura como o seu rival mais próximo, o *quick sort*.

   * A implementação vanilla é **estável**(mantém a ordem dos elementos com chaves de ordenação iguais).
   * Pela sua natureza recursiva e pela funçao *merge()*, o Merge sort necessita de O(n) espaço auxiliar.

   * [Vídeo 1](https://youtu.be/XaqR3G_NVoo)
   * [Vídeo 2](https://youtu.be/JSceec-wEyw)


## Quick Sort

### Descrição:  
   
  Assim como o Merge sort, é um algoritmo do paradigma "Dividir e conquistar".No Quick sort, é escolhido elemento como pivô(1) e então o array é particionado(1) em volta dele, em seguida são feitas chamadas recursivas da função para os subarrays à esquerda e direita do pivô.Dessa forma, quando todas as chamadas recursivas encontram um subarray unitário o array está ordenado.

  (1) O processo chave para o Quick sort é o processo de particionamento, que consiste em escolher um pivô e colocar todos os elementos menores que o pivô à sua esquerda e os maiores à sua direita.Existem diversos algoritmos de particionamento que escolhem um ou mais pivôs de maneira diferente, alguns são:

	*Particionamento de Lomuto: Escolhe o último elemento como pivô, o algoritmo mantém o index *i* enquanto varre o array com um index *j* tal que no final os elementos [low, i) são menores que o pivô e os elemementos [i,j] são maiores ou iguais que o pivô.Usando esse esquema, a complexidade de tempo do Quick sort quando o array já está ordenado cai para *O(n^2)*.

	*Particionamento Orignal de C.A.R. Hoare: Escolhe o primeiro elemento como pivô, e usa dois índices - um que aponta para o começo do array e outro para o final - que se movem em direção um ao outro até que é detectada uma inversão de elementos, que então são trocados.Quando os índices se encontram, o algoritmo para e retorna o índice final.É mais eficiente que o partionamento de Lomuto, uma vez que faz e média 3 vezes menos trocas que ele, porém também decai para a complexidade de tempo *O(n^2)* se o array já está ordenado.

	Existem outros particionamentos - como a mediana-de-três, pivô randômico, etc- que produzem resultados melhores em alguns casos específicos.

### Exemplo:  

   Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

   A complexidade de tempo do Quick Sort nos casos extremos depende da posição do pivô encontrado.
   
   **Média**: *O(nlog(n))*

   **Melhor Caso**: *(nlog(n))*, ocorre quando os pivôs encontrados são os elementos médios dos subarrays.

   **Piores Casos**: *(O(n^2))*, ocorre quando os pivôs encontrados estão nas bordas dos subarray,ou seja, o array já está ordenado(ou quase ordenado), está ordenado de maneira inversa, ou contém muitos elementos repetidos.

### Observações e Links úteis:  

   O Quick sort é preferido em contrapartida ao Merge sort para estruturas contíguas na memória, como arrays.

   * A implementação vanilla usando a maioia dos algoritmos de particionamento(como o de Lomuto e o de Hoare) **não** é **estável**(**não** mantém a ordem dos elementos com chaves de ordenação iguais).
   * Pode ser modificado a fim de se tornar estável.
   * Pela sua natureza recursiva, o Quick sort necessita de espaço auxiliar apenas para chamadas recursivas.

   * [Vídeo 1](https://youtu.be/ywWBy6J5gz8)
   * [Vídeo 2](https://youtu.be/PgBzjlCcFvc)

# Algoritmos de Busca

   Algoritmos utilizados para buscar elementos em estruturas, possibilidades de um problema, etc.

### Links úteis  

   * [geeksforgeeks](https://www.geeksforgeeks.org/searching-algorithms/) 
   * [wikipedia](https://en.wikipedia.org/wiki/Search_algorithm) 

TODO:

   - [x] Linear Search
   - [x] Binary Search
  
## Linear Search

   ![Busca Linear](http://peterstratton.com/img/LinearSearch/LinearSearch.png)

### Descrição:

   A concepção mais ingênua e simples possível de um algoritmo de busca.Na busca linear, a estrutura é percorrida elemento por elementos até que a chave de busca ser encontrada.

### Exemplo:  

   Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

   **Média**: *O(n)*  

### Observações e Links úteis:  
	
   Raramente é usado na prática, pois algoritmos como a busca binária tem desempenhos muito superiores.
   Pode ser usado em arrays desordenados, entretanto se o conjunto for ordenado o algoritmo pode ser modificado a fim de se obter um melhor desempenho.
   Por definição, ao começar a busca pelo primeiro elemento do conjunto será retornada a primeira ocorrência da chave no conjunto, e ao começar pelo último elemento a última ocorrência será retornada.

   * Não necessita de espaço extra.
   * [Vídeo](https://youtu.be/-PuqKbu9K3U)
  
   
## Binary Search

   ![Busca Binária](https://miro.medium.com/max/533/0*D_qH3srKzfov43Yl)

### Descrição:  

   Algoritmo que segue o paradigma 'Dividir e Conquistar'.Tendo por base um conjunto ordenado, o algoritmo checa se a chave de busca é igual ao elemento da metade do conjunto, se sim é retornado o index do elemento, caso contrário a busca é continuada na metade superior do array se a chave é maior que o elemento do meio, ou na metade inferior se a chave é menor que o elemento da metade.

### Exemplo:  

   Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

   **Média**: *O(nlog(n))*  

### Observações e Links úteis:  

   Por sua definição, a Busca Binária somente pode ser usada em conjuntos ordenados.
   Não retorna necessariamente a primeira ou última ocorrência da chave no conjunto, dessa forma necessita de adaptações a fim de retornar a primeira ou a última ocorrência da chave no conjunto.

   * Não necessita de espaço extra na sua implementação iterativa, no caso da implementação recursiva necessita de O(n*log(n)) de espaço extra na pilha de funções.

   * [Vídeo](https://youtu.be/iP897Z5Nerk)

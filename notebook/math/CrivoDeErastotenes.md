# Crivo de Eratóstenes

A imagem abaixo deixa a idéa do algoritmo bem clara. Tendo em vista que todo múltiplo de um número primo é um número composto, para saber se um número *n* é primo o algoritmo itera os primos até *sqrt(n)* e marca os múltiplos desse primo até *n*. No final da iteração principal, se *n* não for marcado ele é primo.


![](https://upload.wikimedia.org/wikipedia/commons/8/8c/New_Animation_Sieve_of_Eratosthenes.gif)

## Propriedades para otimização

### Todo primo (exceto o 2) é ímpar

Prova:

	* Seja um número par qualquer keN

	* Como k é par, k=2x, xeN, ou seja, k é múltiplo de 2(um primo)

	* k é composto.

Essa propriedade implica que somente é necessário checar os ímpares.

### iterar até sqrt(n)

Se um número *n* possuir divisores inteiros no intervalo (1, n), pelo menos um deles será menor ou igual à *sqrt(n)*. Por exemplo, 33 possui os divisores {3, 11}, dentre eles 3 é menor que *(int)sqrt(33)*=5.

Prova por indução forçada:

	* Aceite.

Usando essa propriedade, a iteração principal percorre somente até *sqrt(n)*.

### Usar menos memória

Visto que somente é necessário guardar um booleano (0's ou 1's) para cada número, o ideal seria tabalhar com um array de bits, assim para um número *n* seriam necessário somente *n* bits de memória. Porém, como não é trivial trabalhar com um array de bits em C, pode ser usado o **char** que tem 8 bits aka 1 byte de tamanho.


## Implementação exemplo em C
```c
#include <stdio.h>

/*O crivo é viável até 10^8*/
#define LIM 10000000

/*Vetor dos números, inicialmente todos são primos(setados em 0)*/
char nums[LIM];

void crivo(int lim) {
    int i, j;

    /*Itera até sqrt(lim)*/
    for (i = 3; (i * i) <= lim; i += 2) {
        /*O i atual é primo*/
        if (!(nums[i])) /*Marca todos os seus múltiplos*/
            for (j = (i * i); j <= lim; j += (2 * i)) nums[j] = 1;
    }
}

int main(int argc, char **argv) {
    int lim, n;
    /*Lê o limite dos números*/
    scanf("%d", &lim);

    /*0 e 1 não são primos*/
    nums[0] = nums[1] = 1;

    /*Preenche a tabela*/
    crivo(lim);

    /*Faz consultas na tabela*/
    while (scanf("%d", &n) != EOF) {
        /* Se um número for par(exceto o 2)
         * ou se estiver setado no crivo
         * ele não é primo */
        printf("%s\n",
               (((n != 2) && !(n % 2)) || (nums[n])) ? "não primo" : "primo");
    }

    return 0;
}
```

## Links

* Explicação do crivo
https://pt.wikipedia.org/wiki/Crivo_de_Eratóstenes

* Versão super otimizada para memória(usa os bits de um inteiro)
https://prrateekk.wordpress.com/2016/03/09/optimizing-sieve-of-eratosthenes/

## Problemas

https://www.urionlinejudge.com.br/judge/pt/problems/view/1221
https://www.urionlinejudge.com.br/judge/pt/problems/view/2180

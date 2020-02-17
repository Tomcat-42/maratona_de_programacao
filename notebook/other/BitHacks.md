# Bitwise hacks

Mais info:

https://www.codeproject.com/Questions/796603/How-to-set-reset-multiple-bits-in-C
https://codereview.stackexchange.com/questions/38182/counting-number-of-1s-and-0s-from-integer-with-bitwise-operation
https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
https://www.geeksforgeeks.org/bitwise-hacks-for-competitive-programming/
https://www.quora.com/How-do-I-understand-bitwise-tricks-in-C++-for-competitive-programming


## Setar um bit em um número(adicionar um elemento ao conjunto)

Para adicionar um número *n* ao conjunto A:
```cpp
A |= (1<<n);
```

## Remover um bit(remover elemento do conjunto)

Para remover um número *n* ao conjunto A:
```cpp
A &= (~(1<<n));
```
## Toggle um bit(remover/adicionar elemento do conjunto)

Para dar Toggle em um número *n* ao conjunto A:
```cpp
A ^= (1<<n);
```
## Checar se um bit está setado(checar se o elemento pertence ao conjunto)

Para checar se um elemento *n* pertence ao conjunto A:
```cpp
bool existe = A & (1<<n);
```

## Complemento de um(complementar do conjunto)

Seja B o complemento do conjunto A:
```cpp
B = ~A;
```

## complemento de dois

Seja B o complemento de 2 do número A:

```cpp
B = ~A + 1;
```

## Menor bit setado(menor valor do conjunto)

Para obter o menor valor *n* do conjunto A:

```cpp
n = A & (-A);
```

## Remover o menor bit setado(remover o menor valor do conjunto)

Para remover o menor valor do conjunto A:

```cpp
n = A & (A-1);
```
## Remover todos os bit no intervalo *n* até o menor bit setado:

Seja B o conjunto e A o conjunto sem os bits no intervalo *n* até o menor bit:

```cpp
B = ~((1<<n+1) - 1);
A &= B;
```

## Remover todos os bit no intervalo *n* até o maior bit setado:

Seja B o conjunto e A o conjunto sem os bits no intervalo *n* até o maior bit:

```cpp
B = ~((1<<n) - 1);
A &= B;
```

## Dividir/ multiplicar por 2:

Para dividir um número A por 2:
```cpp
A >>= 1
```

Para multiplicar um número A por 2:
```cpp
A <<= 1
```

## Mudar o caso de caracteres:

tolower():

```cpp
ch |= ' ';
```

toupper():
```cpp
ch &= '_';
```

## Tamanho do conjunto:
```cp
int count=0;
while(A) {
	count++;
	A&=(A-1)
}

//recursivo
int countbits(int A){
	if(n==0) return 0;
	return 1 + countbits(A&(A-1));
}
```

## Log de 2
```cpp
int log2(int x){
	int res=0;
	while(x>>1) res++;
	return res;
}
```

## checar se é potência de 2

```cpp
bool ispow2(int x){
	return (x && !(x & x-1));
}
```

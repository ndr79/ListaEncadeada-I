# Lista Encadeada Simples

## Descrição

Implementação de uma lista encadeada simples em linguagem C. Tem uma estrutura dinâmica 
compostas por nós, onde cada nó armazena um elemento e um ponteiro para o próximo nó da 
lista.

---

# Estrutura da Lista

```c
typedef int TipoItem;

typedef struct no {
    TipoItem info;
    struct no* prox;
}Lista;
```

Onde:
- **info** : armazena o valor do elemento;
- **prox** : aponta para o próximo nó da lista.

---

## Fucionalidades

O projeto implementa as seguintes operações:

|   Função    | Descrição |
|-------------|-----------|
| `inserir()` | Insere um novo elemento no início da lista. |
| `libera()`  | Libera toda a memória ocupada pela lista. |
| `vazia() `  | Verifica se a lista está vazia. |
| `imprimir()`| Exibe todos os elementos da lista. |
| `remover()` | Remove um elemento da lista. |
| `inverter()`| Cria uma nova lista contendo os elementos na ordem inversa da lista original. |
| `concatenar()`| Cria uma nova lista concatenando os elementos de duas lista. |
| `intercalar()`| Cria uma nova lista intercalando os elementos de duas listas. |

---

## Organização do projeto

```
.
|- main.c               # Protótipos das funções e definição da estrutura
|- listaEncadeada.h     # Implementação das funções
|- listaEncadeada.c     # Programa de teste
|- README.txt
```

---

## Compilação

Utilizando o GCC:

```bash
gcc *.c -o listaEncadeada
```

---

## Execução

Linux/macOS:

```bash
./listaEncadeada
```

Windows:

```cmd
listaEncadeada.exe
```

---

## Autor

André Brandão
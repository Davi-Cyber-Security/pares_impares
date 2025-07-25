<div align="center">

![MIT License](https://img.shields.io/badge/license-MIT-green.svg)
![C Language](https://img.shields.io/badge/language-C-blue.svg)
![Status](https://img.shields.io/badge/status-ativo-brightgreen)

# 🔢 Identificador de Números Pares e Ímpares

</div>

---

### 📌 Descrição

Este projeto em linguagem **C** solicita ao usuário a entrada de **10 números inteiros** e:

- 🟢 Imprime os **3 primeiros números pares**
- 🔴 Imprime os **2 últimos números ímpares**

Além disso, o programa realiza validação de entrada para garantir que apenas números válidos sejam aceitos.

---

### 🧠 Lógica do programa

1. Solicita 10 números inteiros do usuário
2. Armazena os números em um vetor
3. Percorre o vetor:
   - Da esquerda para a direita → mostra os 3 **primeiros pares**
   - Da direita para a esquerda → mostra os 2 **últimos ímpares**
4. Exibe os resultados no terminal

---

### 🧮 Exemplo de execução
Digite um numero de 1 até 10: 10
Digite um numero de 2 até 10: 8
Digite um numero de 3 até 10: 5
Digite um numero de 4 até 10: 7
Digite um numero de 5 até 10: 9
Digite um numero de 6 até 10: 2
Digite um numero de 7 até 10: 5
Digite um numero de 8 até 10: 1
Digite um numero de 9 até 10: 6
Digite um numero de 10 até 10: 4

Os três primeiros 3 números pares são: 10 8 2 

Os dois últimos números ímpares são: 1 5


### ⚙️ Como compilar e executar

Use o `gcc` (ou qualquer compilador C):

```bash
gcc -o identificador identificador.c
./identificador
```
Ou utilize a IDE online acessando o site abaixo:
```bash
https://www.onlinegdb.com/online_c_compiler
```

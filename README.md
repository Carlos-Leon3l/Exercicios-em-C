📌 README - Projeto Pilha em C
Este projeto contém implementações de uma estrutura de pilha em C, com exemplos de uso em diferentes exercícios. Abaixo está uma breve descrição de cada arquivo:

📂 pilha.h
Definição da estrutura da pilha: Contém a implementação básica de uma pilha (stack) com funções como empilha, desempilha, cheiap, vaziap, entre outras.

Uso: Serve como biblioteca para os outros arquivos (#include "pilha.h").

📂 pilha.c
Exemplo de uso da pilha:

Lê números digitados pelo usuário e os empilha.
Mostra a pilha na ordem de entrada.

📂 pilha_exercicio_2.c
Modificação do pilha.c:

Ordena os números em ordem decrescente.
Remove valores duplicados da pilha final.

📂 pilha_exercicio_3.c
Inversão de palavras:

Lê uma frase do usuário.
Inverte cada palavra individualmente (ex: "hello world" → "olleh dlrow").

📂 pilha_exercicio_4.c
Verificador de balanceamento:

Lê uma cadeia de caracteres com { } , [ ] , ( ).
Verifica se os pares estão balanceados (ex: {[()]} → válido; {[}] → inválido).

📂 pilha_exercicio_5.c
Pilha de strings:

Lê 3 números do usuário.
Armazena-as em uma pilha e depois as exibe em ordem inversa.

🛠 Como compilar e executar?

Observação: Esses arquivos foram desenvolvidos originalmente no Dev-C++, mas podem ser usados em outros compiladores/IDEs.

No VS Code : Instale a xtensão C/C++ e um compilador (ex: MinGW no Windows).

✂️ Nota: Todos os arquivos dependem do pilha.h para funcionar. Certifique-se de que ele está no mesmo diretório durante a compilação.
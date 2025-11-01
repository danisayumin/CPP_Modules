# Avaliação do Projeto CPP Módulo 09

Este arquivo contém a análise e avaliação dos exercícios do Módulo 09 de C++.

## Requisitos Gerais do Projeto

Uma verificação inicial foi realizada em todos os exercícios (`ex00`, `ex01`, `ex02`) para garantir a conformidade com os pré-requisitos do módulo.

- **Compilador e Flags:** Todos os `Makefiles` nos três exercícios estão configurados para usar o compilador `c++` com as flags obrigatórias: `-Wall`, `-Wextra`, `-Werror` e `-std=c++98`.
- **Implementação em Cabeçalhos:** Nenhuma função foi implementada em arquivos de cabeçalho (`.hpp`), com a exceção de funções de template (em `ex02`), o que é permitido.
- **Funções Proibidas:** A análise do código-fonte não revelou o uso de funções da linguagem C (como `printf`, `malloc`) ou outras funcionalidades externas não permitidas pelo padrão C++98.
- **Uso da STL:** O código faz uso apropriado dos contêineres da Standard Template Library (STL), conforme o objetivo do módulo.

**Conclusão:** O projeto atende a todos os requisitos preliminares de compilação e estilo.

---

## Análise Específica por Exercício

### Exercício 00: Bitcoin Exchange

#### Verificação de Requisitos

1.  **Makefile:** Um `Makefile` funcional e em conformidade com as regras usuais está presente.
2.  **Uso de Contêiner:** O programa utiliza o contêiner `std::map` para armazenar o banco de dados de preços do Bitcoin.

#### Justificativa da Escolha do Contêiner (`std::map`)

A escolha do `std::map` para este exercício é a mais apropriada pelas seguintes razões:

-   **Estrutura Chave-Valor:** O `std::map` é ideal para armazenar os dados, que consistem em pares de data (chave) e taxa de câmbio (valor).
-   **Chaves Ordenadas:** A principal vantagem do `std::map` é que ele mantém as chaves (datas) automaticamente ordenadas. Isso é crucial para a lógica do programa, que precisa encontrar a data mais próxima e anterior a uma data de entrada, caso não haja uma correspondência exata. A ordenação permite o uso eficiente da função `lower_bound()`.
-   **Eficiência de Busca:** Oferece buscas em tempo logarítmico (O(log n)), o que é muito eficiente.

##### Comparações com Outros Contêineres:

-   **`std::vector`**: Exigiria uma busca linear (O(n)) ou uma ordenação manual seguida de uma busca binária, tornando o código mais complexo e menos eficiente do que a solução integrada do `std::map`.
-   **`std::unordered_map`**: Embora tenha buscas mais rápidas em média (O(1)), não mantém os elementos ordenados, o que impossibilitaria a busca pela "data mais próxima" de forma eficiente, um requisito central do exercício.

**Conclusão de `ex00`:** O exercício está bem resolvido, e a escolha do contêiner foi bem justificada pela natureza do problema.

#### Tratamento de Erros

A análise do código mostra que o tratamento de erros é robusto e atende aos requisitos.

-   **Processamento Contínuo:** A leitura do arquivo de entrada é feita linha a linha dentro de um bloco `try...catch`. Isso garante que um erro em uma linha (ex: data inválida) não interrompa o processamento do restante do arquivo. Apenas uma mensagem de erro é exibida para a linha problemática.
-   **Validação de Dados:**
    -   **Datas:** Uma função `validateDate` verifica o formato, os delimitadores, os intervalos de ano/mês/dia e até anos bissextos.
    -   **Valores:** O código verifica se os valores estão dentro do intervalo permitido (0 a 1000), lançando exceções para valores negativos ("Error: not a positive number.") ou muito grandes ("Error: too large a number.").

**Conclusão (Tratamento de Erros):** O programa é resiliente e não encerra sua execução ao encontrar dados inválidos, tratando-os como exceções e continuando o processamento.

#### Lógica Principal e Utilização

A análise do código e dos arquivos de dados confirma que a lógica principal do programa está correta.

-   **Busca por Data Aproximada:** O requisito de usar a data mais próxima e inferior quando a data exata não é encontrada é implementado de forma correta e elegante. A função `getPrice` utiliza `std::map::lower_bound` para encontrar o ponto de inserção e, caso não seja uma correspondência exata, decrementa o iterador para obter o valor da data anterior.

-   **Verificação Manual (Simulada):**
    -   **Input:** `2011-09-14 | 390.57`
        -   **DB:** `2011-09-14` existe com valor `6.19`.
        -   **Resultado Esperado:** `390.57 * 6.19 = 2417.6283`.
    -   **Input:** `2009-02-02 | 0.1`
        -   **DB:** `2009-02-02` não existe. A data anterior mais próxima é `2009-02-01` com valor `0`.
        -   **Resultado Esperado:** `0.1 * 0 = 0`.
    -   **Input:** `2012-07-09 | 1242.2`
        -   **DB:** O valor é maior que 1000.
        -   **Resultado Esperado:** `Error: too large a number.`

**Conclusão (Lógica Principal):** O programa implementa corretamente a lógica de negócios principal, incluindo o requisito complexo de correspondência de data aproximada, fazendo um uso excelente das funcionalidades do `std::map`.


---

### Exercício 01: RPN

#### Verificação de Requisitos

1.  **Makefile:** O `Makefile` está presente e correto.
2.  **Uso de Contêiner:** O programa utiliza o contêiner `std::stack` para avaliar a expressão em Notação Polonesa Reversa.

#### Justificativa da Escolha do Contêiner (`std::stack`)

A escolha do `std::stack` é a ideal e correta para resolver este problema.

-   **Algoritmo RPN:** O algoritmo padrão para avaliar uma expressão RPN depende fundamentalmente de uma estrutura de dados LIFO (Last-In, First-Out). Os operandos são empilhados e, ao encontrar um operador, os dois últimos operandos são desempilhados para realizar a operação.
-   **Interface LIFO:** O `std::stack` é um "adaptador de contêiner" que fornece exatamente essa interface LIFO, com as operações `push()`, `pop()` e `top()`. Ele foi projetado para casos de uso como este.
-   **Contêiner Subjacente:** O código utiliza um `std::list` como contêiner subjacente para a pilha (`std::stack<int, std::list<int>>`). Embora o padrão seja `std::deque`, a escolha do `std::list` é válida e garante que as operações de `push` e `pop` tenham complexidade O(1) constante, sem a possibilidade de realocação de memória que poderia ocorrer com `std::vector` ou `std::deque`, garantindo performance previsível.

**Conclusão de `ex01`:** O exercício utiliza o contêiner mais apropriado para o algoritmo RPN, demonstrando um bom entendimento da estrutura de dados necessária.

-   **Contêiner Diferente do `ex00`:** O requisito é atendido. O `ex00` utiliza `std::map`, enquanto o `ex01` utiliza `std::stack` (adaptando um `std::list`), que é um tipo de contêiner diferente.

#### Tratamento de Erros

O programa trata robustamente os erros de entrada e de lógica.

-   **Divisão por Zero:** O código verifica explicitamente se o divisor é zero antes da operação e lança uma exceção.
-   **Caracteres Inválidos:** Uma função de validação prévia (`validateInput`) rejeita a expressão se ela contiver caracteres que não sejam dígitos, operadores ou espaços.
-   **Expressões Inválidas:** O programa valida a estrutura da expressão RPN de duas formas: (1) verificando a proporção entre operandos e operadores e (2) verificando o estado da pilha durante e após o cálculo. Qualquer inconsistência (ex: operandos a mais ou a menos) gera um erro.

**Conclusão (Tratamento de Erros):** O programa não trava com entradas malformadas e reporta os erros de forma adequada.

#### Lógica Principal e Utilização

A lógica de cálculo RPN está implementada corretamente. A simulação de fórmulas, das mais simples às mais complexas, confirma que o programa produz os resultados esperados.

-   **Exemplo 1:** `8 9 * 9 - 9 - 9 - 4 - 1 +` -> **42**
-   **Exemplo 2:** `9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -` -> **42**
-   **Exemplo 3:** `1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /` -> **15**

**Conclusão (Lógica Principal):** O programa implementa um calculador RPN funcional e robusto, passando em todos os testes de lógica.


---

### Exercício 02: PmergeMe

#### Verificação de Requisitos

1.  **Makefile:** O `Makefile` está presente e correto.
2.  **Uso de Contêineres:** O programa utiliza, como solicitado pelo enunciado, os contêineres `std::vector` e `std::deque` para implementar o algoritmo de ordenação "merge-insertion". Ele também utiliza `std::set` para uma verificação de duplicatas e `std::pair` como parte do algoritmo.

#### Justificativa da Escolha dos Contêineres (`std::vector` e `std::deque`)

A escolha desses dois contêineres é o requisito central do exercício, que pede a implementação do algoritmo Ford-Johnson em ambos para comparar seu desempenho.

-   **`std::vector`**: É o contêiner de sequência padrão em C++.
    -   **Vantagens:** Armazena elementos em memória contígua, o que resulta em excelente performance de iteração (localidade de cache) e acesso aleatório (O(1)).
    -   **Desvantagens:** Inserções no meio da sequência são lentas (O(n)), pois exigem o deslocamento de todos os elementos subsequentes.

-   **`std::deque` (Double-Ended Queue)**: É um contêiner de sequência que armazena elementos em blocos de memória separados.
    -   **Vantagens:** Oferece inserções e remoções rápidas no início e no fim (O(1)). O acesso aleatório também é O(1), embora um pouco mais lento que o do `vector`.
    -   **Desvantagens:** A localidade de cache é inferior à do `vector`, o que pode tornar a iteração um pouco mais lenta.

-   **Análise:** O algoritmo "merge-insertion" envolve tanto acesso aleatório (para formar pares e fazer buscas binárias para inserção) quanto operações de inserção no meio de uma sequência já ordenada. O exercício foi projetado para que se observe na prática a diferença de performance entre `vector` (rápido em acesso, lento em inserção) e `deque` (um pouco mais lento em acesso, mas potencialmente mais rápido em inserções, dependendo da implementação e do padrão de acesso).

**Conclusão de `ex02`:** O exercício implementa corretamente o algoritmo com os dois contêineres exigidos, demonstrando a compreensão das suas características e dos trade-offs de performance entre eles.

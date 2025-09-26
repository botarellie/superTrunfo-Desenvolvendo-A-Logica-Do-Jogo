# superTrunfo-Desenvolvendo-A-Logica-Do-Jogo
Tema 3 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo (DESAFIO NÍVEL AVENTUREIRO)

Iplementarção de um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Utilizei estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo. 


Requisitos funcionais

Menu Interativo: 

Primeiro o usuário deve fornecer as informações sobre as duas cartas que irão disputar entre si a comparação do atributo escolhido, que será exibido na tela.

A segunda etapa do jogo será a escolha do atributo que o programa deve comparar, será exibido a lista abaixo, podendo escolher e inserir no programa o número do atributo escolhido. Por exemplo, 2 para o atributo Área.

Caso o usuário selecione qualquer opção diferente das disponíveis, o programa entrará na opção default e exibirá a mensagem "Opção inválida!"

************************ MENU ************************

Escolha o número do atributo que deseja comparar:

1.População
2.Área
3.PIB
4.Número de Pontos Turísticos
5.Densidade Demográfica

Após a escolha do atributo, o programa fará a comparação dos atributos compatíveis entre as duas cartas,
 
Vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.

O programa exibirá o nome dos países inseridos pelo usuário para as duas cartas, todos os seus atributos, e o atributo escolhido para comparação.

Os países comparados serão: FRANÇA vs JAPÃO

Atributos FRANÇA
---------------------------------------------------------

Carta A01: FRANÇA
População do país: 456132456
Área do país: 456789792.00
PIB do país: 54.00
Número de pontos turísticos do país: 450
Densidade Populacional: 1.00 hab/km²
PIB per Capita: 8446897.00 reais
Densidade demográfica: 1.00
---------------------------------------------------------

Atributos JAPÃO
---------------------------------------------------------

Carta B04: JAPÃO
População do país: 4546465
Área do país: 123456.00
PIB do país: 45.00
Número de pontos turísticos do país: 120
Densidade Populacional: 36.83 hab/km²
PIB per Capita: 101032.55 reais
Densidade demográfica: 36.83
---------------------------------------------------------

O atributo escolhido foi: Número de Pontos Turísticos

Após a comparação, o programa mostrará a carta vencedora com a seguinte mensagem:

A carta FRANÇA venceu!
FIM

Em caso de empate, o programa exibirá a mensagem "Empate!".

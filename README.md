# MATRIX
## Programa criado em c++ para familiarização do uso do VSCode e para fins educativos.

Este programa tem como objetivo criar um efeito visual semelhante os simbolos verdes que podem ser vistas recorrentemente nos filmes **Matrix**.

Para utilizar e visualizar o programa, favor compilar o codigo em g++ e execute o .exe resultante em seu terminal de preferencia

### A seguir terá uma explicação de como personalizar o codigo.

Para customização dos caracteres que aparecem, consulte a [tabela ASCII](https://www.matematica.pt/util/resumos/tabela-ascii.php). 

Determine qual será o caracter inicial e final, e anote os seus valores. ( De padrão o programa utiliza os valores 33 e 63 )

Na linha 30 tem a seguinte linha de codigo: **caRow[i] = GetChar(j + i*i, 33, 30);**

O numero 33 representa o caracter base, ou seja, não haverá nenhum caracter que esteja abaixo do valor 33 no efeito visual.

O numero 30 representa quantos caracteres será o alcance do programa, em outras palavras, o programa irá utilizar apenas caracters cujos valores  estão entre 33 e 33+30 (63) da tabela ascii.

Então para alterar o programa para utilizar a faixa de caracteres de sua preferencia, **Substitua o numero 33 pelo valor de seu Caracter Inicial. E substitua o valor 30 por [seu valor final - seu valor inicial].**

Como exemplo, eu recomendaria os caracteres entre 185 e 206 da tabela ascii para ter um efeito visual mais "alienígena". Então o codigo na linha 30 seria: **caRow[i] = GetChar(j + i*i, 185, 21);**

Outra possível personalização seria a velocidade. Na linha 63 podemos encontrar: **std::this_thread::sleep_for(std::chrono::milliseconds(20));**

Alterando o valor de 20, você pode deixar o programa mais lento ou mais rápido. Quanto maior o valor, mais lento será a execução do programa em Milisegundos

### Este é meu primeiro projeto, agradeço por ter lido até o final, a todos os meus amigos que me ajudaram e a minha familia que está me apoiando neste inicio de minha jornada.

- ArtuTerra

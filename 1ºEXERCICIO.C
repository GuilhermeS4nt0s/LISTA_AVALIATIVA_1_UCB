
#include <stdio.h>

int main() {
    // Ano desejado
    int ano;
    
    // Lista de anos em que ocorreram Jogos Olímpicos de Verão
    int jogos_olimpicos_verao[] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};
    
    // Tamanho da lista de anos dos Jogos Olímpicos de Verão
    int tamanho_jogos_olimpicos_verao = sizeof(jogos_olimpicos_verao) / sizeof(jogos_olimpicos_verao[0]);
    
    // Lista de anos em que ocorreu a Copa do Mundo de Futebol
    int copa_do_mundo[] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018};
    
    // Tamanho da lista de anos da Copa do Mundo de Futebol
    int tamanho_copa_do_mundo = sizeof(copa_do_mundo) / sizeof(copa_do_mundo[0]);
    
    // Solicita ao usuário que insira o ano desejado
    printf("Digite o ano que deseja verificar: ");
    scanf("%d", &ano);
    
    // Verifica se ocorreu a Copa do Mundo de Futebol no ano desejado
    int ocorreu_copa_do_mundo = 0;
    for (int i = 0; i < tamanho_copa_do_mundo; i++) {
        if (ano == copa_do_mundo[i]) {
            ocorreu_copa_do_mundo = 1;
            break;
        }
    }
    
    // Verifica se ocorreram Jogos Olímpicos de Verão no ano desejado
    int ocorreram_jogos_olimpicos_verao = 0;
    for (int i = 0; i < tamanho_jogos_olimpicos_verao; i++) {
        if (ano == jogos_olimpicos_verao[i]) {
            ocorreram_jogos_olimpicos_verao = 1;
            break;
        }
    }
    
    // Exibe os resultados
    if (ocorreu_copa_do_mundo) {
        printf("A Copa do Mundo de Futebol ocorreu em %d.\n", ano);
    }
    if (ocorreram_jogos_olimpicos_verao) {
        printf("Os Jogos Olímpicos de Verão ocorreram em %d.\n", ano);
    }
    if (!ocorreu_copa_do_mundo && !ocorreram_jogos_olimpicos_verao) {
        printf("Não ocorreu a Copa do Mundo de Futebol nem os Jogos Olímpicos de Verão em %d.\n", ano);
    }
    
    return 0;
}

// Disciplina de lógica de programação
// Universidade Anhembi Morumbi - Big Data e Inteligência Analítica

// https://raw.githubusercontent.com/euvictorhfs/IBGE_programa_estatistica_acidentes_transito/main/programa_v1-0.c
// Percebemos o quão importante é você estar ciente de como é o funcionamento dos comandos em lógica de programação.
// Cada comando possui um propósito e com ele podemos perceber qual é o melhor comando para realizar determinada atividade.
// Neste sentido, analisemos o caso problematizador.
// O IBGE (Instituto Brasileiro de Geografia e Estatística) desejou realizar uma estatística nas cidades pertencentes ao estado do Paraná.
// O objetivo é verificar dados sobre acidentes de trânsito.
// Neste estudo, precisava-se obter alguns dados, que podemos verificar abaixo:
// * código da cidade;
// * número de veículos de passeio;
// * número de acidentes de trânsito com vítimas.
// Desejava-se saber ainda:
// * qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem;
// * qual a média de veículos nas cidades juntas;
// * qual a média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio.
// Analisando, assim, o nosso caso problematizador, você, aluno(a), deverá realizar um algoritmo que resolva este problema.
// Utilize-se de todos os conceitos aprendidos até o presente momento.
// Bom trabalho.

#include <stdio.h>

int main(){

// declaração de variáveis cidades
int sum_cidades = 0;
int cidade_maior_indice = 0;
int cidade_menor_indice = 0;
int cidade_menos_acidentes = 0;
int cidade_mais_acidentes = 0;
int sum_cidades_menos_2000_veiculos_passeio = 0;

// declaração de variáveis veículos
int sum_veiculos_passeio = 0;
float avg_veiculos_por_cidades = 0;

// declaração de variáveis acidentes
int sum_acidentes_com_vitimas = 0;
float avg_acidentes_cidades_menos_2000_veiculos_passeio = 0;
int sum_acidentes_cidades_menos_2000_veiculos_passeio = 0;
float acidentes_menor_indice = 0;
float acidentes_maior_indice = 0;
int indice_menos_acidentes = 0;
int indice_mais_acidentes = 0;

// sequencia de dados
int continuar = 1;

while(continuar == 1) {
// código da cidade
printf("Insira o código da cidade do Paraná: ");
int cidade;
scanf("%d", &cidade);

// veículos de passeio
printf("Insira o total de veículos de passeio: ");
int veiculos;
scanf("%d", &veiculos);

// acidentes com vítimas:
printf("Insira o total de acidentes de trânsito com vítimas: ");
int acidentes;
scanf("%d", &acidentes);

sum_veiculos_passeio += veiculos;
sum_acidentes_com_vitimas += acidentes;
sum_cidades += 1;

// cidades com mais e menos acidentes
if (acidentes < cidade_menor_indice | cidade_menor_indice == 0){
cidade_menos_acidentes = cidade;
cidade_menor_indice = acidentes;
}
if (acidentes > cidade_maior_indice | cidade_maior_indice == 0){
cidade_mais_acidentes = cidade;
cidade_maior_indice = acidentes;
}
// média de acidentes por veículos de passeio nas cidades com menos de 2000 habitantes
if (veiculos < 2000){
sum_acidentes_cidades_menos_2000_veiculos_passeio += acidentes;
sum_cidades_menos_2000_veiculos_passeio += 1;
}
// Maior e menor índice de acidentes
if (acidentes < acidentes_menor_indice | acidentes_menor_indice == 0){
indice_mais_acidentes = cidade;
acidentes_menor_indice = acidentes;
}
if (acidentes > acidentes_maior_indice | acidentes_maior_indice == 0){
indice_menos_acidentes = cidade;
acidentes_maior_indice = acidentes;
}
printf("Para continuar digite 1 ou qualquer outra tecla para finalizar: ");
scanf("%d", &continuar);
}

avg_veiculos_por_cidades = sum_veiculos_passeio / sum_cidades;
avg_acidentes_cidades_menos_2000_veiculos_passeio = sum_acidentes_cidades_menos_2000_veiculos_passeio / sum_cidades_menos_2000_veiculos_passeio;

printf("\nTotal de veículos de passeio: %d", sum_veiculos_passeio);
printf("\nTotal de acidentes de trânsito com vítimas: %d", sum_acidentes_com_vitimas);
printf("\nMédia de veículos nas cidades juntas: %f", avg_veiculos_por_cidades);
printf("\nMedia de acidentes em cidades com menos de 2000 veiculos de passeio: %f", avg_acidentes_cidades_menos_2000_veiculos_passeio);
printf("\nMenor índice de acidentes: %f", acidentes_menor_indice);
printf("\nCidade com menos acidentes: %d", cidade_menos_acidentes);
printf("\nMaior índice de acidentes: %f", acidentes_maior_indice);
printf("\nCidade com mais acidentes: %d", cidade_mais_acidentes);
}

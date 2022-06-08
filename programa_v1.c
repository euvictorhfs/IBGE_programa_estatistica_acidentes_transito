// Disciplina de lógica de programação
// Universidade Anhembi Morumbi - Big Data e Inteligência Analítica
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
int main()
{
// declaração de variáveis cidades
sum_total_cidades = 0;
    
    int cidades_totais = 0;
    float cidades_mais_acidentes = 0;
    float cidades_menos_acidentes = 0;
    int cidades_abaixo_2000_veiculos = 0;
    
// declaração de variáveis veículos
sum_total_veiculos = 0;

    int veiculos_passeio_totais = 0;
    float veiculos_passeio_por_cidade = 0;
    int veiculos_passeio_abaixo_2000_avg = 0;
    
// declaração de variáveis acidentes
sum_total_acidentes = 0;
    
    int acidentes_vitimas_totais = 0;
    int acidentes_vitimas_maior_indice = 0;
    int acidentes_vitimas_menor_indice = 0;
    int acidentes_vitimas_abaixo_2000_avg = 0;
    float acidentes_vitimas_totais_por_cidades = 0;

// sequencia de dados
int seq_dados = 1;

while (seq_dados ==1){
    // código da cidade
    printf("Digite o código da cidade: ");
    int cidade;
    scanf("%d", &cidade);

    // veículos de passeio
    printf("Digite a quantidade de veículos de passeio: ");
    int veiculos;
    scanf("%d", &veiculos);
    
    // Acidentes de trânsito com vítimas
    printf("Digite o número de acidentes de trânsito com vítimas: ");
    int acidentes;
    scanf("%d", &acidentes);
    
    sum_total_veiculos += veiculos;
    sum_total_cidades += 1;
    
    if (acidentes < cidade_poucos_acidentes | cidade_poucos_acidentes == 0){
        cidade_poucos_acidentes = cidade;
        cidade_poucos_acidentes = acidente;
    }
    if (cidade > cidade_muitos_acidentes | cidade_muitos_acidentes == 0){
        cidade_muitos_acidentes = cidade;
        cidade_muitos_acidentes = acidente;
    }
    if (veiculo < 2000){
        avg_acidentes_abaixo_2000 += acidente;
        avg_veiculos_por_cidade_abaixo_2000 += 1;
    }
    if (acidente < cidade_poucos_acidentes | cidade_poucos_acidentes == 0){
        
    }
    se (acidentes < menor_indice_acidentes ou menor_indice_acidentes == 0) {
codigo_menos_acidente = codigo
menor_indice_acidentes = acidentes
        }   
// Qual o maior índice de acidente de trânsito;
printf("\nMaior índice de acidentes: ", maior_indice_acidentes)

// Qual cidade pertence o maior índice de acidente de trânsito;
printf("\nCidade com mais acidentes: ", codigo_maior_cidade)

// Qual o menor índice de acidente de trânsito;
printf("\nMenor índice de acidentes: ", menor_indice_acidentes)

// Qual cidade pertence o menor índice de acidente de trânsito;
printf("\nCidade com menos acidentes: ", codigo_menor_cidade)

// Qual a média de veículos nas cidades juntas;
printf("\nMédia de veículos: ", media_de_veiculos_cidades)

// Qual a média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio.
printf("\nMédia de acidentes em cidades com menos de 2000 veículos de passeio: ", media_de_acidentes_menor_2000)
printf("\n")
}
}

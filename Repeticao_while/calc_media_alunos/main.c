#include <stdio.h>
/*
Como funciona:
A função calcMedia calcula a média de duas notas.
A função calcMediaTotal calcula a média final da turma, dividindo a soma total das médias individuais pelo número de alunos.
No main, o programa solicita o número de alunos na turma. Um loop for então pede as duas notas para cada aluno, calcula e exibe a média individual. As médias individuais são acumuladas para, ao final do loop, calcular e exibir a média geral da turma.
*/
int calcMedia(float nota1, float nota2){
    // Esta função calcula a média simples de duas notas.
    // Ela recebe duas notas (nota1 e nota2) do tipo float.
    // A fórmula é: (nota1 + nota2) / 2.0.
    // A função retorna um 'int', o que pode causar perda de precisão
    // se a média não for um número inteiro. Seria melhor que retornasse 'float'.
    return (nota1 + nota2) / 2.0;
}

float calcMediaTotal(float mediaTotal, int alunos){
    // Esta função calcula a média da turma.
    // Ela recebe a soma de todas as médias individuais ('mediaTotal') e o número de 'alunos'.
    // A fórmula é: mediaTotal / alunos.
    // A função retorna um 'float', o que é apropriado para médias.
    return mediaTotal / alunos;
}

int main()
{
    // Declaração de variáveis. 'alunos' para o número de estudantes,
    // 'nota1' e 'nota2' para as notas individuais, 'media' para a média
    // de cada aluno e 'mediaTotal' para a soma das médias.
    int alunos;
    float nota1, nota2, media, mediaTotal;

    // Inicializa 'mediaTotal' com 0.0 para garantir que a soma comece do zero.
    mediaTotal = 0.0;

    // Solicita ao usuário o número de alunos na turma.
    printf("Quantos alunos tem na turma?");
    scanf("%i", &alunos);

    // O código inclui um comentário útil sobre o uso de 'while' ou 'for'.
    
    // Inicia um loop 'for' para iterar sobre cada aluno.
    // O loop se repete 'alunos' vezes, de 0 até 'alunos-1'.
    for(int i = 0; i < alunos; i++){
        printf("\n--ALUNO %i--", i + 1);

        // Pede e lê a primeira nota do aluno.
        printf("\nNota 1:");
        scanf("%f", &nota1);

        // Pede e lê a segunda nota do aluno.
        printf("Nota 2:");
        scanf("%f", &nota2);

        // Chama a função 'calcMedia' para obter a média do aluno.
        // O resultado é armazenado na variável 'media'.
        media = calcMedia(nota1, nota2);

        // Este bloco de código verifica se a média é maior que zero.
        // Se for, adiciona a média à 'mediaTotal'.
        // Isso é útil para evitar a soma de médias negativas, mas pode ser simplificado.
        if(media > 0){
            mediaTotal += media;
        }
        
        // Imprime a média do aluno atual com uma casa decimal.
        printf("Media aluno %i --> %.1f", i + 1, media);
    }
    
    // Após o loop, calcula e imprime a média total da turma.
    // A função 'calcMediaTotal' é chamada diretamente dentro do 'printf'.
    // A média total é formatada para duas casas decimais.
    printf("\nA media total da turma --> %.2f", calcMediaTotal(mediaTotal, alunos));

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;

}
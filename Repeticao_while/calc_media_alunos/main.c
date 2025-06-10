int calcMedia(float nota1, float nota2){
    return (nota1 + nota2) / 2.0;
}

float calcMediaTotal(float mediaTotal, int alunos){
    return mediaTotal / alunos;
}

int main()
{
    int alunos;
    float nota1,nota2, media,mediaTotal;

    printf("Quantos alunos tem na turma?");
    scanf("%i", &alunos);

    //pode ser feito como while ou for

    //int i fora do for se precisar utilizar ele fora
    for(int i = 0;i < alunos;i++){ //int i dentro quando só precisar dentro
        printf("\n--ALUNO %i--",i + 1);

        printf("\nNota 1:");
        scanf("%f",&nota1);

        printf("Nota 2:");
        scanf("%f",&nota2);

        media = calcMedia(nota1,nota2);

        if(media > 0){
            mediaTotal+=media;
        }
        printf("Media aluno %i --> %.1f",i + 1,media);
    }

    printf("\nA media total da turma --> %.2f",calcMediaTotal(mediaTotal,alunos)); //pode ser feito chamando a função direto

    return 0;
}

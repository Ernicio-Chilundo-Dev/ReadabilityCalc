#include <stdio.h>
#include <math.h>

int main(void)
{
    int letters, words, sentences;

    printf("How many letters does the text have: ");
    scanf(" %d\n",&letters);

    printf("How many words does the text have?: ");
    scanf(" %d\n", &words);

    printf("How many senteces does the text have?: ");
    scanf(" %d\n", &sentences);

    // Calculete L and S
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    printf("\nL (Letters per 100 words) = %.2f\n", L);
    printf("S (Sentences per 100 words) = %.2f\n", S);

    // Apply the formula

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
}
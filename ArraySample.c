#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void SentenceReading(char* sentence);
int ArrayLenght(char* sentence);

int main()
{
    int lenght;
    char *sentence = (char*)malloc(MAX * sizeof(char));
    printf("%s","Please enter a sentence: ");
    SentenceReading(sentence);
    lenght = ArrayLenght(sentence);
    printf("\nLenght of Array: %d",lenght);
    free(sentence);

    return 0;
}

void SentenceReading(char *sentence)
{
    int i = 0;
    scanf("%c",&sentence[i]);
    while((sentence[i] != '\n') && i <= MAX)
    {
        i++;
        scanf("%c",&sentence[i]);
    }
    sentence[i] = '\0';

    for(i = 0; sentence[i] != '\0'; i++)
    {
        printf("%c",sentence[i]);
    }
}

int ArrayLenght(char* sentence)
{
    int i;
    for(i = 0; sentence[i] != '\0'; i++);

    return i;
}

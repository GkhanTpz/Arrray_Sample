#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void sentenceReading(char* sentence);
int arrayLenght(char* sentence);

int main()
{
    int lenght;
    char* sentence = (char*)malloc(MAX * sizeof(char));
    printf("%s","Please enter a sentence: ");
    sentenceReading(sentence);
    lenght = arrayLenght(sentence);
    printf("\nLenght of Array: %d",lenght);
    free(sentence);

    return 0;
}

void sentenceReading(char *sentence)
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

int arrayLenght(char* sentence)
{
    int i;
    for(i = 0; sentence[i] != '\0'; i++);

    return i;
}

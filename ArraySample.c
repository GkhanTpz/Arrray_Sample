#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void sentenceReading(char sentence[MAX]);
int arrayLenght(char sentence[MAX]);

int main()
{
    int lenght;
    char sentence[MAX];
    printf("%s","Lutfen bir cumle giriniz: ");
    sentenceReading(sentence);
    lenght = arrayLenght(sentence);
    printf("\nDizinini Boyu: %d",lenght);

    return 0;
}

void sentenceReading(char sentence[MAX])
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

int arrayLenght(char sentence[MAX])
{
    int i;
    for(i = 0; sentence[i] != '\0'; i++);

    return i;
}

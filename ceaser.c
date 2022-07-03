// I deleted the cs50.h library because it doesn't work outside of cs50 space
//#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // this condition say if the lingth of argument "argc" not equal 2 print we rite below it;
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // i use for loop because repeat and check if what is inside the argument "argv" if not"digit" print we write below and out from programe;
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }
    // use function "atoi()" because convert string of int;
    int key = atoi(argv[1]);

    char plaintext[20];
    scanf("%c", &plaintext);
    printf("plaintext: ");

    printf("ciphertext: ");
    // use for loop will be reapet and check is the character inside "plaintext" uppercase or lowercase and print we write bellow
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            // this formula we can output in ciphertext charachter uppercase
            printf("%c", (plaintext[j] - 65 + key) % 26 + 65);
        }
        else if (islower(plaintext[j]))
        {
            // this formula we can output in ciphertext charachter lowercase
            printf("%c", (plaintext[j] - 97 + key) % 26 + 97);
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
}
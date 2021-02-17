#include <iostream>
#include <fstream>
#include <stdio.h> 
#include <stdlib.h>



int main()
{
    unsigned sum = 0, number;
    FILE* pFile;
    char str[100];

    pFile = fopen("in.txt.txt" , "r");
    if (pFile == NULL)
    {
        std::cout << "Nu s-a putut deschide fisierul";
        return -1;
    }
    else
    {
        while (fgets(str, 100, pFile))
        {
            puts(str);
            number = atoi(str);
            sum += number;
        }
    }
    printf("Suma elementelor este: %d", sum);
    fclose(pFile);
}
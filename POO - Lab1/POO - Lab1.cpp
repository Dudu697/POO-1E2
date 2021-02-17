#include <iostream>
#include <iostream>
#include <fstream>

int main()
{
    FILE* pFile;
    char string[100];
    pFile = fopen("in.txt", "r");
    if (pFile == NULL)
    {
        std::cout << "Nu s-a putut deschide fisierul";
        return -1;
    }
    if (pFile == NULL) perror("Nu s-a putut deschide fisierul");
    else
    {
        while (fgets(string, 100, pFile))
            puts(mystring);
    }
        fclose(pFile);
}
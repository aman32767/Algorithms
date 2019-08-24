#include <iostream>
#include <cstring>
using namespace std;
//user defined function for strtok
char *mystrtok(char str[], char dilim)
{
    static char *input = NULL;
    if (str != NULL)
    {
        input = str;
    }
    char *output = new char[strlen(input) + 1];
    int i;
    if (input == NULL)
    {
        return NULL;
    }
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != dilim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    output[i] = '\0';
    input = NULL;
    return output;
}
int main()
{
    char str[] = "Hi my name is aman";
    char *ptr;
    ptr = mystrtok(str, ' ');
    while (ptr != NULL)
    {
        cout << ptr << endl;
        ptr = mystrtok(NULL, ' ');
    }
    return 0;
}
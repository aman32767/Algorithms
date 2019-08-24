#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char str[], char dilim)
{
    static char *input = NULL;
    if (str != NULL)
    {
        input = str;
    }
    char *output = new char[strlen(input) + 1];
    int i;
    if(input==NULL)
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
    output[i]='\0';
    input=NULL;
    return output;
}
int main()
{
    char ch[] = "Hi my name is aman";
    char *ptr;
    ptr = strtok(ch, " ");
    while (ptr != NULL)
    {
        cout << ptr << endl;
        ptr = strtok(NULL, " ");
    }
    return 0;
}
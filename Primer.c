#include <stdio.h>
int main()
{
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    char *ptr = &vocales[2];
    
    *ptr='x';
    printf("Las vocales son: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c \n",vocales[i]);
    }
    return 0;
}

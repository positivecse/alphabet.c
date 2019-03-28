#include <stdio.h>

int main()
{
    char ch;
    printf("input");
    scanf("%c",&ch);
    if ( (ch>='a' &&ch<='z')||(ch>='A'&& ch<='U'))
        printf("%c is a alphabet", ch);
    else
        printf("%c is a not a alphabet", ch);
    

    return 0;
}

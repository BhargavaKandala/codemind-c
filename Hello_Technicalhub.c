#include<stdio.h>
int main()
{
    char var[200];
    fgets(var, sizeof(var) , stdin);

    printf("Hello Technicalhub
");
    printf("%s", var);
}
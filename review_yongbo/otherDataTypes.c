#include <stdio.h>
int main (void)
{
    float floatvar = 161.4;
    double doublevar = 56.4654546;
    _Bool boolvar = 0;
    char charvar = 'a';
    printf ("The variable floatvar is %f, printed by %%f\n", floatvar);
    printf ("The variable doublevar is %e, printed by %%e\n", doublevar);
    printf ("The variable doublevar is %g, printed by %%g\n", doublevar);
    printf ("The variable boolvar is %i, printed by %%i\n", boolvar);
    printf ("The variable charvar is %c, printed by %%c\n", charvar);
    return 0;
}
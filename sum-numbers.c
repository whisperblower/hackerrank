#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i_operand1 = 0; 
    int i_operand2 = 0;

    float f_operand1 = 0;
    float f_operand2 = 0;

    scanf("%d %d\n", &i_operand1, &i_operand2);
    scanf("%f %f\n", &f_operand1, &f_operand2);
    
    printf("%d %d\n", i_operand1 + i_operand2, i_operand1 - i_operand2);
    printf("%.1f %.1f\n", f_operand1 + f_operand2, f_operand1 - f_operand2);

    return 0;
}

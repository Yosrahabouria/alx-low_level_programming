#include <stdio.h>
/**
 * main - Entry point
 * Return:always 0 (success)
*/
int main(void)
{
printf("size of a char: %u byte(s)\n",sizeof(char));
printf("size of int: %u byte(s)\n",sizeof(int));
printf("size of long int: %u byte(s)\n",sizeof(long int));
printf("size of long long int: %u byte(s)\n",sizeof(long long int));
printf("size of float: %u byte(s)\n",sizeof(float));
return (0);
}

#include <stdio.h>
#include <math.h>
 
Void printPowerSet(char*set, intset_size)
{
 unsigned int pow_set_size = pow(2, set_size); int counter, j;
for(counter = 0; counter < pow_set_size; counter++)
 {
 for(j = 0; j < set_size; j++)
 {
if(counter & (1<<j)) printf("%c", set[j]);
 } printf("\n");}}
Int main()
{
 Char set[] = {'a','b','c'}; 
printPowerSet(set, 3); 
 getchar(); 
 return0;}

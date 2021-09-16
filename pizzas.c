#include <stdio.h>

int main(void) {
  // Declare variables, set to 0
  int num_people, slices_per_pizza, slices_each, whole_pizzas, mod_result = 0;
  
  // Scan input
  scanf("%d", &num_people);
  scanf("%d", &slices_per_pizza);
  scanf("%d", &slices_each);

  // Zero input, no whole pizzas required  
  if  ((num_people==0)||(slices_per_pizza==0)||(slices_each==0))
  {
    whole_pizzas=0;
  }

  // Calculate division and modulos results
  whole_pizzas=(slices_each*num_people)/slices_per_pizza;
  mod_result=(slices_each*num_people)%slices_per_pizza;

  // All cases where mod result does not equal 0 (odd numbers)
  if (mod_result!=0)
  {
    ++whole_pizzas;
  }

  // Print number of whole pizzas
  printf("%d", whole_pizzas);
  return 0;
}
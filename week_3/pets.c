// Nicole, 24T3 Week 3
// Using structs and enums to make a pets program

#include <stdio.h>

// Define an enum for types of animals

#define TRUE 1
#define FALSE 0

enum animal {
  DOG,
  CAT,
  BIRD,
  FISH,
  RABBIT,
};

// Define a struct for pets
struct pet {
  int has_eyes;
  double weight;
  enum animal animal_type;
};

int main(void) {
    
  // Create a pet
  struct pet lucky;
  lucky.has_eyes = FALSE;
  lucky.weight = 10.7;
  lucky.animal_type = DOG;

  // Print it's details
  printf("Lucky: %d, %lf, %d\n", 
          lucky.has_eyes, lucky.weight, lucky.animal_type);

	return 0;
}
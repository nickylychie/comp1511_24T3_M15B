// Nicole, 24T3 Week 2
// Write a program that takes in a radius and prints out the area of a circle

#include <stdio.h>

#define PI 3.1415

int main(void) {

	// Ask user for radius, and store it
	double radius;
	printf("Enter the radius of a circle: ");
	scanf("%lf", &radius);

	// Calculate the area
	double area = PI * radius * radius;

	// Print area
	printf("%lf\n", area);

	return 0;
}

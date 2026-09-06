#include <stdio.h>

int main(){

  int choice = 0;
  float kilos = 0.00f;
  float pounds = 0.00f;

  printf("Weight Conversion Calculator\n");
  printf("1.  Kilograms to Pounds\n");
  printf("2.  Pounds to Kilograms\n");
  printf("Enter your choice (1 or 2): ");
  scanf("%d", &choice);

  if (choice == 1){
    // Kilograms to Pounds
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilos);
    pounds = kilos * 2.20462;
    printf("%.2f kilograms is equal to %.2f pounds", kilos, pounds);
  } else if (choice == 2)
  {
    // Pounds to Kilograms
    printf("Enter the weight in pounds: ");
    scanf("%f", &pounds);
    kilos = pounds / 2.20462;
    printf("%.2f pounds is equal to %.2f kilograms", pounds, kilos);
  } else {
    printf("Invalid choice! Please enter 1 or 2\n");
  }
  

  return 0;
}
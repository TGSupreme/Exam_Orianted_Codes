#include<stdio.h>

int main() {
	
/*60. A file named data contains series of integer numbers. Write a c program to read all
numbers from file and then write all odd numbers into file named “odd” and write all
even numbers into file named “even”. Display all the contents of these file on screen*/

	printf("\tAnalysis Of Data Of File\n");
    printf("==========================================\n");
    
  FILE * f1, * f2, * f3;
  int number, i, n = 10;

//<-----this for 1st time execution----> Enter 10 numbers

//  printf("Enter Contents of DATA file\n\n");
//
//  f1 = fopen("DATA", "w");
//
//  for (i = 0; i < n; i++) {
//    scanf("%d", & number);
//    if (number == -1) {
//      break;
//    }
//    putw(number, f1);
//  }
//  fclose(f1);
//<------------------------------------>

  f1 = fopen("DATA", "r");
  f2 = fopen("ODD", "w");
  f3 = fopen("EVEN", "w");

  while ((number = getw(f1)) != EOF) {
    if (number % 2 == 0) {
      putw(number, f3);
    } else {
      putw(number, f2);
    }
  }

  fclose(f1);
  fclose(f2);
  fclose(f3);

  f1 = fopen("DATA", "r");
  f2 = fopen("ODD", "r");
  f3 = fopen("EVEN", "r");
  
printf("\n\nContents Of DATA File :\n\n");

  while ((number = getw(f1)) != EOF) {
    printf("%d ", number);
  }

  printf("\n\nContents Of ODD File :\n\n");

  while ((number = getw(f2)) != EOF) {
    printf("%d ", number);
  }

  printf("\n\nContents Of EVEN File :\n\n");

  while ((number = getw(f3)) != EOF) {
    printf("%d ", number);
  }

  fclose(f2);
  fclose(f3);
  return 0;
}

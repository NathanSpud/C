/*
Author: NathanS
Purpose: Experiemnting with 3 new functions
Date: 04/03/2022
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char srce[100];
    char dest[100] = "Unchanged";

    
    printf("===================\nEnter a short sentence: ");
    scanf(" %[^\n]s", srce);

    // copy user string onto dest string
    printf("\nbefore strcpy: dest[ %s ] & srce[ %s ]\n", dest, srce);
    strcpy(dest, srce); 
    printf("before strcpy: dest[ %s ] & srce[ %s ]\n", dest, srce);

    //join the two strings using strcat.
    printf("\nAdd to your sentence: %s", dest);
    scanf(" %[^\n]s", srce);
    printf("concatenated: %s\n", strcat(dest, srce)); // stores new string onto dest

    //this won't be the prettiest tokenization
    char *ptoken = strtok(dest, " "); // if user has an ' ' in their string, it will cut the word off from there
                                    //IE; nathan jack => nathan
    printf( "\ntokenization: %s\n", ptoken ); //printing the token

  return 0;
}

//References
/*
https://www.educative.io/edpresso/how-to-copy-a-string-using-strcpy-function-in-c
https://www.educative.io/edpresso/splitting-a-string-using-strtok-in-c
https://www.educative.io/edpresso/how-to-copy-a-string-using-strcpy-function-in-c
*/
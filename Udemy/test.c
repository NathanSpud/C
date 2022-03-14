/*
Author: NathanS
Purpose: Anaylzing and modifying dirPerms
Date: 09/03/2022
*/

// PLEASE READ
/* 
I did not have time to figure out how to read any directory.
Im interested if any of my comments were accurate or kind following what this program was requesting
I wish I had more time to figure this out, it i super interesting.
I think I had an idea use structs or perhaps DIR type but no time
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countSpaces(char *mystr);


int main (int argc, char *argv[])
{
    
    //using data type file for the pointer to know that it will be pointing to a file we want read (https://www.geeksforgeeks.org/data-type-file-c/)
    FILE *program_output = popen("ls -al /usr/include", "r");
        //popen opens a process by creating a pipe, forking and invoking the shell (https://man7.org/linux/man-pages/man3/popen.3.html)
        //here it is going to pipe a command in a shell that will print the contents of a file (even hidden files), 
        //r indicated that the file should be writeable at the end of the loop (https://pubs.opengroup.org/onlinepubs/009696799/functions/popen.html)
   
    //If poopen cannot return anything/ the pointer does not get a value, it will return NULL. this checks for that
    if(program_output == NULL)
    {
        printf("Quitting\n");
        exit(-1);
    }


    char buf[92] = {"\0"};
    char perms[11] = "\0";
    char *str;

    printf("\t===========================================================\n");
    printf("\t     %s %22s\n", "Permissions", "Directories");
    printf("\t===========================================================\n");

    //this will 'stream' the file we are pointing too (https://www.tutorialspoint.com/c_standard_library/c_function_fscanf.htm)
    //2nd argument says that read everything except newlines
    //buf I believe will be saying how many characters it will read in the string we are returning
    while( fscanf(program_output, "%[^\n]", buf) != EOF ) //end loop once it reaches EOF which is a special tag for the end of a file
    {
        //https://www.tutorialspoint.com/c_standard_library/c_function_fgetc.htm
        //this is simply telling what file we will be 'streaming' through right now
        fgetc(program_output);

        //I believe that this will be reading the perms first of the file,
        //and as long as it has 1 or d for directory, it will run the iff statement
        if( buf[0] == 'd' || buf[0] == 'l' )
        {
            //tracks number of spaces in the file, line per line.
            int spaces = countSpaces(buf);
            //this will tokenize buff at the first space, and then copy it the end of perms
            strncpy(perms, strtok(buf, " "), 10);

            //while there are more spaces repeat this process
            while(spaces > 0)
            {
                //appares that this will return null at every other spaces, until zero spaces
                str = strtok(NULL, " ");
                spaces--;
            }
            //https://www.tutorialspoint.com/c_standard_library/c_function_fprintf.htm
            //https://stackoverflow.com/questions/16430108/what-does-it-mean-to-write-to-stdout-in-c
            //this will print we want to print output to the screen
            //I believe this will tab the output of the perms (up to 15 characters) then 
            //print the str characters then 30 empty spaces.
            fprintf(stdout, "\t%15s     -->     %-30s\n", perms, str);
        }
    }
    //function to close the stream of our popen
    pclose(program_output);
    return 0;
}


//string counter.
int countSpaces(char *mystr)
{
    int count = 0;
    int space = 0;

    while(mystr[count] != '\0')
    {
        if(mystr[count] == ' ' && (count != 0 && mystr[count-1 ] != ' '))
            space++;
        count++;
    }
    return space;
}
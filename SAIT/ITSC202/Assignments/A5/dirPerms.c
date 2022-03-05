#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countSpaces(char *mystr);


int main (int argc, char *argv[])
{
    //
    FILE *program_output = popen("ls -al /usr/include", "r");

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

    while( fscanf(program_output, "%[^\n]", buf) != EOF )
    {
        fgetc(program_output);
        if( buf[0] == 'd' || buf[0] == 'l' )
        {
            int spaces = countSpaces(buf);
            strncpy(perms, strtok(buf, " "), 10);

            while(spaces > 0)
            {
                str = strtok(NULL, " ");
                spaces--;
            }
            fprintf(stdout, "\t%15s     -->     %-30s\n", perms, str);
        }
    }
    pclose(program_output);
    return 0;
}



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
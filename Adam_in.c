#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    //opening a file to read
    FILE*str=fopen("Adam.in","r");
    if(str == NULL)
    {
        printf("The file is empty");
        exit(0);
        //checks if the file read is empty and prints out why and ends the program
    }
     //  Calculates the number of time the program counts
      // R stands for the read number of input to be read
     //It reads the first line of the code to get the R value which
    int R;
    fscanf(str,"%d",&R);
    for(int i=0;i<R;i++)
    {
        char step[100];
        int count = 0;
        //reads the remaining lines in the text file to collect the sting to be iterated over
        fscanf(str,"%s",step);
        int length = strlen(step);
        // runs for the length of the read string and counts the number of u
        for(int i = 0;i<length;i++)
         {
             if(step[i] == 'u')
             {
                 count++;
                 //checks through the string for values that equal u and counts
             }
             else
             {
                 break;
             }

            }
            printf("%d \n",count);

         }


    fclose(str);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
Name:Lavanya R
Date:
Description:WRITE A PROGRAM TO CREATE, READ, WRITE, AND APPEND DATA TO A FILE
Sample Input:
Sample Output:
*/


/*
   1.Function to write data to the file
   2.Open file in write mode
   3.Writing data to the file
   4.Close the file
 */
void writeToFile(){

    FILE *file=fopen("data.txt","w");

    if(file == NULL)
    {
	printf("ERROR : File is not for writing the data!\n");
	return;
    }
    fprintf(file,"Hello Welcome to Code Tech It Solutions !\n");
    fclose(file);

    printf("Data Written Successfully.\n");

}

/*
   1.Function to read data from the file
   2.Open file in read mode
   3.Buffer to store file content while reading
   4.Read line by line
   5.Print each line
   6.close the file
 */
void readFromFile(){

    FILE *file =fopen("data.txt","r");

    if(file == NULL)
    {
	printf("ERROR : File is Not Openning!\n");
	return;
    }

    char buffer[250];
    printf("Reading the File Contents:\n");

    while(fgets(buffer,sizeof(buffer),file) != NULL)
    {
	printf("%s",buffer);
    }
    fclose(file);

    }

/*
   1.Function to append data to the file
   2.Open file in append mode
   3.Appending new content to the file
   4.close the menu
 */
void appendToFile(){

    FILE *file =fopen("data.txt","a");

    if(file == NULL)
    {
	printf("ERROR : File is not opening !\n");
	return;
    }

    fprintf(file,"Appending a new line to the file.\n");
    fprintf(file,"This content added later.\n");
    fclose(file);
    printf("Data Append Successfully.\n");
}



int main()
{

    int opts;
    do {
        
	//Display menu options for the user
	printf("\n File Operations Menu:\n");
	printf("1.Write to File.\n");
	printf("2.Read from File.\n");
	printf("3.Append to File\n");
	printf("4.Exit\n");

	printf("Enter Your Choice:");
	scanf("%d",&opts);

	switch (opts) {

	    case 1:
		//call function to write data
		writeToFile();
		break;
	    case 2:
                //Call function to read data
		readFromFile();
		break;
	    case 3:
		//Call function to append the data
		appendToFile();
		break;
	    case 4:
		printf("Exiting the program ...\n");
		break;
	    default:
		printf("Invalid Option ! Please try again.\n");
	}
    }
    //Repeat until the user chooses to exit
    while (opts !=4);
    return 0;


}



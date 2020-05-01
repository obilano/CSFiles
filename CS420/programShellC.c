/*
Name:              Oberon Ilano
Group:             Antonio Salgado
Assignment:        1
Due Date:          September 18, 2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <errno.h>

#define TRUE 1

//Function declaration
char** read_command(char *input,char **argv,int *parameter,int *cmdLength);  
void type_prompt(char* command);

//Global variable
int *numOfCmd;
int *cmdLength;

int main() {
    // map files or devices into memory
    numOfCmd = mmap(NULL, sizeof *numOfCmd, PROT_READ | PROT_WRITE,
                    MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    cmdLength = mmap(NULL, sizeof *cmdLength, PROT_READ | PROT_WRITE,
                     MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    (*numOfCmd) = 0;
    (*cmdLength) = 0;

    int parameter = 0;
    char command[512] = " "; // A string array of input command.
    pid_t forkID; // for fork() process
    char **argv; // A string array for program name and command arguments
    
    
    while(TRUE){
        type_prompt(command);
        argv = read_command(command, argv, &parameter, cmdLength);
        if (strcmp("cd", argv[0]) == 0) {
            if(errno != 0)
                printf("error in directory");
        }
        else{
            forkID = fork();
            if (forkID < 0){
                printf("fork error");
                exit(0);
            }
            else if(forkID == 0){
                (*numOfCmd)++;
                execvp(argv[0], argv);
                   if(strcmp(command, "done") != 0)
		      printf("command not found\n");
                exit(1);
            }
            else{
                waitpid(-1, &forkID, 0);              
            }
        }
    }
    return 0;
}

char** read_command(char *command,char **argv,int *parameter,int *cmdLength){
    int i = 0, counter = 0;
    char cmdCopy[512];
    strcpy(cmdCopy, command);
    char* ptr = strtok(command," \n ");
    while(ptr != NULL){
        ptr = strtok(NULL," \n ");
        counter++;
    }
    argv = (char**)malloc((counter+1)*(sizeof(char*)));
    if(argv == NULL){
        printf("error allocated");
        exit(0);
    }
    char* ptrCopy = strtok(cmdCopy," \n ");
    while(ptrCopy != NULL){
        if (i == 0)
            (*cmdLength) += strlen(ptrCopy);
        argv[i] = (char*)malloc((sizeof(char)+1)*strlen(ptrCopy));
        if(argv[i] == NULL){
            printf("error allocated");
		int j;
            for ( j = i-1; j > -1 ; j--){
                free(argv[j]);
            }
            free(argv);
            exit(0);
        }
        strcpy(argv[i], ptrCopy);
        argv[i][strlen(ptrCopy)] ='\0';
        ptrCopy = strtok(NULL," \n " );
        i++;
    }
    argv[counter] = NULL;
    (*parameter) = counter;

    return argv;
}

void type_prompt(char* command){
     printf("~$ ");
     if(fgets(command, 512, stdin) == 0)
            printf("~$ ");
}
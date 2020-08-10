/*
** EPITECH PROJECT, 2019
** my_sokoban.c
** File description:
** 
*/


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#include "my.h"
#define READ_SIZE (32)

int main(int argc, char **argv)
{
    int fd ;
    char *buf = NULL;
    if(argc == 1)
        return (84);
    if(argc != 2)
        return (84);
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        return (84);
    buf = get_next_line(fd);
    printf("%s\n",buf);
    
    free(buf);
    return (0);
}

char *  get_next_line(int fd){

   char buffer[READ_SIZE];
   char * line = NULL;
   int i;
   int ch = 0;
   int j = 0;
   line = malloc(sizeof(char)*(READ_SIZE));
   while((ch = read(fd, buffer, READ_SIZE  + 1)) > 0){
     buffer[ch]='\0';
     if(j>READ_SIZE)
       line = realloc(line,(j+1)*sizeof(char));
     i=0;
     while((i<READ_SIZE+1 && buffer[i] != '\0')){
       if(buffer[i]=='\n'){
	 line[j+1]='\0';
	 printf("%d\n",j);
	 return line;
       }
       line[j]=buffer[i];
       j++;
       i++;
     }

   }
   return NULL;
}



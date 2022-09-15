#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
 char* buff1;
 char* buff2;

buff1=(char*)malloc(1024);
buff2=(char*)malloc(1024);

printf("buff1=%p buff2=%p",buff1,buff2);

strcpy(buff1,argv[1]);

free(buff1);


}

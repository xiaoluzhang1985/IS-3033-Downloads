
#include <unistd.h>  
#include <stdio.h>   
 
int main ()   
{   
 pid_t fpid; 
 int count=0;  
 printf("the main process pid is %d\n",getpid());   
 fpid=fork(); 
 if (fpid < 0){ 
 	fprintf(stderr,"fork failed!\n");   
 }else if (fpid == 0) {  
 	printf("i am the child process, my process id is %d\n",getpid());    
	count++; 
 	while(1){
		//infinite loop
	} 
 }   
 else {   
	printf("i am the parent process, my process id is %d\n",getpid());    
	count++;
	while(1){
		//infinite loop
	} 
 }  

 printf("count number is %d/n",count); 
 return 0;  
}

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int i,j;
void *thread_function(void *arg){

printf("Inside Thread\n");

for(i=0;i<5;i++){
printf("%d\n",i);
sleep(1);
}
}


int main(){

pthread_t a_thread;

pthread_create(&a_thread,NULL,thread_function,NULL);

pthread_join(a_thread,NULL);
printf("\nInside Main Program");
for(j=20;j<25;j++){
printf("\n%d",j);
sleep(1);
}
return 0;
}

#include<stdio.h> 
#include<unistd.h> 
#include<stdlib.h> 
#include<pthread.h> 
#include<semaphore.h> 
 
#define BUFFERSIZE 5 
 
sem_t empty,full; 
pthread_mutex_t mutex; int 
buffer[BUFFERSIZE]; 
long int num; 
 
int in=0,out=0; 
 
void *producer_process (void *arg) 
{ 
 long int num = (long int) arg; 
sem_wait(&empty); 
pthread_mutex_lock(&mutex); 
int item =rand() % 10 ;
printf("\n Producer[%ld] has produced %d ",num+1,item); 
sleep(2); buffer[in] =item ; 
 in =(in+1) % BUFFERSIZE; 
 pthread_mutex_unlock(&mutex); 
sem_post(&full); 
 return NULL; 
} 
void *consumer_process (void *arg) 
{ 
 long int num = (long int) arg; 
sem_wait(&full); 
pthread_mutex_lock(&mutex); 
int item =rand() % 10 ; 
 printf("\n consumer[%ld] has consumed %d ",num+1,item); 
sleep(2); 
 // buffer[in] =item ; 
out =(out+1) % BUFFERSIZE; 
pthread_mutex_unlock(&mutex); 
sem_post(&empty); 
return NULL; 
} 
 
int main() 
{ 
 int numProducers, numConsumers; 
pthread_t producers[10],consumers[10]; 
long int i; 
 
 printf("\n Enter number of producers :"); 
 scanf("%d", &numProducers);
 printf("\n Enter number of consumers :"); 
scanf("%d", &numConsumers); 
 
 sem_init(&empty,0,5); 
 sem_init(&full, 0,0); 
 
 pthread_mutex_init(&mutex,NULL);

for(i=0; i<numProducers ; i++) 
pthread_create(&producers[i], NULL, producer_process,(void *)i); 
for(i=0; i<numConsumers ; i++) 
 pthread_create(&consumers[i], NULL, consumer_process,(void *)i); 
 
 for(i=0; i<numConsumers 
; i++) 
pthread_join(consumers[i], NULL);
for(i=0; i<numProducers ; i++) 
 pthread_join(producers[i], NULL); 
 return 0; 
}

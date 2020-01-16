#include <pthread.h>
#include <stdio.h>

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    //increment i 1_000_000 times
    for(int j = 1; j <= 1000000; j++)
    {
        i++;
    }
    return NULL;
}

void* decrementingThreadFunction(){
    //decrement i 1_000_000 times
    for (int j = 1; j <= 1000000; j++) 
    {
        i--;
    }
    return NULL;
}


int main(){
    //declare incrementingThread and decrementingThread
    pthread_t incrementingThread;
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
	pthread_t decrementingThread;
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);

    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    printf("The magic number is: %d\n", i);
    return 0;
}

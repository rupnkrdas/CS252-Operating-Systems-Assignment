#include <stdio.h>
#include <pthread.h>
#define NUM_THREADS 3 // define the total number of threads

int arr[50]; // array to store the input elements
int n;       // maximum number of input elements

void input()
{
    // take user input for total number of elements
    printf("Enter total number of elements (maximum %lu): ", sizeof(arr) / sizeof(int));
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void *calculateAvg()
{
    int sum = 0;
    float average;

    // calculate the sum of all the elements
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / n;
    printf("The average value is: %.2f", average);
}

void *findMinimum()
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("\nThe Minimum  value is: %d", min);
}

void *findMaximum()
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("\nThe Maximum  value is: %d", max);
}

int main()
{
    input();
    pthread_t th[NUM_THREADS];

    // create first thread
    if (pthread_create(&th[0], NULL, &calculateAvg, NULL) != 0)
    {
        printf("Error creating first thread");
    }
    // pthread_join(th[0], NULL);

    // create second thread
    if (pthread_create(&th[1], NULL, &findMinimum, NULL) != 0)
    {
        printf("Error creating second thread");
    }
    // pthread_join(th[1], NULL);

    // create third thread
    if (pthread_create(&th[2], NULL, &findMaximum, NULL) != 0)
    {
        printf("Error creating third thread");
    }
    // pthread_join(th[2], NULL);
    pthread_exit(0);

    return 0;
}
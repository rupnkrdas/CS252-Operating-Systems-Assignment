# Solution to Problem 4.22

## Kernel Specifications

Darwin Kernel Version 22.1.0

## Demo

![Demo](demo/demo.gif)

## Running the program locally

Compile the program:

```
  gcc main
```

Run the the program:

```
  ./a.out
```

## Important header files/functions/data types used in main.c

- **pthread.h**  
  The pthread.h header file contains function declarations and mappings for threading interfaces and defines a number of constants used by those functions.

- **pthread_t**  
  pthread_t is the data type used to uniquely identify a thread. It is returned by pthread_create() and used by the application in function calls that require a thread identifier.

- **pthread_create()**  
  The pthread_create() function starts a new thread in the calling process.  
  **Syntax**:

  ```
  int pthread_create(pthread_t * thread,
                   const pthread_attr_t * attr,
                   void * (*start_routine)(void *),
                   void *arg);
  ```

  Parameters:

  - **thread**: pointer to an unsigned integer value that returns the thread id of the thread created.
  - **attr**: pointer to a structure that is used to define thread attributes like detached state, scheduling policy, stack address, etc. Set to NULL for default thread attributes.
  - **start_routine**: pointer to a subroutine that is executed by the thread. The return type and parameter type of the subroutine must be of type void \*. The function has a single attribute but if multiple values need to be passed to the function, a struct must be used.
  - **arg**: pointer to void that contains the arguments to the function defined in the earlier argument

- **pthread_exit()**:  
  used to terminate a thread

  **Syntax**:

  ```
  void pthread_exit(void *retval);
  ```

  **Parameters**: This method accepts a mandatory parameter retval which is the pointer to an integer that stores the return status of the thread terminated. The scope of this variable must be global so that any thread waiting to join this thread may read the return status.

## Authors

- [@rupnkrdas](https://www.github.com/rupnkrdas)

## Feedback

If you have any feedback, please reach out to me at rupnkr1512.das0007@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char* argv[])
{

	#pragma omp parallel
    {
        int tid = omp_get_thread_num();
        printf("I'm OpenMP thread %d\n", tid);
        if (tid == 0){
            int nthreads = omp_get_num_threads();
            printf("number of threads = %d\n", nthreads);
        }
    }
}
// LinkedListExe.cpp : Defines the entry point for the console application.
//
#include "PriorityQueue.h"
#include <iostream>
#include <random>
#include <time.h>
#include <string>
#include <chrono>

int TEST_VAL = 5000;
typedef std::chrono::high_resolution_clock Clock;


int main()
{
	srand(time(NULL));
    ArrayQueue PriorityQ;
    ArrayMaxHeap PriorityHeap;
    int randNum;
    const int first = 0; //default value for functions that need first values
    for(int i = 0; i < TEST_VAL; i++){ //vals given to the array
        randNum = rand() % 1000 + 1;
        PriorityQ.insert(randNum, i);
        PriorityHeap.add(randNum);
    }

    auto t1 = Clock::now();
    for(int i = 0; i < TEST_VAL; i++){
        PriorityHeap.remove();
    }
    auto t2 = Clock::now();
    std::cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count()<< " nanoseconds" << std::endl;
    return 0;
}


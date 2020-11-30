#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <random>
#include "PriorityQueue.h"
using namespace std;






ArrayMaxHeap::ArrayMaxHeap(){} //default constructor


bool ArrayMaxHeap::add(const int newData){
	items[itemCount] = newData;
	int newDataIndex = itemCount;
	int parentIndex = 0;
	int tempVal = 0;
	bool inPlace = false;
	while((newDataIndex >= 0) && !inPlace){
		parentIndex = (newDataIndex - 1) / 2;
		if(items[newDataIndex] <= items[parentIndex]){
			inPlace = true;
		}else{
			tempVal = items[newDataIndex];
			items[newDataIndex] = items[parentIndex];
			items[parentIndex] = tempVal;
		}
	}
	itemCount++;
	return inPlace;
}


bool ArrayMaxHeap::remove(){
	items[0] = items[itemCount - 1];
	itemCount--;
	heapRebuild(0);
	return true;
}

int ArrayMaxHeap::peekTop(){
	return items[0];
}

int ArrayMaxHeap::getItemCount(){
	return itemCount;
}

bool ArrayMaxHeap::isEmpty(){
	return itemCount == 0;
}

bool ArrayMaxHeap::PPQ(){
	bool ret = false;
	if(this->isEmpty()){
		return false;
	}
	int tempVal = this->getItemCount();
	for(int i = 0; i < tempVal; i++){
		std::cout << this->peekTop() << " ";
		this->remove();
	}
	std::cout << endl;
	return true;
}



ArrayQueue::ArrayQueue() : front(0), back(CAPASITY-1), count(0){};//Default Constructor


bool ArrayQueue::isEmpty() const
{
	return count == 0;
}

//Replaces enqueue function on PG. 429
bool ArrayQueue::insert(const int newEntry, const int priority)
{
	bool result = false;
	if(count < CAPASITY)
	{
		back = (back+1) % CAPASITY;
		array[back] = newEntry;
		priorityArray[back] = priority;
		count++;
		result = true;
	}
	return result;
}


int ArrayQueue::peekFront() const
{
	int priorityMax = priorityArray[0];
	int k = 0;
	if(this->isEmpty())
	{
		std::cout<<"peekFront() called with empty queue"<<std::endl;
	}
	for(int i = 0; i < CAPASITY; i++){
		if(priorityMax > priorityArray[i]){
			priorityMax = priorityArray[i];
			k = i;
		}
	}
	return array[k];
}

//Used https://www.geeksforgeeks.org/delete-an-element-from-array-using-two-traversals-and-one-traversal/ as referance
bool ArrayQueue::remove()
{
	int priorityMax = priorityArray[0];
	int k = 0;
	if(this->isEmpty())
	{
		std::cout<<"Cannot remove value from empty array"<<std::endl;
		return false;
	}
	for(int i = 0; i < CAPASITY; i++){
		if(priorityMax > priorityArray[i]){
			priorityMax = priorityArray[i];
			k = i;
		}
	}
	priorityArray[k] = 100000000;
	return true;
}

//Function to print the Queue 
bool ArrayQueue::PPQ()
{
	/*int i = 0;
	std::cout<<"Indices place: ";
	while(i<CAPASITY)
	{
		std::cout<<i<<' ';
		i++;
	}
	*/
	if(this->isEmpty()){
		std::cout<<"Cannot print Empty Queue"<<std::endl;
		return false;
	}
	
	int i = count;
	std::cout<<std::endl<<"Array Values : ";
	while(i>0)
	{
		std::cout<<array[i]<<' ';
		i--;
	}
	std::cout<<std::endl;
	return true;
}



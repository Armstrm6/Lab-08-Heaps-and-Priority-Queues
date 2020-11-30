#include <string>
#include <math.h>


class ArrayMaxHeap
{
	private:
		static const int ROOT_INDEX = 0;
		static const int DEFAULT_CAPACITY = 5000; //change this to test
		int items[DEFAULT_CAPACITY];
		int itemCount;
		int maxItems;
		void heapCreate();
		void heapRebuild(int nodeIndex){ //declaration of heap rebuild since it is private
			int leftChild = 0;
			int rightChild = 0;
			int largerChildIndex = 0;
			int tempVal = 0;
			if(nodeIndex < (floor(DEFAULT_CAPACITY/2)+1)){
				leftChild = 2 * nodeIndex + 1;
				rightChild = leftChild + 1;
				largerChildIndex = rightChild;
				if((largerChildIndex >= itemCount)|| (items[leftChild] > items[rightChild])){
					largerChildIndex = leftChild;
				}
				if(items[nodeIndex] < items[largerChildIndex]){
					tempVal = items[nodeIndex];
					items[nodeIndex] = items[largerChildIndex];
					items[largerChildIndex] = tempVal;
					heapRebuild(largerChildIndex);
				}
			}
		}

	public:
		ArrayMaxHeap();
		ArrayMaxHeap(const int someArray[], const int arraySize);
		virtual ~ArrayMaxHeap(){};
		bool isEmpty();
		int peekTop();
		bool add(const int newData);
		bool remove();
		int getItemCount();
		bool PPQ();
};

//Used PG. 396 in txtbook for referance

//Used PG. 428 - 429 in txtbook for referance

class ArrayQueue
{
	public:
	ArrayQueue();
	bool isEmpty() const;
	bool insert(const int newEntry, const int priority);
	int peekFront() const;
	bool remove();
	bool PPQ();


	private:
	static const int CAPASITY = 5000;
	int array[CAPASITY];
	int priorityArray[CAPASITY];
	int front;
	int back;
	int count;	
	 
};
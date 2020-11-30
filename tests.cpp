// tests.cpp
#include "PriorityQueue.cpp"
#include <gtest/gtest.h>
//HeapBasedQueue
//is Empty Tests

TEST(AddHeap, PositiveTest){
	ArrayMaxHeap HeapOne;
	ASSERT_TRUE(HeapOne.isEmpty());
	ASSERT_TRUE(HeapOne.add(17342));
	ASSERT_TRUE(HeapOne.add(1));
	ASSERT_TRUE(HeapOne.add(12832));
	ASSERT_TRUE(HeapOne.add(12841));
}
TEST(AddHeap, NegativeTest){
	ArrayMaxHeap HeapOne;
	ASSERT_TRUE(HeapOne.isEmpty());
	ASSERT_TRUE(HeapOne.add(17342));
	ASSERT_TRUE(HeapOne.add(1));
	ASSERT_TRUE(HeapOne.add(12832));
	ASSERT_TRUE(HeapOne.add(12841));
	ASSERT_FALSE(HeapOne.isEmpty());
}
TEST(RemoveHeap, PositiveTest){
	ArrayMaxHeap HeapOne;
	ASSERT_TRUE(HeapOne.isEmpty());
	ASSERT_TRUE(HeapOne.add(17342));
	ASSERT_TRUE(HeapOne.add(1));
	ASSERT_TRUE(HeapOne.add(12832));
	ASSERT_TRUE(HeapOne.add(12841));
	ASSERT_TRUE(HeapOne.remove());
	ASSERT_TRUE(HeapOne.remove());
	ASSERT_TRUE(HeapOne.remove());
	ASSERT_TRUE(HeapOne.remove());
	ASSERT_TRUE(HeapOne.isEmpty());
}
TEST(RemoveHeap, NegativeTest){
	ArrayMaxHeap HeapOne;
	ASSERT_TRUE(HeapOne.isEmpty());
	ASSERT_TRUE(HeapOne.add(17342));
	ASSERT_TRUE(HeapOne.add(1));
	ASSERT_TRUE(HeapOne.add(12832));
	ASSERT_TRUE(HeapOne.add(12841));
	ASSERT_TRUE(HeapOne.remove());
	ASSERT_TRUE(HeapOne.remove());
	ASSERT_TRUE(HeapOne.remove());
	ASSERT_FALSE(HeapOne.isEmpty());
}
TEST(PPQHeap,PositiveTest){
	ArrayMaxHeap HeapOne;
	ASSERT_TRUE(HeapOne.isEmpty());
	ASSERT_TRUE(HeapOne.add(17342));
	ASSERT_TRUE(HeapOne.add(1));
	ASSERT_TRUE(HeapOne.add(12832));
	ASSERT_TRUE(HeapOne.add(12841));
	ASSERT_TRUE(HeapOne.PPQ());
}
TEST(PPQHeap,NegativeTest){
	ArrayMaxHeap HeapOne;
	ASSERT_FALSE(HeapOne.PPQ());
}


TEST(AddQ, PositiveTest){
	ArrayQueue Priority;
	ASSERT_TRUE(Priority.isEmpty());
	ASSERT_TRUE(Priority.insert(5342, 1));
	ASSERT_TRUE(Priority.insert(55632, 5));
	ASSERT_TRUE(Priority.insert(12, 2));
	ASSERT_TRUE(Priority.insert(32, 3));
	ASSERT_TRUE(Priority.insert(69, 4));
	ASSERT_FALSE(Priority.isEmpty());
}
TEST(AddQ, AddNRemove){
	ArrayQueue Priority;
	ASSERT_TRUE(Priority.isEmpty());
	ASSERT_TRUE(Priority.insert(5342, 1));
	ASSERT_TRUE(Priority.insert(55632, 5));
	ASSERT_TRUE(Priority.insert(12, 2));
	ASSERT_TRUE(Priority.insert(32, 3));
	ASSERT_TRUE(Priority.insert(69, 4));
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
}
TEST(RemoveQ, PositiveTest){
	ArrayQueue Priority;
	ASSERT_TRUE(Priority.isEmpty());
	ASSERT_TRUE(Priority.insert(5342, 1));
	ASSERT_TRUE(Priority.insert(55632, 5));
	ASSERT_TRUE(Priority.insert(12, 2));
	ASSERT_TRUE(Priority.insert(32, 3));
	ASSERT_TRUE(Priority.insert(69, 4));
	ASSERT_FALSE(Priority.isEmpty());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
}
TEST(ReqmoveQ, NegativeTest){
	ArrayQueue Priority;
	ASSERT_TRUE(Priority.isEmpty());
	ASSERT_TRUE(Priority.insert(5342, 1));
	ASSERT_TRUE(Priority.insert(55632, 5));
	ASSERT_TRUE(Priority.insert(12, 2));
	ASSERT_TRUE(Priority.insert(32, 3));
	ASSERT_TRUE(Priority.insert(69, 4));
	ASSERT_FALSE(Priority.isEmpty());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
	ASSERT_TRUE(Priority.remove());
}
TEST(PPQQ, PositiveTest){
	ArrayQueue Priority;
	ASSERT_TRUE(Priority.isEmpty());
	ASSERT_TRUE(Priority.insert(5342, 1));
	ASSERT_TRUE(Priority.insert(55632, 5));
	ASSERT_TRUE(Priority.insert(12, 2));
	ASSERT_TRUE(Priority.insert(32, 3));
	ASSERT_TRUE(Priority.insert(69, 4));
	ASSERT_TRUE(Priority.PPQ());
}
TEST(PPQQ, NegativeTest){
	ArrayQueue Priority;
	ASSERT_TRUE(Priority.PPQ());
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

main: main.o LinkedList.o ListNode.o
	g++ -g -o main.o LinkedList.o ListNode.o

main.o: main.cpp LinkedList.h
	g++ -g -c main.cpp

LinkedList.o:  LinkedList.cpp LinkedList.h ListNode.h
	g++ -g -c LinkedList.cpp

ListNode.o: ListNode.h ListNode.cpp
	g++ -g -c ListNode.cpp


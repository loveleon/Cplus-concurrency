#include <thread>  //std::thread
#include <iostream>  //std::cout

#include <stdlib.h>
#include <stdio.h>

void thread_task()
{
	std::cout << "thread task is called." << std::endl;
}

int main(int argc, char * argv[])
{
	std::thread t(thread_task);
	t.join();
	return 0;
}
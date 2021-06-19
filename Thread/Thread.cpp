#include "Thread.h"
#include <thread>

int Thread::start() {

	std::thread t(&Thread::run, this);
	t.detach();

	return 0;
}
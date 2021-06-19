// AudioPlayer.cpp: 定义应用程序的入口点。
//

#include "AudioPlayer.h"
#include "Thread/Thread.h"
#include <thread>
#include <chrono>

void threadFunc(int i) {
	printf("AudioPlayer Version: %d\n", i);
}

void threadCount(int index) {
	for (int i = 0; i < 1000; i++) {
		printf("Thread: %d, Count: %d\n", index, i);
	}
}

class myThread : public Thread {
private:
	int a = 0;
public:
	myThread(int _a) {
		a = _a;
	}
	virtual void run() {
		printf("Thread %d\n", a);
	}
};

int main()
{
	myThread t(10);
	t.start();

	std::this_thread::sleep_for(std::chrono::seconds(2));

	return 0;
}

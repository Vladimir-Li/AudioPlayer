#pragma once

class Thread {
public:
	virtual void run() = 0;
	int start();
};
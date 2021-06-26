#pragma once

class AVPacket {
public:

};

class AVReader {
public:
	AVReader();
	~AVReader();

	int open(const char* path);
	int close();

	int read(AVPacket* packet);
};
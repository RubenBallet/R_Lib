#include "Thread.h"

namespace r_lib {

	Thread::Thread()
	{
	}


	Thread::~Thread()
	{
	}

	void Thread::start() {
		_thread = new std::thread(&Thread::run, this);
	}

	void Thread::wait() {
		_thread->join();
	}

	void Thread::exit() {
		std::terminate();
	}

	void Thread::sleep(int seconds) {
		std::this_thread::sleep_for(std::chrono::seconds(seconds));
	}

}
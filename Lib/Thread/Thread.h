#ifndef THREAD_H
#define THREAD_H
#include <thread>

namespace r_lib {
	class Thread //Meganisme voor synchronization
	{
	public:
		Thread();
		~Thread();
		void start();
		virtual void run() = 0;
		void wait();
		void exit(); //Werkt niet vrees ik
		void sleep(int seconds);
	private:
		std::thread * _thread;
	};
}

#endif //THREAD_H
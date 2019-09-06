#include <iostream>
#include <thread>
#include <string>
	using namespace std;

void hakdug (int x){
	int i = 0;
	for (i = 0; i < x; i++) {
		cout << "This is Thread 1 \n";
		}
}

void hamdog (int x) {
	int i = 0;
	for (i = 0; i < x; i++) {
		cout << "This is Thread 2 \n";
	}
}

void chelekengkeng (int x) {
	int i = 0;
	for (i = 0; i < x; i++) {
		cout << "This is Thread 3 \n";
	}
}

void hattudoggu (int x) {
	int i = 0;
	for (i = 0; i < x; i++) {
		cout << "This is Thread 4 \n";
	}
}
	
	int main() {
		
		int i = 0;
		thread th1(hakdug, 4);
		thread th2(hamdog, 4);
		thread th3(chelekengkeng, 4);
		thread th4(hattudoggu, 4);
		
		for(i = 0; i < 10; i++){
			cout << "This print is from Main Method \n";
		}
		
			th1.join();
			th2.join();
			th3.join();
			th4.join();
			return 0;
	}


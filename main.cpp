#include <iostream>


namespace World{
	void printHelloWorld(){
		std::cout << "Hello World\n";
	};

	void printByeWorld(){
		std::cout << "Bye World\n";
	};
};


int main(){
	World::printHelloWorld();
	World::printByeWorld();
	return 0;
}
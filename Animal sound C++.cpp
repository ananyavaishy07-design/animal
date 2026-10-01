#include<iostream>
#include<string>
using namespace std;

class Animal{
	public:
		void Animalsound(){
		cout<<"The Animal sounds are:\n ";
		}
};

class Pig: public Animal{
	public:
		void Animalsound(){
		cout<<"PIG -> Oink Oink\n";
		}
};

class Cat: public Animal{
    public:
    	void Animalsound(){
		cout<<"CAT -> Meow Meow]";
		}
};

int main(){
	
Animal obj1;
Pig obj2;
Cat obj3;

obj1.Animalsound();
obj2.Animalsound();
obj3.Animalsound();	
	
	return 0;
}

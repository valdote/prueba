#include<stdio.h>

void sayHello(char []);

int main(){
	sayHello("Marco");
	return 0;
}

void sayHello(char name[40]) {
	printf("Hello %s", name);
}

#include<iostream>
#include<string>
void stringDepletion(std::string* gstring);
void termOpener(std::string& termString);
int f(int n);
void switchFunc(int userInput);
std::string displayName;
int inputOpt;
int result;


int main(){
	std::cout<< "enter a display name" << std::endl;
	std::cin >> displayName;
	std::cout << displayName << " is now the diplay name, what would you like to do with it?" << std::endl;
	std::cout << "[1] -- Call a recursionFunc that calls itself constantly removing each letter until yout displayName is gone in which the function then stops calling itself" << std::endl;

	std::cout << "[2] -- Perform a terminal opening echoing your display name about 100 times" << std::endl;

	std::cout << "[3] -- idk" << std::endl;
	std::cin >> inputOpt;
	switchFunc(inputOpt);




	return 0;
}


void stringDepletion(std::string* gstring){
	std::cout << *gstring << std::endl;
}


void termOpener(std::string& termString){
	std::string appended = termString.append(" HELLO");
	std::cout << appended << " termOpener test" << std::endl;
}


int f(int n) {
	if(n == 1){
		return 1;	
	} else {
		std::cout<< n <<std::endl;
		return n * f(n-1);
	}
	
}


void switchFunc(int userInput){
	switch (userInput) {
		case 1:
			stringDepletion(&displayName);
		break;
		case 2:
			termOpener(displayName);
		break;
		case 3:
			result = f(3);
			std::cout << result;
		break;
		default:
			std::cout << "Invalid entry" << std::endl;
	
	}

}


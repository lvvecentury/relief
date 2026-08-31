#include<iostream>
#include<string>

std::string functionOvr(std::string hunterParam);
int functionOvr(int hunterParam); // Overloading Functions
int Multiply();
void Print(int (*func)());
int x = 9;
int y = 6;

int oneDA[] = {4,5,1};

int twoDA[2][6] = {
    {9,6,3,6,3,9},
    {3,6,1,2,1,0}
};

int threeDA[3][3][2] = {
    {
        {2,4},{5,10},{1,2}
    },
    {   
        {6,12},{6,12},{1,2}
    },
    {   
        {7,14},{7,14},{1,2}
    }

};


struct centuryData{
    int identNum;
    std::string devname;
    void fCalling(){
        std::cout<< identNum << std::endl;
    };

    centuryData* selfRP = nullptr;
}; // Structure name is centruyData that groups many data members and funcs
   // This type of structure must manually have its variable made. (centuryData.xxx) 


struct{
    int length = sizeof(threeDA) / sizeof(threeDA[0][0][0]);
    int sizeInBytes = sizeof(threeDA); // length x data size(in this case is 4)
    std::string ham;
} DimensionalSys; // This is a proper way to do it.



int main(){
    //std::string name = "John ";
    //std::string Last = "Doe";
    //std::cout<< name.append(Last) << std::endl; 

    //std::string hunterName = "dove";
    //int age = 21;

    //std::cout<< sandwhich.length << std::endl;
    //int* ptr = &age;
    //std::cout<< *ptr << std::endl;
    //int newVal = functionOvr(*ptr);
    //std::cout<< newVal << std::endl;
    Print(Multiply);



    centuryData centus;
    centuryData centusTwo;
    centus.identNum = 66;
    centusTwo.identNum = 21;

    centus.selfRP = &centusTwo;
    std::cout<< centus.selfRP->identNum << std::endl;

    centuryData* centptr = &centus;
    centptr->fCalling();

    /*for(int i = 0; i < length; i++){
        std::cout << numArr[i];
    }
   std::string* ptr = &messageOne;
   std::cout<< *ptr << std::endl;
   std::cout<< functionOvr(hunterName);*/
    return 0;
}

int Multiply(){ 
    bool XXX;
    if(oneDA[1] == 5){
        XXX = true;
    } else XXX = false;
    return XXX + 3;
}

void Print(int (*func)()){
    std::cout<< "The Main function Print was called, the parameter which is (/"" int(*func)() ""/) invoked the result of Multiply which was: "<< func() << std::endl;
}

std::string functionOvr(std::string hunterParam){
    hunterParam.append(" from above");
    return hunterParam;
}
int functionOvr(int hunterParam){
    return hunterParam + 10;
}


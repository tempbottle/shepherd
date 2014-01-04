#include <iostream>
#include "shepherd/shepherd.h"

shepherd::Shepherd::Shepherd(){
	
	std::cout<<"construct"<<std:endl;
}
shepherd::Shepherd::~Shepherd(){
	
	std::cout<<"destruct"<<std:endl;
}


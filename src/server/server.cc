#include <iostream>
#include "shepherd/server/server.h"

shepherd::server::Server::Server(){	
}
shepherd::server::Server::~Server(){
}
void shepherd::server::Server::Start(){
	std::cout<<"starting server..."<< '\n';
}
void shepherd::server::Server::Stop(){
	std::cout<<"stopping server..."<< '\n';
}


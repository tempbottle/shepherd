#include <iostream>
#include "server.h"

shepherd::server::Server::Server(){	
}
shepherd::server::Server::~Server(){
}
void shepherd::server::Server::Start(){
	std::cout<<"starting server..."<<std::endl;
}
void shepherd::server::Server::Stop(){
	std::cout<<"stopping server..."<<std::endl;
}


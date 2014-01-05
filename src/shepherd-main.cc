#include <iostream>
#include "server/server.h"
#include "shepherd/shepherd.h"

int main(int argc, const char *argv[]){
	try{
		shepherd::server::Server *server = new shepherd::server::Server;
		server->Start();
		server->Stop();
		delete server;
	}catch(std::exception& e){
		std::cout<< e.what()<< std::endl;
	}
	return 0;
}

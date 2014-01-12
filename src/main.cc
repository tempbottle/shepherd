#include <iostream>
#include <memory>
#include "server/server.h"
#include "server/config.h"
#include "shepherd/shepherd.h"

using namespace shepherd;

int main(int argc, const char *argv[]){
    
	try{

		server::Config *config = new server::Config;

		server::Server *server = new server::Server; 
		server->Start();
		server->Stop();

		delete config;
		delete server;
		
	}catch(std::exception& e){
		std::cout<< e.what()<< '\n';
	}
	return 0;
}

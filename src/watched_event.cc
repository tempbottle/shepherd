#include <iostream>
#include "shepherd/watched_event.h"

shepherd::WatchedEvent::WatchedEvent(const shepherd::Watcher::State &state, const shepherd::Watcher::EventType &eventType, const std::string &path){

	this->state = state;
	this->eventType = eventType;
	this->path = path;	
}
shepherd::WatchedEvent::~WatchedEvent(){
	 
}


#ifndef SHEPHERD_INCLUDE_EVENT_H_
#define SHEPHERD_INCLUDE_EVENT_H_

#include <string>
#include "shepherd/watcher.h"
#include "shepherd/watched_event.h"

namespace shepherd {
	class WatchedEvent{
		public:
			WatchedEvent(Watcher::State state, Watcher::EventType eventType, std::string path);
			~WatchedEvent();
		private:
			std::string path;
			State state;
	    	EventType eventType;
	};
}
#endif //SHEPHERD_INCLUDE_EVENT_H_

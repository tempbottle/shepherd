#ifndef SHEPHERD_INCLUDE_EVENT_H_
#define SHEPHERD_INCLUDE_EVENT_H_

#include <string>
#include "shepherd/watcher.h"

namespace shepherd {
	class WatchedEvent{
		public:
			WatchedEvent(const Watcher::State &state,
                         const Watcher::EventType &eventType,
                         const std::string &path);
			~WatchedEvent();
		private:
			std::string path;
			Watcher::State state;
	    	Watcher::EventType eventType;
	};
}
#endif //SHEPHERD_INCLUDE_EVENT_H_

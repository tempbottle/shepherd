#ifndef SHEPHERD_INCLUDE_STATS_H_
#define SHEPHERD_INCLUDE_STATS_H_

namespace shepherd {
	namespace server{
		class Stats{
        	public:
           		long GetOutstandingRequests() = 0;
				long GetPacketsReceived() = 0;
            
		};
	}
}
#endif //SHEPHERD_INCLUDE_SESSION_TRACKER_H_

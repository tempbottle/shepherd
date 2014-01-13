#ifndef SHEPHERD_INCLUDE_SERVER_SERVER_H_
#define SHEPHERD_INCLUDE_SERVER_SERVER_H_

namespace shepherd {
	namespace server{
		class Server{
			public: 				 
				Server();
                ~Server();
				void Start();
				void Stop();
		};
	}
}
#endif //SHEPHERD_INCUDE_SERVER_SERVER_H_

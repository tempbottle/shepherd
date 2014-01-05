#ifndef SHEPHERD_SERVER_H_
#define SHEPHERD_SERVER_H_

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
#endif //SHEPHERD_SERVER_H_

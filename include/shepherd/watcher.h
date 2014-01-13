#ifndef SHEPHERD_INCLUDE_WATCHER_H_
#define SHEPHERD_INCLUDE_WATCHER_H_


namespace shepherd {
	class Watcher{
		public: 				 
			virtual ~Watcher();
			class State{
				public:
					enum class Event{
						Unknown = -1,
						Disconnected = 0,
						NoSyncConnected = 1,
						SyncConnected = 3,
						AuthFailed = 4,
						ConnectedReadOnly = 5,
						SaslAuthenticated = 6,
						Expired = -112
					};
			};
			enum class EventType{
				None = -1,
	            NodeCreated = 1,
	            NodeDeleted = 2 ,
	            NodeDataChanged =3,
	            NodeChildrenChanged = 4
			};
			virtual void Process(const class WatchedEvent &event) = 0;
	};
}
#endif // SHEPHERD_INCLUDE_WATCHER_H_

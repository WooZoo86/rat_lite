#pragma once
#include <memory>

namespace boost { namespace asio { class io_service; } }

namespace SL {
	namespace Remote_Access_Library {

		namespace Network {
			namespace INTERNAL {
				class WebSocketListinerImpl;
			}
			class IBaseNetworkDriver;
			struct Server_Config;
			class WebSocketListener {
			public:
		
				WebSocketListener(IBaseNetworkDriver* netevent, boost::asio::io_service& io_service, std::shared_ptr<Network::Server_Config> config);
				~WebSocketListener();
				WebSocketListener(const WebSocketListener&) = delete;
				WebSocketListener(WebSocketListener&&) = delete;
				//no copy allowed
				WebSocketListener& operator=(WebSocketListener&&) = delete;
				WebSocketListener& operator=(const WebSocketListener&) = delete;

				void Start();
				void Stop();

			private:
				INTERNAL::WebSocketListinerImpl* _WebSocketListinerImpl;
	
			};
		}
	}
}
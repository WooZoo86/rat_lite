
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ClientDriver.h"
#include "ServerDriver.h"
#include "IClientDriver.h"
#include "IServerDriver.h"

class TestClientDriver : public SL::RAT::IClientDriver {
public:
	std::shared_ptr<SL::RAT::Client_Config> Config_;

	SL::RAT::ClientDriver ClientDriver_;

	TestClientDriver(): ClientDriver_(this){

	}


	virtual ~TestClientDriver() {}
	virtual void onReceive_Monitors(const SL::Screen_Capture::Monitor* monitors, int num_of_monitors) override {

	}
	virtual void onReceive_ImageDif(const SL::RAT::Image& img, int monitor_id) {

	}
	virtual void onReceive_MouseImage(const SL::RAT::Image& img) {

	}
	virtual void onReceive_MousePos(const SL::RAT::Point* pos) {

	}
	virtual void onReceive_ClipboardText(const char* data, unsigned int length) {

	}

	virtual void onConnection(const std::shared_ptr<SL::RAT::IWebSocket>& socket) override
	{
	}
	virtual void onMessage(const SL::RAT::IWebSocket & socket, const char * data, size_t length) override
	{
	}
	virtual void onDisconnection(const SL::RAT::IWebSocket & socket, int code, char * message, size_t length) override
	{
	}
};

class TestServerDriver : public SL::RAT::IServerDriver {
public:

	std::shared_ptr<SL::RAT::Server_Config> Config_;

	TestServerDriver() {

	}


	virtual ~TestServerDriver() {}
	



	// Inherited via IServerDriver
	virtual void onConnection(const std::shared_ptr<SL::RAT::IWebSocket>& socket) override
	{
	}

	virtual void onMessage(const SL::RAT::IWebSocket & socket, const char * data, size_t length) override
	{
	}

	virtual void onDisconnection(const SL::RAT::IWebSocket & socket, int code, char * message, size_t length) override
	{
	}

	virtual void onReceive_Mouse(const SL::RAT::MouseEvent * m) override
	{
	}

	virtual void onReceive_Key(const SL::RAT::KeyEvent * m) override
	{
	}

	virtual void onReceive_ClipboardText(const char * data, unsigned int len) override
	{
	}

};


TEST_CASE("Testing Client Driver", "[TestClientDriver]") {
	TestClientDriver client;
	TestServerDriver server;



}
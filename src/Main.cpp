//============================================================================
// Name        : httpServe_poco.cpp
// Author      : Nilo Jose de Andrade Neto
// Version     :
// Copyright   : Your copyright notice
// Description : HTTPServer in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Poco/Net/HTTPServer.h"
#include "Poco/Net/HTTPServerParams.h"

#include "RequestHandlerFactory.h"

using Poco::Net::HTTPServer;
using Poco::Net::HTTPServerParams;

using namespace std;

int main() {
	cout << "HTTPServer" << endl; 

	HTTPServerParams* pParams = new HTTPServerParams;
	pParams->setKeepAlive(false);
	pParams->setTimeout( Poco::Timespan( 9, 1));
	pParams->setServerName("teste nilooooooo");

	HTTPServer srv(new HTTP::RequestHandlerFactory(), 8080 , pParams);
 	srv.start();

 	while(true){
 	}

	return EXIT_SUCCESS;

}

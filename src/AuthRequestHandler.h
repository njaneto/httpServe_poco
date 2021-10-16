/*
 * AuthRequestHandler.h
 *
 *  Created on: 20 de jun de 2020
 *      Author: njaneto
 */

#ifndef AUTHREQUESTHANDLER_H_
#define AUTHREQUESTHANDLER_H_

#include "Poco/Net/HTTPRequestHandler.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/StreamCopier.h"
#include "Poco/CountingStream.h"

#include <sstream>

using Poco::Net::HTTPRequestHandler;
using Poco::Net::HTTPServerRequest;
using Poco::Net::HTTPServerResponse;
using Poco::Net::HTTPMessage;
using Poco::CountingInputStream;
using Poco::StreamCopier;

namespace HTTP {

class AuthRequestHandler : public HTTPRequestHandler {
public:
	AuthRequestHandler();
	virtual ~AuthRequestHandler();

	void handleRequest(HTTPServerRequest& request, HTTPServerResponse& response);

};

} /* namespace HTTP */

#endif /* AUTHREQUESTHANDLER_H_ */

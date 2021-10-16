/*
 * RequestHandlerFactory.h
 *
 *  Created on: 20 de jun de 2020
 *      Author: njaneto
 */

#ifndef REQUESTHANDLERFACTORY_H_
#define REQUESTHANDLERFACTORY_H_

#include "Poco/Net/HTTPRequestHandlerFactory.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Net/HTTPRequestHandler.h"

using Poco::Net::HTTPRequestHandlerFactory;
using Poco::Net::HTTPServerRequest;
using Poco::Net::HTTPRequestHandler;

namespace HTTP {

class RequestHandlerFactory : public HTTPRequestHandlerFactory{
public:
	RequestHandlerFactory();
	virtual ~RequestHandlerFactory();

	HTTPRequestHandler* createRequestHandler(const HTTPServerRequest& request);

};

} /* namespace http */

#endif /* REQUESTHANDLERFACTORY_H_ */

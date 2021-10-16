/*
 * RequestHandlerFactory.cpp
 *
 *  Created on: 20 de jun de 2020
 *      Author: njaneto
 */

#include "RequestHandlerFactory.h"
#include "AuthRequestHandler.h"

namespace HTTP {
//----------------------------------------------------
RequestHandlerFactory::RequestHandlerFactory() {
}
//----------------------------------------------------
RequestHandlerFactory::~RequestHandlerFactory() {
}
//----------------------------------------------------
HTTPRequestHandler * RequestHandlerFactory::createRequestHandler( const HTTPServerRequest& request )
{
	if (request.getURI() == "/auth")
		return new HTTP::AuthRequestHandler();
	else
		return NULL;
}


} /* namespace http */

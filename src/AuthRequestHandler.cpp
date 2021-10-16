/*
 * AuthRequestHandler.cpp
 *
 *  Created on: 20 de jun de 2020
 *      Author: njaneto
 */

#include "AuthRequestHandler.h"

#include <iostream>
#include <fstream>

namespace HTTP {
//----------------------------------------------------
AuthRequestHandler::AuthRequestHandler() {

}
//----------------------------------------------------
AuthRequestHandler::~AuthRequestHandler() {
}
//----------------------------------------------------
void AuthRequestHandler::handleRequest(HTTPServerRequest& request, HTTPServerResponse& response){

	if (request.getChunkedTransferEncoding())
		response.setChunkedTransferEncoding(true);
	else if (request.getContentLength() != HTTPMessage::UNKNOWN_CONTENT_LENGTH)
		response.setContentLength(request.getContentLength());

	response.setContentType(request.getContentType());

	std::cout << (unsigned) request.serverAddress().port() << std::endl;
	std::cout << request.getURI() << std::endl;
	std::cout << request.clientAddress().toString() << std::endl;

    std::string str;
    CountingInputStream cistr( request.stream() );
    StreamCopier::copyToString( cistr, str, cistr.chars() + 1 );
    std::cout << str << std::endl;

    response.send() << str;

/*
	std::istream& istr = request.stream();
	std::ostream& ostr = response.send();
	StreamCopier::copyStream(istr, ostr);
*/

}

} /* namespace HTTP */

/*
#include<stdio.h>

int main(int argc, char const *argv[]) {

    printf("Hello World");
}
*/
#define BOOST_NETWORK_ENABLE_HTTPS
/*`
  This is a part of the 'Hello World' example.  We create a client
  object and make a single HTTP request.  If we use make this request
  to the `hello_world_server`, then the output is simply "Hello,
  World!".
 */
#include <boost/network/protocol/http/client.hpp>
#include <iostream>

namespace http = boost::network::http;

int main(int argc, char *argv[]) {

  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " url" << std::endl;
    return 1;
  }

  try {
    /*<< Creates the client. >>*/
    http::client client;
    /*<< Creates a request using a URI supplied on the command
         line. >>*/
    http::client::request request(argv[1]);
    /*<< Gets a response from the HTTP server. >>*/
    http::client::response response = client.get(request);
    /*<< Prints the response body to the console. >>*/
    std::cout << body(response) << std::endl;
  }
  catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }

  return 0;
}
//]
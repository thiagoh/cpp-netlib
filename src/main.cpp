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
#include <iostream>
#include <string>
#include <map>
#include <boost/network/uri.hpp>
#include <boost/network/uri/uri_io.hpp>
#include <boost/network/protocol/http/client.hpp>

using namespace boost::network;
using namespace std;

int main(int argc, char *argv[]) {

	if (argc != 2) {
		cerr << "Usage: " << argv[0] << " url" << endl;
		return 1;
	}

	uri::uri url(argv[1]);

	try {

		/*<< Creates the client. >>*/
		http::client client;
		/*<< Creates a request using a URI supplied on the command
		 line. >>*/
		http::client::request request(argv[1]);
		/*<< Gets a response from the HTTP server. >>*/
		http::client::response response = client.get(request);
		/*<< Prints the response body to the console. >>*/
		//cout << body(response);
		cout << "Full url: " << url.string().c_str() << endl;
		cout << "Query 1: " << url.query().c_str() << endl;
		cout << "Query 2: " << url.query().c_str() << endl;

		std::map<std::string, std::string> queries;
		uri::query_map(url, queries);

		//cout << "Query size : " << queries.size() << endl;

		if (!queries.empty()) {

			std::map<std::string, std::string>::const_iterator itr(queries.begin());
			std::map<std::string, std::string>::const_iterator end(queries.end());

			for (; itr != end; ++itr) {
				cout << "Query : " << itr->first << " = " << itr->second << endl;
			}
		}

		//cout << "Query: " << url.query_range().

		cout << "\n\n" << endl;

	} catch (exception &e) {
		cerr << e.what() << endl;
		return 1;
	}

	return 0;
}
//]


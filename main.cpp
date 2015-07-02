
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
#include "src/include/Crypt.h"

using namespace com::thiagoh::crypt;

int main(int argc, char *argv[]) {

	try {

		std::string plain(argv[0]);
		unsigned char* iv = (unsigned char *) "abcdef";
		unsigned char* key = (unsigned char *) "abcdefghij";

		std::string cipher = Crypt::encrypt(plain, iv, key);

		std::cout << cipher << std::endl;

		//test2();
		//test1(argv[1]);

	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

}


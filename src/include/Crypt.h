/*
 * Crypt.h
 *
 *  Created on: Jul 2, 2015
 *      Author: thiagoh
 */

#ifndef SRC_CRYPT_H_
#define SRC_CRYPT_H_

#include <string>

namespace com {
namespace thiagoh {
namespace crypt {

class Crypt {
public:
	Crypt();
	virtual ~Crypt();

	static std::string encrypt(unsigned char* plaintext, int plaintextLength, unsigned char *key, unsigned char* iv);
	static std::string encrypt(std::string plaintext, unsigned char *key, unsigned char* iv);

	static std::string decrypt(unsigned char* ciphertext, int plaintextLength, unsigned char *key, unsigned char* iv);
	static std::string decrypt(std::string plaintext, int plaintextLength, unsigned char *key, unsigned char* iv);
};

} /* namespace crypt */
} /* namespace thiagoh */
} /* namespace com */

#endif /* SRC_CRYPT_H_ */

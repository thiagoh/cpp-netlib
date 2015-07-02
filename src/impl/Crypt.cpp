/*
 * Crypt.cpp
 *
 *  Created on: Jul 2, 2015
 *      Author: thiagoh
 */

#include "Crypt.h"

namespace com {
namespace thiagoh {
namespace crypt {

Crypt::Crypt() {

}

Crypt::~Crypt() {
}

std::string Crypt::encrypt(unsigned char* plaintext, int plaintextLength, unsigned char *key, unsigned char* iv) {
	return "";
}

std::string Crypt::encrypt(std::string plaintext, unsigned char *key, unsigned char* iv) {
	return "";
}

std::string Crypt::decrypt(unsigned char* ciphertext, int plaintextLength, unsigned char *key, unsigned char* iv) {
	return "";
}

std::string Crypt::decrypt(std::string plaintext, int plaintextLength, unsigned char *key, unsigned char* iv) {
	return "";
}

} /* namespace crypt */
} /* namespace thiagoh */
} /* namespace com */

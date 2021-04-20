/*
* some conversion utils
*/

#ifdef _MSC_VER
#pragma once
#endif

#ifndef _IDA_CONVERSION_UTILS_HPP_
#define _IDA_CONVERSION_UTILS_HPP_

#include <cstdint>
#include <iostream>
#include <iomanip>

#include "ida_license.hpp"
#include "ida_key.hpp"

using namespace std;

namespace ida
{
	void print_license(const license_t& license);

	string get_license_type(uint16_t type);
	string get_license_id(const id_t& id);
	string get_time(time_t time, bool extended = false);
	string get_username(const char* username);
	string get_hex(const uint8_t* data, size_t size);

	time_t get_time(const string& value, bool extended = false);
}

#endif // _IDA_CONVERSION_UTILS_HPP_

#ifndef _U_TYPES_
#define _U_TYPES_

#include <string>
#include <atomic>

static std::string DRAWCOMPONENT = "DrawComponent";
static std::string CALCULCOMPONENT = "CalculComponent";

typedef bool boolean;

typedef unsigned char byte;

typedef unsigned char u_char;

typedef unsigned short int u_int_16;
typedef signed short int int_16;
typedef unsigned long int u_int_32;
typedef signed long int int_32;
typedef unsigned long long u_int_64;
typedef signed long long int_64;

typedef float float_32;
typedef double float_64;

typedef std::atomic_ullong atomic_u_int_64;

#endif //_U_TYPES_

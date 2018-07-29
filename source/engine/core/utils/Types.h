/*
* Types.h
* Copyright (C) 2018 Croze Erwan
*
* This program is free software : you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

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

typedef struct vector_struct {
	float x;
	float y;
}vector_float;

enum graphic_backend {
    BACKEND_SFML
};


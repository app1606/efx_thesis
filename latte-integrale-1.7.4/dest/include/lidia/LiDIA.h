/* include/LiDIA/LiDIA.h.  Generated from LiDIA.h.in by configure.  */
// -*- C++ -*-
//==============================================================================================
//
//	This file is part of LiDIA --- a library for computational number theory
//
//	Copyright (c) 1994--2001 the LiDIA Group.  All rights reserved.
//
//	See http://www.informatik.tu-darmstadt.de/TI/LiDIA/
//
//----------------------------------------------------------------------------------------------
//
//	$Id$
//
//	Author	: Thomas Papanikolaou, Safuat Hamdy
//	Changes	: See CVS log
//
//==============================================================================================


#ifndef LIDIA_LIDIA_H_GUARD_
#define LIDIA_LIDIA_H_GUARD_


#define LIDIA_MAJOR_VERSION 2
#define LIDIA_MINOR_VERSION 3
#define LIDIA_PATCH_VERSION 0


// <cstddef> canonically defines NULL and size_t
#include	<cstddef>
#include        <cstdlib>
#include	<climits>


#define C_STDIO

// <iostream> is used almost everywhere
#include	<iostream>
#ifdef C_STDIO
# include	<cstdio>
#endif


#define LIDIA_ARITH_GMP		0x100
#define LIDIA_ARITH_CLN		0x101
#define LIDIA_ARITH_LIBI	0x102
#define LIDIA_ARITH_PIOLOGIE	0x103
//#define LIDIA_ARITH_FREELIP	0x104
//#define LIDIA_ARITH_OPENSSL	0x105


//
// set LIDIA_ARITHMETIC to one of the above values
//
#define LIDIA_ARITHMETIC LIDIA_ARITH_GMP

// safety belt
#if !defined LIDIA_ARITHMETIC || LIDIA_ARITHMETIC == 0
# error LiDIA arithmetic not defined or improperly set!
#endif


//
// Set to 1 if the arithmetic interface inlines the underlying arithmetic routines.
//
#define INLINE_INTERFACE 1


//
// some compiler characteristics (at configuration time)
//

// The number of bytes in a short.
#define SIZEOF_SHORT 2

// The number of bytes in a int.
#define SIZEOF_INT 4

// The number of bytes in a long.
#define SIZEOF_LONG 8

// The number of bytes in a double.
#define SIZEOF_DOUBLE 8

// Define, if words are big endian.
/* #undef WORDS_BIGENDIAN */

// Define if <strstream> shall be used instead of <sstream>
/* #undef OSSTREAM_USE_STRSTREAM */


#if defined(__hpux) && !defined(__GNUC__)
# define HAVE_HP_UX_CC
# define LIDIA_NO_SF_BIGINT
#endif


// Define if you want error handling via exceptions
#define LIDIA_EXCEPTIONS 1

// Define if you want namespaces.
#define LIDIA_NAMESPACE 1

// if name spaces are not wanted, define LiDIA to be <empty>
#ifndef LIDIA_NAMESPACE
# define LiDIA
#endif



#ifdef LIDIA_NAMESPACE
namespace LiDIA {
#endif



enum {
	BITS_PER_CHAR = CHAR_BIT,
	HIGH_BIT_UCHAR = (1UL << (BITS_PER_CHAR - 1)),

	BITS_PER_SHORT = BITS_PER_CHAR * SIZEOF_SHORT,
	HIGH_BIT_USHORT = (1UL << (BITS_PER_SHORT - 1)),

	BITS_PER_INT = BITS_PER_CHAR * SIZEOF_INT,
	HIGH_BIT_UINT = (1UL << (BITS_PER_INT - 1)),

	BITS_PER_LONG = BITS_PER_CHAR * SIZEOF_LONG,
	HIGH_BIT_ULONG = (1UL << (BITS_PER_LONG - 1)),

	BITS_PER_DOUBLE = BITS_PER_CHAR * SIZEOF_DOUBLE
};



//
// these are the types for machine integers
// define sizetify to longify if lidia_size_t == long
//

typedef          int lidia_size_t;
#define sizetify intify

typedef          long sdigit;
// typedef unsigned long udigit;



#ifdef LIDIA_NAMESPACE
}	// end of namespace LiDIA
#endif



//
// Debug handling for templates
//

#ifndef LIDIA_DEBUG_LIMIT
# define LIDIA_DEBUG_LIMIT -1000
#endif
#define LDBL_VECTOR (LIDIA_DEBUG_LIMIT + 0)
#define LDBL_UNIPOL (LIDIA_DEBUG_LIMIT + 50)
#define LDBL_UNIPOW (LIDIA_DEBUG_LIMIT + 100)
#define LDBL_MATRIX (LIDIA_DEBUG_LIMIT + 150)



//
// include LiDIA system files
//

#include	<LiDIA/warning.h>
#include	<LiDIA/error.h>
#include	<LiDIA/debug.h>
#include	<LiDIA/memory.h>



//
//  The maximal number of characters of which the
//  operating system is able to put in one line.
//

#ifndef LIDIA_CHARS_PER_LINE
# define LIDIA_CHARS_PER_LINE 0
#endif



//
// LiDIA macros
//

#ifndef LIDIA_MACROS
# define LIDIA_MACROS
#endif

#define lidia_rint(x) (floor((x)+0.5))

#if (defined(__hpux) && !defined(__STDC__))
# define __STDC__
#endif

#if defined(__STDC__) || defined (_MSC_VER)
# define LIDIA_CONCAT2(a,b) a##b
# define LIDIA_CONCAT3(a,b,c) a##b##c
# define LIDIA_CONCAT4(a,b,c,d) a##b##c##d
#else
# define LIDIA_CONCAT2(a,b) a/**/b
# define LIDIA_CONCAT3(a,b,c) a/**/b/**/c
# define LIDIA_CONCAT4(a,b,c,d) a/**/b/**/c/**/d
#endif



#endif	// LIDIA_LIDIA_H_GUARD_

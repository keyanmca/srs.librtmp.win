#ifndef __INTTYPES_H_  
#define __INTTYPES_H_  
  
typedef signed char int8_t;  
typedef unsigned char uint8_t;  
  
typedef int int16_t;  
typedef unsigned int uint16_t;  
  
typedef int int32_t;  
typedef unsigned long uint32_t;  
typedef unsigned long u_int32_t;  
   
typedef long long int64_t;  
typedef unsigned long long uint64_t;  
  
typedef int16_t intptr_t;  
typedef uint16_t uintptr_t;  

typedef long ssize_t;

/* The ISO C99 standard specifies that these macros must only be
   defined if explicitly requested.  */
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS

# if __WORDSIZE == 64
#  define __PRI64_PREFIX    "l"
#  define __PRIPTR_PREFIX   "l"
# else
#  define __PRI64_PREFIX    "ll"
#  define __PRIPTR_PREFIX
# endif

/* Macros for printing format specifiers.  */

/* Decimal notation.  */
# define PRId8      "d"
# define PRId16     "d"
# define PRId32     "d"
# define PRId64     __PRI64_PREFIX "d"
#endif
  
#endif

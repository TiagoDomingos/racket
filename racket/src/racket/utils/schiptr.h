
#ifndef PRIdPTR
# ifndef PRINTF_INTPTR_SIZE_PREFIX
#  define PRINTF_INTPTR_SIZE_PREFIX "l"
# endif
# define PRIdPTR PRINTF_INTPTR_SIZE_PREFIX "d"
# define PRIxPTR PRINTF_INTPTR_SIZE_PREFIX "x"
#endif

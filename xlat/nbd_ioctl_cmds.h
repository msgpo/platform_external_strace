/* Generated by ./xlat/gen.sh from ./xlat/nbd_ioctl_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NBD_SET_SOCK) || (defined(HAVE_DECL_NBD_SET_SOCK) && HAVE_DECL_NBD_SET_SOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_SET_SOCK) == (_IO( 0xab, 0 )), "NBD_SET_SOCK != _IO( 0xab, 0 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_SET_SOCK _IO( 0xab, 0 )
#endif
#if defined(NBD_SET_BLKSIZE) || (defined(HAVE_DECL_NBD_SET_BLKSIZE) && HAVE_DECL_NBD_SET_BLKSIZE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_SET_BLKSIZE) == (_IO( 0xab, 1 )), "NBD_SET_BLKSIZE != _IO( 0xab, 1 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_SET_BLKSIZE _IO( 0xab, 1 )
#endif
#if defined(NBD_SET_SIZE) || (defined(HAVE_DECL_NBD_SET_SIZE) && HAVE_DECL_NBD_SET_SIZE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_SET_SIZE) == (_IO( 0xab, 2 )), "NBD_SET_SIZE != _IO( 0xab, 2 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_SET_SIZE _IO( 0xab, 2 )
#endif
#if defined(NBD_DO_IT) || (defined(HAVE_DECL_NBD_DO_IT) && HAVE_DECL_NBD_DO_IT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_DO_IT) == (_IO( 0xab, 3 )), "NBD_DO_IT != _IO( 0xab, 3 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_DO_IT _IO( 0xab, 3 )
#endif
#if defined(NBD_CLEAR_SOCK) || (defined(HAVE_DECL_NBD_CLEAR_SOCK) && HAVE_DECL_NBD_CLEAR_SOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_CLEAR_SOCK) == (_IO( 0xab, 4 )), "NBD_CLEAR_SOCK != _IO( 0xab, 4 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_CLEAR_SOCK _IO( 0xab, 4 )
#endif
#if defined(NBD_CLEAR_QUE) || (defined(HAVE_DECL_NBD_CLEAR_QUE) && HAVE_DECL_NBD_CLEAR_QUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_CLEAR_QUE) == (_IO( 0xab, 5 )), "NBD_CLEAR_QUE != _IO( 0xab, 5 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_CLEAR_QUE _IO( 0xab, 5 )
#endif
#if defined(NBD_PRINT_DEBUG) || (defined(HAVE_DECL_NBD_PRINT_DEBUG) && HAVE_DECL_NBD_PRINT_DEBUG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_PRINT_DEBUG) == (_IO( 0xab, 6 )), "NBD_PRINT_DEBUG != _IO( 0xab, 6 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_PRINT_DEBUG _IO( 0xab, 6 )
#endif
#if defined(NBD_SET_SIZE_BLOCKS) || (defined(HAVE_DECL_NBD_SET_SIZE_BLOCKS) && HAVE_DECL_NBD_SET_SIZE_BLOCKS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_SET_SIZE_BLOCKS) == (_IO( 0xab, 7 )), "NBD_SET_SIZE_BLOCKS != _IO( 0xab, 7 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_SET_SIZE_BLOCKS _IO( 0xab, 7 )
#endif
#if defined(NBD_DISCONNECT) || (defined(HAVE_DECL_NBD_DISCONNECT) && HAVE_DECL_NBD_DISCONNECT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_DISCONNECT) == (_IO( 0xab, 8 )), "NBD_DISCONNECT != _IO( 0xab, 8 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_DISCONNECT _IO( 0xab, 8 )
#endif
#if defined(NBD_SET_TIMEOUT) || (defined(HAVE_DECL_NBD_SET_TIMEOUT) && HAVE_DECL_NBD_SET_TIMEOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_SET_TIMEOUT) == (_IO( 0xab, 9 )), "NBD_SET_TIMEOUT != _IO( 0xab, 9 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_SET_TIMEOUT _IO( 0xab, 9 )
#endif
#if defined(NBD_SET_FLAGS) || (defined(HAVE_DECL_NBD_SET_FLAGS) && HAVE_DECL_NBD_SET_FLAGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NBD_SET_FLAGS) == (_IO( 0xab, 10)), "NBD_SET_FLAGS != _IO( 0xab, 10)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NBD_SET_FLAGS _IO( 0xab, 10)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nbd_ioctl_cmds in mpers mode

# else

static
const struct xlat nbd_ioctl_cmds[] = {
 XLAT(NBD_SET_SOCK),
 XLAT(NBD_SET_BLKSIZE),
 XLAT(NBD_SET_SIZE),
 XLAT(NBD_DO_IT),
 XLAT(NBD_CLEAR_SOCK),
 XLAT(NBD_CLEAR_QUE),
 XLAT(NBD_PRINT_DEBUG),
 XLAT(NBD_SET_SIZE_BLOCKS),
 XLAT(NBD_DISCONNECT),
 XLAT(NBD_SET_TIMEOUT),
 XLAT(NBD_SET_FLAGS),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */

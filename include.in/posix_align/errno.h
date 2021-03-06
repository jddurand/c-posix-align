#ifndef POSIX_ALIGN_ERRNO_H
#define POSIX_ALIGN_ERRNO_H

/*
 * POSIX does not give values of errno.
 * We take those already defined for the current system (OS+compiler)
 * and define those missing
 */

#undef  _POSIX_ALIGN_ERRNO_START
#define _POSIX_ALIGN_ERRNO_START 10000

#cmakedefine E2BIG           @E2BIG@
#cmakedefine EACCES          @EACCES@
#cmakedefine EADDRINUSE      @EADDRINUSE@
#cmakedefine EADDRNOTAVAIL   @EADDRNOTAVAIL@
#cmakedefine EAFNOSUPPORT    @EAFNOSUPPORT@
#cmakedefine EAGAIN          @EAGAIN@
#cmakedefine EALREADY        @EALREADY@
#cmakedefine EBADF           @EBADF@
#cmakedefine EBADMSG         @EBADMSG@
#cmakedefine EBUSY           @EBUSY@
#cmakedefine ECANCELED       @ECANCELED@
#cmakedefine ECHILD          @ECHILD@
#cmakedefine ECONNABORTED    @ECONNABORTED@
#cmakedefine ECONNREFUSED    @ECONNREFUSED@
#cmakedefine ECONNRESET      @ECONNRESET@
#cmakedefine EDEADLK         @EDEADLK@
#cmakedefine EDESTADDRREQ    @EDESTADDRREQ@
#cmakedefine EDOM            @EDOM@
#cmakedefine EDQUOT          @EDQUOT@
#cmakedefine EEXIST          @EEXIST@
#cmakedefine EFAULT          @EFAULT@
#cmakedefine EFBIG           @EFBIG@
#cmakedefine EHOSTUNREACH    @EHOSTUNREACH@
#cmakedefine EIDRM           @EIDRM@
#cmakedefine EILSEQ          @EILSEQ@
#cmakedefine EINPROGRESS     @EINPROGRESS@
#cmakedefine EINTR           @EINTR@
#cmakedefine EINVAL          @EINVAL@
#cmakedefine EIO             @EIO@
#cmakedefine EIO             @EIO@
#cmakedefine EISCONN         @EISCONN@
#cmakedefine EISDIR          @EISDIR@
#cmakedefine ELOOP           @ELOOP@
#cmakedefine EMFILE          @EMFILE@
#cmakedefine EMLINK          @EMLINK@
#cmakedefine EMSGSIZE        @EMSGSIZE@
#cmakedefine EMULTIHOP       @EMULTIHOP@
#cmakedefine ENAMETOOLONG    @ENAMETOOLONG@
#cmakedefine ENETDOWN        @ENETDOWN@
#cmakedefine ENETRESET       @ENETRESET@
#cmakedefine ENETUNREACH     @ENETUNREACH@
#cmakedefine ENFILE          @ENFILE@
#cmakedefine ENOBUFS         @ENOBUFS@
#cmakedefine ENODATA         @ENODATA@
#cmakedefine ENODEV          @ENODEV@
#cmakedefine ENOENT          @ENOENT@
#cmakedefine ENOEXEC         @ENOEXEC@
#cmakedefine ENOLCK          @ENOLCK@
#cmakedefine ENOLINK         @ENOLINK@
#cmakedefine ENOMEM          @ENOMEM@
#cmakedefine ENOMSG          @ENOMSG@
#cmakedefine ENOPROTOOPT     @ENOPROTOOPT@
#cmakedefine ENOSPC          @ENOSPC@
#cmakedefine ENOSR           @ENOSR@
#cmakedefine ENOSTR          @ENOSTR@
#cmakedefine ENOSYS          @ENOSYS@
#cmakedefine ENOTCONN        @ENOTCONN@
#cmakedefine ENOTDIR         @ENOTDIR@
#cmakedefine ENOTEMPTY       @ENOTEMPTY@
#cmakedefine ENOTRECOVERABLE @ENOTRECOVERABLE@
#cmakedefine ENOTSOCK        @ENOTSOCK@
#cmakedefine ENOTSUP         @ENOTSUP@
#cmakedefine ENOTTY          @ENOTTY@
#cmakedefine ENXIO           @ENXIO@
#cmakedefine EOPNOTSUPP      @EOPNOTSUPP@
#cmakedefine EOVERFLOW       @EOVERFLOW@
#cmakedefine EOWNERDEAD      @EOWNERDEAD@
#cmakedefine EPERM           @EPERM@
#cmakedefine EPIPE           @EPIPE@
#cmakedefine EPROTO          @EPROTO@
#cmakedefine EPROTONOSUPPORT @EPROTONOSUPPORT@
#cmakedefine EPROTOTYPE      @EPROTOTYPE@
#cmakedefine ERANGE          @ERANGE@
#cmakedefine EROFS           @EROFS@
#cmakedefine ESPIPE          @ESPIPE@
#cmakedefine ESRCH           @ESRCH@
#cmakedefine ESTALE          @ESTALE@
#cmakedefine ETIME           @ETIME@
#cmakedefine ETIMEDOUT       @ETIMEDOUT@
#cmakedefine ETXTBSY         @ETXTBSY@
#cmakedefine EWOULDBLOCK     @EWOULDBLOCK@
#cmakedefine EXDEV           @EXDEV@

#ifndef E2BIG
#define E2BIG (_POSIX_ALIGN_ERRNO_START+1)
#endif
#ifndef EACCES
#define EACCES (_POSIX_ALIGN_ERRNO_START+2)
#endif
#ifndef EADDRINUSE
#define EADDRINUSE (_POSIX_ALIGN_ERRNO_START+3)
#endif
#ifndef EADDRNOTAVAIL
#define EADDRNOTAVAIL (_POSIX_ALIGN_ERRNO_START+4)
#endif
#ifndef EAFNOSUPPORT
#define EAFNOSUPPORT (_POSIX_ALIGN_ERRNO_START+5)
#endif
#ifndef EAGAIN
#define EAGAIN (_POSIX_ALIGN_ERRNO_START+6)
#endif
#ifndef EALREADY
#define EALREADY (_POSIX_ALIGN_ERRNO_START+7)
#endif
#ifndef EBADF
#define EBADF (_POSIX_ALIGN_ERRNO_START+8)
#endif
#ifndef EBADMSG
#define EBADMSG (_POSIX_ALIGN_ERRNO_START+9)
#endif
#ifndef EBUSY
#define EBUSY (_POSIX_ALIGN_ERRNO_START+10)
#endif
#ifndef ECANCELED
#define ECANCELED (_POSIX_ALIGN_ERRNO_START+11)
#endif
#ifndef ECHILD
#define ECHILD (_POSIX_ALIGN_ERRNO_START+12)
#endif
#ifndef ECONNABORTED
#define ECONNABORTED (_POSIX_ALIGN_ERRNO_START+13)
#endif
#ifndef ECONNREFUSED
#define ECONNREFUSED (_POSIX_ALIGN_ERRNO_START+14)
#endif
#ifndef ECONNRESET
#define ECONNRESET (_POSIX_ALIGN_ERRNO_START+15)
#endif
#ifndef EDEADLK
#define EDEADLK (_POSIX_ALIGN_ERRNO_START+16)
#endif
#ifndef EDESTADDRREQ
#define EDESTADDRREQ (_POSIX_ALIGN_ERRNO_START+17)
#endif
#ifndef EDOM
#define EDOM (_POSIX_ALIGN_ERRNO_START+18)
#endif
#ifndef EDQUOT
#define EDQUOT (_POSIX_ALIGN_ERRNO_START+19)
#endif
#ifndef EEXIST
#define EEXIST (_POSIX_ALIGN_ERRNO_START+20)
#endif
#ifndef EFAULT
#define EFAULT (_POSIX_ALIGN_ERRNO_START+21)
#endif
#ifndef EFBIG
#define EFBIG (_POSIX_ALIGN_ERRNO_START+22)
#endif
#ifndef EHOSTUNREACH
#define EHOSTUNREACH (_POSIX_ALIGN_ERRNO_START+23)
#endif
#ifndef EIDRM
#define EIDRM (_POSIX_ALIGN_ERRNO_START+24)
#endif
#ifndef EILSEQ
#define EILSEQ (_POSIX_ALIGN_ERRNO_START+25)
#endif
#ifndef EINPROGRESS
#define EINPROGRESS (_POSIX_ALIGN_ERRNO_START+26)
#endif
#ifndef EINTR
#define EINTR (_POSIX_ALIGN_ERRNO_START+27)
#endif
#ifndef EINVAL
#define EINVAL (_POSIX_ALIGN_ERRNO_START+28)
#endif
#ifndef EIO
#define EIO (_POSIX_ALIGN_ERRNO_START+29)
#endif
#ifndef EIO
#define EIO (_POSIX_ALIGN_ERRNO_START+30)
#endif
#ifndef EISCONN
#define EISCONN (_POSIX_ALIGN_ERRNO_START+31)
#endif
#ifndef EISDIR
#define EISDIR (_POSIX_ALIGN_ERRNO_START+32)
#endif
#ifndef ELOOP
#define ELOOP (_POSIX_ALIGN_ERRNO_START+33)
#endif
#ifndef EMFILE
#define EMFILE (_POSIX_ALIGN_ERRNO_START+34)
#endif
#ifndef EMLINK
#define EMLINK (_POSIX_ALIGN_ERRNO_START+35)
#endif
#ifndef EMSGSIZE
#define EMSGSIZE (_POSIX_ALIGN_ERRNO_START+36)
#endif
#ifndef EMULTIHOP
#define EMULTIHOP (_POSIX_ALIGN_ERRNO_START+37)
#endif
#ifndef ENAMETOOLONG
#define ENAMETOOLONG (_POSIX_ALIGN_ERRNO_START+38)
#endif
#ifndef ENETDOWN
#define ENETDOWN (_POSIX_ALIGN_ERRNO_START+39)
#endif
#ifndef ENETRESET
#define ENETRESET (_POSIX_ALIGN_ERRNO_START+40)
#endif
#ifndef ENETUNREACH
#define ENETUNREACH (_POSIX_ALIGN_ERRNO_START+41)
#endif
#ifndef ENFILE
#define ENFILE (_POSIX_ALIGN_ERRNO_START+42)
#endif
#ifndef ENOBUFS
#define ENOBUFS (_POSIX_ALIGN_ERRNO_START+43)
#endif
#ifndef ENODATA
#define ENODATA (_POSIX_ALIGN_ERRNO_START+44)
#endif
#ifndef ENODEV
#define ENODEV (_POSIX_ALIGN_ERRNO_START+45)
#endif
#ifndef ENOENT
#define ENOENT (_POSIX_ALIGN_ERRNO_START+46)
#endif
#ifndef ENOEXEC
#define ENOEXEC (_POSIX_ALIGN_ERRNO_START+47)
#endif
#ifndef ENOLCK
#define ENOLCK (_POSIX_ALIGN_ERRNO_START+48)
#endif
#ifndef ENOLINK
#define ENOLINK (_POSIX_ALIGN_ERRNO_START+49)
#endif
#ifndef ENOMEM
#define ENOMEM (_POSIX_ALIGN_ERRNO_START+50)
#endif
#ifndef ENOMSG
#define ENOMSG (_POSIX_ALIGN_ERRNO_START+51)
#endif
#ifndef ENOPROTOOPT
#define ENOPROTOOPT (_POSIX_ALIGN_ERRNO_START+52)
#endif
#ifndef ENOSPC
#define ENOSPC (_POSIX_ALIGN_ERRNO_START+53)
#endif
#ifndef ENOSR
#define ENOSR (_POSIX_ALIGN_ERRNO_START+54)
#endif
#ifndef ENOSTR
#define ENOSTR (_POSIX_ALIGN_ERRNO_START+55)
#endif
#ifndef ENOSYS
#define ENOSYS (_POSIX_ALIGN_ERRNO_START+56)
#endif
#ifndef ENOTCONN
#define ENOTCONN (_POSIX_ALIGN_ERRNO_START+57)
#endif
#ifndef ENOTDIR
#define ENOTDIR (_POSIX_ALIGN_ERRNO_START+58)
#endif
#ifndef ENOTEMPTY
#define ENOTEMPTY (_POSIX_ALIGN_ERRNO_START+59)
#endif
#ifndef ENOTRECOVERABLE
#define ENOTRECOVERABLE (_POSIX_ALIGN_ERRNO_START+60)
#endif
#ifndef ENOTSOCK
#define ENOTSOCK (_POSIX_ALIGN_ERRNO_START+61)
#endif
#ifndef ENOTSUP
#define ENOTSUP (_POSIX_ALIGN_ERRNO_START+62)
#endif
#ifndef ENOTTY
#define ENOTTY (_POSIX_ALIGN_ERRNO_START+63)
#endif
#ifndef ENXIO
#define ENXIO (_POSIX_ALIGN_ERRNO_START+64)
#endif
#ifndef EOPNOTSUPP
#define EOPNOTSUPP (_POSIX_ALIGN_ERRNO_START+65)
#endif
#ifndef EOVERFLOW
#define EOVERFLOW (_POSIX_ALIGN_ERRNO_START+66)
#endif
#ifndef EOWNERDEAD
#define EOWNERDEAD (_POSIX_ALIGN_ERRNO_START+67)
#endif
#ifndef EPERM
#define EPERM (_POSIX_ALIGN_ERRNO_START+68)
#endif
#ifndef EPIPE
#define EPIPE (_POSIX_ALIGN_ERRNO_START+69)
#endif
#ifndef EPROTO
#define EPROTO (_POSIX_ALIGN_ERRNO_START+70)
#endif
#ifndef EPROTONOSUPPORT
#define EPROTONOSUPPORT (_POSIX_ALIGN_ERRNO_START+71)
#endif
#ifndef EPROTOTYPE
#define EPROTOTYPE (_POSIX_ALIGN_ERRNO_START+72)
#endif
#ifndef ERANGE
#define ERANGE (_POSIX_ALIGN_ERRNO_START+73)
#endif
#ifndef EROFS
#define EROFS (_POSIX_ALIGN_ERRNO_START+74)
#endif
#ifndef ESPIPE
#define ESPIPE (_POSIX_ALIGN_ERRNO_START+75)
#endif
#ifndef ESRCH
#define ESRCH (_POSIX_ALIGN_ERRNO_START+76)
#endif
#ifndef ESTALE
#define ESTALE (_POSIX_ALIGN_ERRNO_START+77)
#endif
#ifndef ETIME
#define ETIME (_POSIX_ALIGN_ERRNO_START+78)
#endif
#ifndef ETIMEDOUT
#define ETIMEDOUT (_POSIX_ALIGN_ERRNO_START+79)
#endif
#ifndef ETXTBSY
#define ETXTBSY (_POSIX_ALIGN_ERRNO_START+80)
#endif
#ifndef EWOULDBLOCK
#define EWOULDBLOCK (_POSIX_ALIGN_ERRNO_START+81)
#endif
#ifndef EXDEV
#define EXDEV (_POSIX_ALIGN_ERRNO_START+82)
#endif

#endif /* POSIX_ALIGN_ERRNO_H */

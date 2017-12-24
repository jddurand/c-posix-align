INCLUDE (CheckIncludeFiles)
INCLUDE (CheckCSourceCompiles)

CHECK_INCLUDE_FILES (errno.h HAVE_ERRNO_H)
CHECK_INCLUDE_FILES (stdio.h HAVE_STDIO_H)
IF (HAVE_ERRNO_H AND HAVE_STDIO_H)
  FOREACH (KEYWORD
      "E2BIG"
      "EACCES"
      "EADDRINUSE"
      "EADDRNOTAVAIL"
      "EAFNOSUPPORT"
      "EAGAIN"
      "EALREADY"
      "EBADF"
      "EBADMSG"
      "EBUSY"
      "ECANCELED"
      "ECHILD"
      "ECONNABORTED"
      "ECONNREFUSED"
      "ECONNRESET"
      "EDEADLK"
      "EDESTADDRREQ"
      "EDOM"
      "EDQUOT"
      "EEXIST"
      "EFAULT"
      "EFBIG"
      "EHOSTUNREACH"
      "EIDRM"
      "EILSEQ"
      "EINPROGRESS"
      "EINTR"
      "EINVAL"
      "EIO"
      "EIO"
      "EISCONN"
      "EISDIR"
      "ELOOP"
      "EMFILE"
      "EMLINK"
      "EMSGSIZE"
      "EMULTIHOP"
      "ENAMETOOLONG"
      "ENETDOWN"
      "ENETRESET"
      "ENETUNREACH"
      "ENFILE"
      "ENOBUFS"
      "ENODATA"
      "ENODEV"
      "ENOENT"
      "ENOEXEC"
      "ENOLCK"
      "ENOLINK"
      "ENOMEM"
      "ENOMSG"
      "ENOPROTOOPT"
      "ENOSPC"
      "ENOSR"
      "ENOSTR"
      "ENOSYS"
      "ENOTCONN"
      "ENOTDIR"
      "ENOTEMPTY"
      "ENOTRECOVERABLE"
      "ENOTSOCK"
      "ENOTSUP"
      "ENOTTY"
      "ENXIO"
      "EOPNOTSUPP"
      "EOVERFLOW"
      "EOWNERDEAD"
      "EPERM"
      "EPIPE"
      "EPROTO"
      "EPROTONOSUPPORT"
      "EPROTOTYPE"
      "ERANGE"
      "EROFS"
      "ESPIPE"
      "ESRCH"
      "ESTALE"
      "ETIME"
      "ETIMEDOUT"
      "ETXTBSY"
      "EWOULDBLOCK"
      "EXDEV"
      )
    TRY_RUN(_run_result _compile_result
      ${CMAKE_CURRENT_BINARY_DIR}
      ${CMAKE_CURRENT_SOURCE_DIR}/cmake/checkErrno.c
      COMPILE_DEFINITIONS "-DCHECKERRNO=${KEYWORD}"
      COMPILE_OUTPUT_VARIABLE _compile_output
      RUN_OUTPUT_VARIABLE _run_output
      )
    IF (_compile_result)
      IF (_run_result MATCHES FAILED_TO_RUN)
        MESSAGE (STATUS "Check errno ${KEYWORD} - Failed to run")
      ELSE ()
        IF (_run_output)
          MESSAGE (STATUS "Check errno ${KEYWORD} - Success: ${_run_output}")
          SET (HAVE_ERRNO_${KEYWORD} ${_run_output} CACHE INTERNAL "HAVE_ERRNO_${KEYWORD}")
        ELSE ()
          MESSAGE (STATUS "Check errno ${KEYWORD} - Failure: no output")
        ENDIF ()
      ENDIF ()
    ELSE ()
      MESSAGE (STATUS "Check errno ${KEYWORD} - Failed to compile: ${_compile_output}")
    ENDIF ()
  ENDFOREACH ()
ENDIF ()
CONFIGURE_FILE(include.in/posix_align/errno.h include/posix_align/errno.h)

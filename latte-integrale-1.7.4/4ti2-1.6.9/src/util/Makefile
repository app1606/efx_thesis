# Makefile.in generated by automake 1.15 from Makefile.am.
# src/util/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2014 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



#						-*- Makefile -*-
# 4ti2 -- A software package for algebraic, geometric and combinatorial
# problems on linear spaces.
# 
# Copyright (C) 2006 4ti2 team.
# Main author(s): Raymond Hemmecke, Ralf Hemmecke, Peter Malkin.
# 
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA. 




am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/4ti2
pkgincludedir = $(includedir)/4ti2
pkglibdir = $(libdir)/4ti2
pkglibexecdir = $(libexecdir)/4ti2
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-apple-darwin22.3.0
host_triplet = x86_64-apple-darwin22.3.0
bin_PROGRAMS = genmodel$(EXEEXT) gensymm$(EXEEXT) output$(EXEEXT)
subdir = src/util
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/00gnulib.m4 \
	$(top_srcdir)/m4/ax_cc_maxopt.m4 \
	$(top_srcdir)/m4/ax_cflags_warn_all.m4 \
	$(top_srcdir)/m4/ax_check_compile_flag.m4 \
	$(top_srcdir)/m4/ax_check_compiler_flags.m4 \
	$(top_srcdir)/m4/ax_compiler_vendor.m4 \
	$(top_srcdir)/m4/ax_cxx_maxopt.m4 \
	$(top_srcdir)/m4/ax_gcc_archflag.m4 \
	$(top_srcdir)/m4/ax_gcc_x86_cpuid.m4 \
	$(top_srcdir)/m4/extensions.m4 \
	$(top_srcdir)/m4/extern-inline.m4 $(top_srcdir)/m4/getopt.m4 \
	$(top_srcdir)/m4/glpk-check.m4 $(top_srcdir)/m4/gmp-check.m4 \
	$(top_srcdir)/m4/gnulib-common.m4 \
	$(top_srcdir)/m4/gnulib-comp.m4 \
	$(top_srcdir)/m4/include_next.m4 $(top_srcdir)/m4/libtool.m4 \
	$(top_srcdir)/m4/ltoptions.m4 $(top_srcdir)/m4/ltsugar.m4 \
	$(top_srcdir)/m4/ltversion.m4 $(top_srcdir)/m4/lt~obsolete.m4 \
	$(top_srcdir)/m4/nocrash.m4 $(top_srcdir)/m4/off_t.m4 \
	$(top_srcdir)/m4/onceonly.m4 $(top_srcdir)/m4/ssize_t.m4 \
	$(top_srcdir)/m4/stddef_h.m4 $(top_srcdir)/m4/sys_types_h.m4 \
	$(top_srcdir)/m4/trapv-check.m4 $(top_srcdir)/m4/unistd_h.m4 \
	$(top_srcdir)/m4/warn-on-use.m4 $(top_srcdir)/m4/wchar_t.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(utilinclude_HEADERS) \
	$(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/src/config.h \
	$(top_builddir)/src/4ti2/4ti2_config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(libdir)" "$(DESTDIR)$(bindir)" \
	"$(DESTDIR)$(utilincludedir)"
LTLIBRARIES = $(lib_LTLIBRARIES)
lib4ti2util_la_LIBADD =
am_lib4ti2util_la_OBJECTS = genmodel.lo gensymm.lo orbit.lo output.lo \
	print.lo vector.lo
lib4ti2util_la_OBJECTS = $(am_lib4ti2util_la_OBJECTS)
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
PROGRAMS = $(bin_PROGRAMS)
am_genmodel_OBJECTS = genmodel_main.$(OBJEXT)
genmodel_OBJECTS = $(am_genmodel_OBJECTS)
genmodel_DEPENDENCIES = lib4ti2util.la
am_gensymm_OBJECTS = gensymm_main.$(OBJEXT)
gensymm_OBJECTS = $(am_gensymm_OBJECTS)
gensymm_DEPENDENCIES = lib4ti2util.la
am_output_OBJECTS = output_main.$(OBJEXT)
output_OBJECTS = $(am_output_OBJECTS)
output_DEPENDENCIES = lib4ti2util.la
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(top_builddir)/src -I$(top_builddir)/src/4ti2
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(lib4ti2util_la_SOURCES) $(genmodel_SOURCES) \
	$(gensymm_SOURCES) $(output_SOURCES)
DIST_SOURCES = $(lib4ti2util_la_SOURCES) $(genmodel_SOURCES) \
	$(gensymm_SOURCES) $(output_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
HEADERS = $(utilinclude_HEADERS)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
am__DIST_COMMON = $(srcdir)/Makefile.in $(top_srcdir)/depcomp
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9/missing aclocal-1.15
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AR = ar
ARFLAGS = cru
AUTOCONF = ${SHELL} /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9/missing autoconf
AUTOHEADER = ${SHELL} /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9/missing autoheader
AUTOMAKE = ${SHELL} /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9/missing automake-1.15
AWK = awk
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -I/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest/include -Wall
CPP = gcc -E
CPPFLAGS =  -I/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest/include
CXX = g++
CXXCPP = g++ -E
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -O3 -I/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest/include -Wall -std=c++0x
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DSYMUTIL = dsymutil
DUMPBIN = 
ECHO_C = \c
ECHO_N = 
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
FGREP = /usr/bin/grep -F
GETOPT_H = getopt.h
GLPK_CFLAGS = -I/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest/include
GLPK_LIBS = -L/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest/lib -lglpk
GMP_CFLAGS = -I/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest/include
GMP_LIBS = -L/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest/lib -lgmp -lgmpxx -lgmp
GMP_VERSION = 
GNULIB_CHDIR = 0
GNULIB_CHOWN = 0
GNULIB_CLOSE = 0
GNULIB_DUP = 0
GNULIB_DUP2 = 0
GNULIB_DUP3 = 0
GNULIB_ENVIRON = 0
GNULIB_EUIDACCESS = 0
GNULIB_FACCESSAT = 0
GNULIB_FCHDIR = 0
GNULIB_FCHOWNAT = 0
GNULIB_FDATASYNC = 0
GNULIB_FSYNC = 0
GNULIB_FTRUNCATE = 0
GNULIB_GETCWD = 0
GNULIB_GETDOMAINNAME = 0
GNULIB_GETDTABLESIZE = 0
GNULIB_GETGROUPS = 0
GNULIB_GETHOSTNAME = 0
GNULIB_GETLOGIN = 0
GNULIB_GETLOGIN_R = 0
GNULIB_GETPAGESIZE = 0
GNULIB_GETUSERSHELL = 0
GNULIB_GL_UNISTD_H_GETOPT = 1
GNULIB_GROUP_MEMBER = 0
GNULIB_ISATTY = 0
GNULIB_LCHOWN = 0
GNULIB_LINK = 0
GNULIB_LINKAT = 0
GNULIB_LSEEK = 0
GNULIB_PIPE = 0
GNULIB_PIPE2 = 0
GNULIB_PREAD = 0
GNULIB_PWRITE = 0
GNULIB_READ = 0
GNULIB_READLINK = 0
GNULIB_READLINKAT = 0
GNULIB_RMDIR = 0
GNULIB_SETHOSTNAME = 0
GNULIB_SLEEP = 0
GNULIB_SYMLINK = 0
GNULIB_SYMLINKAT = 0
GNULIB_TTYNAME_R = 0
GNULIB_UNISTD_H_NONBLOCKING = 0
GNULIB_UNISTD_H_SIGPIPE = 0
GNULIB_UNLINK = 0
GNULIB_UNLINKAT = 0
GNULIB_USLEEP = 0
GNULIB_WRITE = 0
GREP = /usr/bin/grep
GROEBNER_DEFAULT_EXECUTABLE = 4ti2int64
HAVE_CHOWN = 1
HAVE_DECL_ENVIRON = 1
HAVE_DECL_FCHDIR = 1
HAVE_DECL_FDATASYNC = 1
HAVE_DECL_GETDOMAINNAME = 1
HAVE_DECL_GETLOGIN_R = 1
HAVE_DECL_GETPAGESIZE = 1
HAVE_DECL_GETUSERSHELL = 1
HAVE_DECL_SETHOSTNAME = 1
HAVE_DECL_TTYNAME_R = 1
HAVE_DUP2 = 1
HAVE_DUP3 = 1
HAVE_EUIDACCESS = 1
HAVE_FACCESSAT = 1
HAVE_FCHDIR = 1
HAVE_FCHOWNAT = 1
HAVE_FDATASYNC = 1
HAVE_FSYNC = 1
HAVE_FTRUNCATE = 1
HAVE_GETDTABLESIZE = 1
HAVE_GETGROUPS = 1
HAVE_GETHOSTNAME = 1
HAVE_GETLOGIN = 1
HAVE_GETOPT_H = 1
HAVE_GETPAGESIZE = 1
HAVE_GROUP_MEMBER = 1
HAVE_LCHOWN = 1
HAVE_LINK = 1
HAVE_LINKAT = 1
HAVE_OS_H = 0
HAVE_PIPE = 1
HAVE_PIPE2 = 1
HAVE_PREAD = 1
HAVE_PWRITE = 1
HAVE_READLINK = 1
HAVE_READLINKAT = 1
HAVE_SETHOSTNAME = 1
HAVE_SLEEP = 1
HAVE_SYMLINK = 1
HAVE_SYMLINKAT = 1
HAVE_SYS_PARAM_H = 0
HAVE_UNISTD_H = 1
HAVE_UNLINKAT = 1
HAVE_USLEEP = 1
HAVE_WCHAR_T = 1
INCLUDE_NEXT = include_next
INCLUDE_NEXT_AS_FIRST_DIRECTIVE = include_next
INSTALL = /usr/local/bin/ginstall -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LD = /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ld
LDFLAGS =  -L/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest/lib
LIBGNU_LIBDEPS = 
LIBGNU_LTLIBDEPS = 
LIBINTL = 
LIBOBJS = 
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = lipo
LN_S = ln -s
LTLIBINTL = 
LTLIBOBJS = 
LT_SYS_LIBRARY_PATH = 
MAKEINFO = ${SHELL} /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9/missing makeinfo
MANIFEST_TOOL = :
MKDIR_P = /usr/local/bin/gmkdir -p
NEXT_AS_FIRST_DIRECTIVE_GETOPT_H = <getopt.h>
NEXT_AS_FIRST_DIRECTIVE_STDDEF_H = 
NEXT_AS_FIRST_DIRECTIVE_SYS_TYPES_H = <sys/types.h>
NEXT_AS_FIRST_DIRECTIVE_UNISTD_H = <unistd.h>
NEXT_GETOPT_H = <getopt.h>
NEXT_STDDEF_H = 
NEXT_SYS_TYPES_H = <sys/types.h>
NEXT_UNISTD_H = <unistd.h>
NM = /usr/bin/nm -B
NMEDIT = nmedit
OBJDUMP = objdump
OBJEXT = o
OTOOL = otool
OTOOL64 = :
PACKAGE = 4ti2
PACKAGE_BUGREPORT = 
PACKAGE_NAME = 4ti2
PACKAGE_STRING = 4ti2 1.6.9
PACKAGE_TARNAME = 4ti2
PACKAGE_URL = 
PACKAGE_VERSION = 1.6.9
PATH_SEPARATOR = :
PRAGMA_COLUMNS = 
PRAGMA_SYSTEM_HEADER = #pragma GCC system_header
PRTDIAG = 
RANLIB = ranlib
REPLACE_CHOWN = 0
REPLACE_CLOSE = 0
REPLACE_DUP = 0
REPLACE_DUP2 = 0
REPLACE_FCHOWNAT = 0
REPLACE_FTRUNCATE = 0
REPLACE_GETCWD = 0
REPLACE_GETDOMAINNAME = 0
REPLACE_GETGROUPS = 0
REPLACE_GETLOGIN_R = 0
REPLACE_GETPAGESIZE = 0
REPLACE_ISATTY = 0
REPLACE_LCHOWN = 0
REPLACE_LINK = 0
REPLACE_LINKAT = 0
REPLACE_LSEEK = 0
REPLACE_NULL = 0
REPLACE_PREAD = 0
REPLACE_PWRITE = 0
REPLACE_READ = 0
REPLACE_READLINK = 0
REPLACE_RMDIR = 0
REPLACE_SLEEP = 0
REPLACE_SYMLINK = 0
REPLACE_TTYNAME_R = 0
REPLACE_UNLINK = 0
REPLACE_UNLINKAT = 0
REPLACE_USLEEP = 0
REPLACE_WRITE = 0
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/sh
STDDEF_H = 
STRIP = strip
TRAPV_FLAG = -ftrapv
UNISTD_H_HAVE_WINSOCK2_H = 0
UNISTD_H_HAVE_WINSOCK2_H_AND_USE_SOCKETS = 0
VERSION = 1.6.9
WINDOWS_64_BIT_OFF_T = 0
abs_builddir = /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9/src/util
abs_srcdir = /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9/src/util
abs_top_builddir = /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9
abs_top_srcdir = /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = 
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-apple-darwin22.3.0
build_alias = 
build_cpu = x86_64
build_os = darwin22.3.0
build_vendor = apple
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
gl_LIBOBJS =  getopt.o getopt1.o
gl_LTLIBOBJS =  getopt.lo getopt1.lo
gltests_LIBOBJS = 
gltests_LTLIBOBJS = 
gltests_WITNESS = IN_4TI2_GNULIB_TESTS
host = x86_64-apple-darwin22.3.0
host_alias = 
host_cpu = x86_64
host_os = darwin22.3.0
host_vendor = apple
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/4ti2-1.6.9/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
subdirs = 
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
#	normaliz_wrapper
lib_LTLIBRARIES = lib4ti2util.la
AM_LDFLAGS = -no-undefined

# Allow accessing general 4ti2 headers
AM_CFLAGS = -I$(srcdir)/..

# The output.c file contains C++-isms (or C99-isms), 
# so compile with the C++ compiler. --mkoeppe
# CC = $(CXX)
# CFLAGS = $(CXXFLAGS)
lib4ti2util_la_SOURCES = \
	genmodel.c				\
	gensymm.c				\
	orbit.c					\
	output.c				\
	print.c					\
	vector.c

utilincludedir = $(includedir)/util
utilinclude_HEADERS = \
	genmodel.h				\
	gensymm.h				\
	myheader.h				\
	orbit.h					\
	output.h				\
	print.h					\
	vector.h

genmodel_SOURCES = genmodel_main.c
genmodel_LDADD = lib4ti2util.la
gensymm_SOURCES = gensymm_main.c
gensymm_LDADD = lib4ti2util.la
output_SOURCES = output_main.c
output_LDADD = lib4ti2util.la
all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign src/util/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign src/util/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

install-libLTLIBRARIES: $(lib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	@list='$(lib_LTLIBRARIES)'; test -n "$(libdir)" || list=; \
	list2=; for p in $$list; do \
	  if test -f $$p; then \
	    list2="$$list2 $$p"; \
	  else :; fi; \
	done; \
	test -z "$$list2" || { \
	  echo " $(MKDIR_P) '$(DESTDIR)$(libdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(libdir)" || exit 1; \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 '$(DESTDIR)$(libdir)'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 "$(DESTDIR)$(libdir)"; \
	}

uninstall-libLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LTLIBRARIES)'; test -n "$(libdir)" || list=; \
	for p in $$list; do \
	  $(am__strip_dir) \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f '$(DESTDIR)$(libdir)/$$f'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f "$(DESTDIR)$(libdir)/$$f"; \
	done

clean-libLTLIBRARIES:
	-test -z "$(lib_LTLIBRARIES)" || rm -f $(lib_LTLIBRARIES)
	@list='$(lib_LTLIBRARIES)'; \
	locs=`for p in $$list; do echo $$p; done | \
	      sed 's|^[^/]*$$|.|; s|/[^/]*$$||; s|$$|/so_locations|' | \
	      sort -u`; \
	test -z "$$locs" || { \
	  echo rm -f $${locs}; \
	  rm -f $${locs}; \
	}

lib4ti2util.la: $(lib4ti2util_la_OBJECTS) $(lib4ti2util_la_DEPENDENCIES) $(EXTRA_lib4ti2util_la_DEPENDENCIES) 
	$(AM_V_CCLD)$(LINK) -rpath $(libdir) $(lib4ti2util_la_OBJECTS) $(lib4ti2util_la_LIBADD) $(LIBS)
install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	@list='$(bin_PROGRAMS)'; test -n "$(bindir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(bindir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(bindir)" || exit 1; \
	fi; \
	for p in $$list; do echo "$$p $$p"; done | \
	sed 's/$(EXEEXT)$$//' | \
	while read p p1; do if test -f $$p \
	 || test -f $$p1 \
	  ; then echo "$$p"; echo "$$p"; else :; fi; \
	done | \
	sed -e 'p;s,.*/,,;n;h' \
	    -e 's|.*|.|' \
	    -e 'p;x;s,.*/,,;s/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/' | \
	sed 'N;N;N;s,\n, ,g' | \
	$(AWK) 'BEGIN { files["."] = ""; dirs["."] = 1 } \
	  { d=$$3; if (dirs[d] != 1) { print "d", d; dirs[d] = 1 } \
	    if ($$2 == $$4) files[d] = files[d] " " $$1; \
	    else { print "f", $$3 "/" $$4, $$1; } } \
	  END { for (d in files) print "f", d, files[d] }' | \
	while read type dir files; do \
	    if test "$$dir" = .; then dir=; else dir=/$$dir; fi; \
	    test -z "$$files" || { \
	    echo " $(INSTALL_PROGRAM_ENV) $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL_PROGRAM) $$files '$(DESTDIR)$(bindir)$$dir'"; \
	    $(INSTALL_PROGRAM_ENV) $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL_PROGRAM) $$files "$(DESTDIR)$(bindir)$$dir" || exit $$?; \
	    } \
	; done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(bin_PROGRAMS)'; test -n "$(bindir)" || list=; \
	files=`for p in $$list; do echo "$$p"; done | \
	  sed -e 'h;s,^.*/,,;s/$(EXEEXT)$$//;$(transform)' \
	      -e 's/$$/$(EXEEXT)/' \
	`; \
	test -n "$$list" || exit 0; \
	echo " ( cd '$(DESTDIR)$(bindir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(bindir)" && rm -f $$files

clean-binPROGRAMS:
	@list='$(bin_PROGRAMS)'; test -n "$$list" || exit 0; \
	echo " rm -f" $$list; \
	rm -f $$list || exit $$?; \
	test -n "$(EXEEXT)" || exit 0; \
	list=`for p in $$list; do echo "$$p"; done | sed 's/$(EXEEXT)$$//'`; \
	echo " rm -f" $$list; \
	rm -f $$list

installcheck-binPROGRAMS: $(bin_PROGRAMS)
	bad=0; pid=$$$$; list="$(bin_PROGRAMS)"; for p in $$list; do \
	  case ' $(AM_INSTALLCHECK_STD_OPTIONS_EXEMPT) ' in \
	   *" $$p "* | *" $(srcdir)/$$p "*) continue;; \
	  esac; \
	  f=`echo "$$p" | \
	     sed 's,^.*/,,;s/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/'`; \
	  for opt in --help --version; do \
	    if "$(DESTDIR)$(bindir)/$$f" $$opt >c$${pid}_.out \
	         2>c$${pid}_.err </dev/null \
		 && test -n "`cat c$${pid}_.out`" \
		 && test -z "`cat c$${pid}_.err`"; then :; \
	    else echo "$$f does not support $$opt" 1>&2; bad=1; fi; \
	  done; \
	done; rm -f c$${pid}_.???; exit $$bad

genmodel$(EXEEXT): $(genmodel_OBJECTS) $(genmodel_DEPENDENCIES) $(EXTRA_genmodel_DEPENDENCIES) 
	@rm -f genmodel$(EXEEXT)
	$(AM_V_CCLD)$(LINK) $(genmodel_OBJECTS) $(genmodel_LDADD) $(LIBS)

gensymm$(EXEEXT): $(gensymm_OBJECTS) $(gensymm_DEPENDENCIES) $(EXTRA_gensymm_DEPENDENCIES) 
	@rm -f gensymm$(EXEEXT)
	$(AM_V_CCLD)$(LINK) $(gensymm_OBJECTS) $(gensymm_LDADD) $(LIBS)

output$(EXEEXT): $(output_OBJECTS) $(output_DEPENDENCIES) $(EXTRA_output_DEPENDENCIES) 
	@rm -f output$(EXEEXT)
	$(AM_V_CCLD)$(LINK) $(output_OBJECTS) $(output_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/genmodel.Plo
include ./$(DEPDIR)/genmodel_main.Po
include ./$(DEPDIR)/gensymm.Plo
include ./$(DEPDIR)/gensymm_main.Po
include ./$(DEPDIR)/orbit.Plo
include ./$(DEPDIR)/output.Plo
include ./$(DEPDIR)/output_main.Po
include ./$(DEPDIR)/print.Plo
include ./$(DEPDIR)/vector.Plo

.c.o:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ $<

.c.obj:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.c.lo:
	$(AM_V_CC)$(LTCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Plo
#	$(AM_V_CC)source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LTCOMPILE) -c -o $@ $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-utilincludeHEADERS: $(utilinclude_HEADERS)
	@$(NORMAL_INSTALL)
	@list='$(utilinclude_HEADERS)'; test -n "$(utilincludedir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(utilincludedir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(utilincludedir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_HEADER) $$files '$(DESTDIR)$(utilincludedir)'"; \
	  $(INSTALL_HEADER) $$files "$(DESTDIR)$(utilincludedir)" || exit $$?; \
	done

uninstall-utilincludeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(utilinclude_HEADERS)'; test -n "$(utilincludedir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(utilincludedir)'; $(am__uninstall_files_from_dir)

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LTLIBRARIES) $(PROGRAMS) $(HEADERS)
install-binPROGRAMS: install-libLTLIBRARIES

installdirs:
	for dir in "$(DESTDIR)$(libdir)" "$(DESTDIR)$(bindir)" "$(DESTDIR)$(utilincludedir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-binPROGRAMS clean-generic clean-libLTLIBRARIES \
	clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-utilincludeHEADERS

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-binPROGRAMS install-libLTLIBRARIES

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am: installcheck-binPROGRAMS

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-binPROGRAMS uninstall-libLTLIBRARIES \
	uninstall-utilincludeHEADERS

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am check check-am clean \
	clean-binPROGRAMS clean-generic clean-libLTLIBRARIES \
	clean-libtool cscopelist-am ctags ctags-am distclean \
	distclean-compile distclean-generic distclean-libtool \
	distclean-tags distdir dvi dvi-am html html-am info info-am \
	install install-am install-binPROGRAMS install-data \
	install-data-am install-dvi install-dvi-am install-exec \
	install-exec-am install-html install-html-am install-info \
	install-info-am install-libLTLIBRARIES install-man install-pdf \
	install-pdf-am install-ps install-ps-am install-strip \
	install-utilincludeHEADERS installcheck installcheck-am \
	installcheck-binPROGRAMS installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic mostlyclean-libtool pdf pdf-am ps ps-am \
	tags tags-am uninstall uninstall-am uninstall-binPROGRAMS \
	uninstall-libLTLIBRARIES uninstall-utilincludeHEADERS

.PRECIOUS: Makefile


# normaliz_wrapper_SOURCES = normaliz_wrapper.c
# normaliz_wrapper_LDADD = lib4ti2util.la

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:

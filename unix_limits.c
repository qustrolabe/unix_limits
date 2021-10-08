#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("%25s - %ld\n",  "_SC_ARG_MAX", sysconf( _SC_ARG_MAX));
    printf("%25s - %ld\n",  "_SC_CHILD_MAX", sysconf(_SC_CHILD_MAX));
    printf("%25s - %ld\n",  "_SC_HOST_NAME_MAX", sysconf(_SC_HOST_NAME_MAX));
    printf("%25s - %ld\n",  "_SC_LOGIN_NAME_MAX", sysconf(_SC_LOGIN_NAME_MAX));
    printf("%25s - %ld\n",  "_SC_NGROUPS_MAX", sysconf(_SC_NGROUPS_MAX));
    printf("%25s - %ld\n",  "_SC_CLK_TCK", sysconf(_SC_CLK_TCK));
    printf("%25s - %ld\n",  "_SC_OPEN_MAX", sysconf(_SC_OPEN_MAX));
    printf("%25s - %ld\n",  "_SC_PAGESIZE", sysconf(_SC_PAGESIZE));
    printf("%25s - %ld\n",  "_SC_PAGE_SIZE", sysconf(_SC_PAGE_SIZE));
    printf("%25s - %ld\n",  "_SC_RE_DUP_MAX", sysconf(_SC_RE_DUP_MAX));
    printf("%25s - %ld\n",  "_SC_STREAM_MAX", sysconf(_SC_STREAM_MAX));
    printf("%25s - %ld\n",  "_SC_SYMLOOP_MAX", sysconf(_SC_SYMLOOP_MAX));
    printf("%25s - %ld\n",  "_SC_TTY_NAME_MAX", sysconf(_SC_TTY_NAME_MAX));
    printf("%25s - %ld\n",  "_SC_TZNAME_MAX", sysconf(_SC_TZNAME_MAX));
    printf("%25s - %ld\n",  "_SC_VERSION", sysconf(_SC_VERSION));
    printf("%25s - %ld\n",  "_SC_BC_BASE_MAX", sysconf(_SC_BC_BASE_MAX));
    printf("%25s - %ld\n",  "_SC_BC_DIM_MAX", sysconf(_SC_BC_DIM_MAX));
    printf("%25s - %ld\n",  "_SC_BC_SCALE_MAX", sysconf(_SC_BC_SCALE_MAX));
    printf("%25s - %ld\n",  "_SC_BC_STRING_MAX", sysconf(_SC_BC_STRING_MAX));
    printf("%25s - %ld\n",  "_SC_COLL_WEIGHTS_MAX", sysconf(_SC_COLL_WEIGHTS_MAX));
    printf("%25s - %ld\n",  "_SC_EXPR_NEST_MAX", sysconf(_SC_EXPR_NEST_MAX));
    printf("%25s - %ld\n",  "_SC_LINE_MAX", sysconf(_SC_LINE_MAX));
    printf("%25s - %ld\n",  "_SC_RE_DUP_MAX", sysconf(_SC_RE_DUP_MAX));
    printf("%25s - %ld\n",  "_SC_2_VERSION", sysconf(_SC_2_VERSION));
    printf("%25s - %ld\n",  "_SC_2_C_DEV", sysconf(_SC_2_C_DEV));
    printf("%25s - %ld\n",  "_SC_2_FORT_DEV", sysconf(_SC_2_FORT_DEV));
    printf("%25s - %ld\n",  "_SC_2_FORT_RUN", sysconf(_SC_2_FORT_RUN));
    printf("%25s - %ld\n",  "_SC_2_LOCALEDEF", sysconf(_SC_2_LOCALEDEF));
    printf("%25s - %ld\n",  "_SC_2_SW_DEV", sysconf(_SC_2_SW_DEV));
    printf("%25s - %ld\n",  "_SC_PHYS_PAGES", sysconf(_SC_PHYS_PAGES));
    printf("%25s - %ld\n",  "_SC_AVPHYS_PAGES", sysconf(_SC_AVPHYS_PAGES));
    printf("%25s - %ld\n",  "_SC_NPROCESSORS_CONF", sysconf(_SC_NPROCESSORS_CONF));
    printf("%25s - %ld\n",  "_SC_NPROCESSORS_ONLN", sysconf(_SC_NPROCESSORS_ONLN));

    printf("\n");

    printf("%25s - %ld\n",  "_PC_LINK_MAX", pathconf(argv[0], _PC_LINK_MAX ));
    printf("%25s - %ld\n",  "_PC_MAX_CANON", pathconf(argv[0],  _PC_MAX_CANON));
    printf("%25s - %ld\n",  "_PC_MAX_INPUT", pathconf(argv[0],  _PC_MAX_INPUT));
    printf("%25s - %ld\n",  "_PC_NAME_MAX", pathconf(argv[0],  _PC_NAME_MAX));
    printf("%25s - %ld\n",  "_PC_PATH_MAX", pathconf(argv[0],  _PC_PATH_MAX));
    printf("%25s - %ld\n",  "_PC_PIPE_BUF", pathconf(argv[0],  _PC_PIPE_BUF));
    printf("%25s - %ld\n",  "_PC_CHOWN_RESTRICTED", pathconf(argv[0],  _PC_CHOWN_RESTRICTED));
    printf("%25s - %ld\n",  "_PC_NO_TRUNC", pathconf(argv[0],  _PC_NO_TRUNC));
    printf("%25s - %ld\n",  "_PC_VDISABLE", pathconf(argv[0],  _PC_VDISABLE));
    return 0;
}

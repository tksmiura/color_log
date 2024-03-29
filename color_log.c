/* MIT License
 * Copyright (c) 2019 TAKESHI MIURA
 * https://github.com/tksmiura/color_log
 */
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include "color_log.h"

static bool stdout_tty;
static bool tty_checked = false;

bool is_tty(void)
{
    if (!tty_checked) {
        stdout_tty = isatty(STDOUT_FILENO);  /* TODO: not work on emacs */
        tty_checked = true;
    }
    return stdout_tty;
}

static int stdout_console_width = -1;

int console_width(void)
{
    struct winsize ws;

    if (!is_tty())
        return 0;
    if (stdout_console_width > 0)
        return stdout_console_width;

    if(ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws) != -1) {
        if(ws.ws_col > 0) {
            stdout_console_width = ws.ws_col;
        }
    } else
        return 0;

    return stdout_console_width;
}

void log_printf(int level, char* fmt, ...)
{
    va_list arg;

    va_start(arg, fmt);
    if (is_tty()) {
        int w = console_width();
        char str[w + 1];
        int wout;
        bool b_lf = false;

        switch (level) {
          case LOG_LEVEL_ERR:
            fprintf(stdout, COLOR_FG_LRED);
            break;
          case LOG_LEVEL_WARN:
            fprintf(stdout, COLOR_FG_LYELLOW);
            break;
          case LOG_LEVEL_INFO:
            fprintf(stdout, COLOR_FG_CYAN);
            break;
        }
        wout = vsnprintf(str, w + 1, fmt, arg);
        if (wout < w && str[wout - 1] == '\n') {
            str[wout - 1] = '\0';
            b_lf = true;
        }
        fputs(str, stdout);

        fprintf(stdout, COLOR_RESET);
        if (b_lf || wout > w)
            fputc('\n', stdout);
    } else
        vfprintf(stdout, fmt, arg);

    va_end(arg);
}

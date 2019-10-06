/* MIT License
 * Copyright (c) 2019 TAKESHI MIURA
 * https://github.com/tksmiura/color_log
 */
#ifndef __COLOR_H__
#define __COLOR_H__

#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/ioctl.h>

#define COLOR_BG_BLACK    "\x1b[40m"
#define COLOR_BG_RED      "\x1b[41m"
#define COLOR_BG_GREEN    "\x1b[42m"
#define COLOR_BG_YELLOW   "\x1b[43m"
#define COLOR_BG_BLUE     "\x1b[44m"
#define COLOR_BG_MAGENTA  "\x1b[45m"
#define COLOR_BG_CYAN     "\x1b[46m"
#define COLOR_BG_WHITE    "\x1b[47m"

#define COLOR_FG_BLACK    "\x1b[30m"
#define COLOR_FG_RED      "\x1b[31m"
#define COLOR_FG_GREEN    "\x1b[32m"
#define COLOR_FG_YELLOW   "\x1b[33m"
#define COLOR_FG_BLUE     "\x1b[34m"
#define COLOR_FG_MAGENTA  "\x1b[35m"
#define COLOR_FG_CYAN     "\x1b[36m"
#define COLOR_FG_WHITE    "\x1b[37m"

#define COLOR_BG_LBLACK   "\x1b[100m"
#define COLOR_BG_LRED     "\x1b[101m"
#define COLOR_BG_LGREEN   "\x1b[102m"
#define COLOR_BG_LYELLOW  "\x1b[103m"
#define COLOR_BG_LBLUE    "\x1b[104m"
#define COLOR_BG_LMAGENTA "\x1b[105m"
#define COLOR_BG_LCYAN    "\x1b[106m"
#define COLOR_BG_LWHITE   "\x1b[107m"

#define COLOR_FG_LBLACK   "\x1b[90m"
#define COLOR_FG_LRED     "\x1b[91m"
#define COLOR_FG_LGREEN   "\x1b[92m"
#define COLOR_FG_LYELLOW  "\x1b[93m"
#define COLOR_FG_LBLUE    "\x1b[94m"
#define COLOR_FG_LMAGENTA "\x1b[95m"
#define COLOR_FG_LCYAN    "\x1b[96m"
#define COLOR_FG_LWHITE   "\x1b[97m"

#define COLOR_REVERSE     "\x1b[7m"
#define COLOR_UNDERLINE   "\x1b[4m"
#define COLOR_BOLD        "\x1b[1m"
#define COLOR_RESET       "\x1b[0m"

#define LOG_LEVEL_ERR     (4)
#define LOG_LEVEL_WARN    (3)
#define LOG_LEVEL_INFO    (2)
#define LOG_LEVEL_DEBUG   (1)

extern bool is_tty(void);
extern int console_width(void);
extern void log_printf(int level, char* fmt, ...);


#define DEBUG_LOG(fmt, ...) do {                                \
        log_printf(LOG_LEVEL_DEBUG, "%s:%d: (%s) " fmt,         \
                   __FILE__, __LINE__, __func__, ## __VA_ARGS__);  \
    } while(0);
#define INFO_LOG(fmt, ...) do {                                \
        log_printf(LOG_LEVEL_INFO, "%s:%d: (%s) " fmt,         \
                   __FILE__, __LINE__, __func__, ## __VA_ARGS__);  \
    } while(0);
#define WARN_LOG(fmt, ...) do {                                \
        log_printf(LOG_LEVEL_WARN, "%s:%d: (%s) " fmt,         \
                   __FILE__, __LINE__, __func__, ## __VA_ARGS__);  \
    } while(0);
#define ERR_LOG(fmt, ...) do {                                \
        log_printf(LOG_LEVEL_ERR, "%s:%d: (%s) " fmt,         \
                   __FILE__, __LINE__, __func__, ## __VA_ARGS__);  \
    } while(0);
#endif /* __COLOR_H__ */

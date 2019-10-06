/* MIT License
 * Copyright (c) 2019 TAKESHI MIURA
 * https://github.com/tksmiura/color_log
 */
#include "color_log.h"

/* test APIs */

int main(int argc, char *argv[])
{
    printf("color_log.c defined APIs\n\n");

    if (is_tty()) {
        log_printf(LOG_LEVEL_DEBUG, "console_width = %d\n", console_width());
    }

    log_printf(LOG_LEVEL_DEBUG, "this is debug\n");
    log_printf(LOG_LEVEL_INFO, "this is info\n");
    log_printf(LOG_LEVEL_WARN, "this is warning\n");
    log_printf(LOG_LEVEL_ERR, "this is error\n");

    log_printf(LOG_LEVEL_ERR, "test long log data.............................................................\n");
    log_printf(LOG_LEVEL_ERR, "test long log data..............................................................\n");
    log_printf(LOG_LEVEL_ERR, "test long log data...............................................................\n");
}

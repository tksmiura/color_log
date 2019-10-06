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

    log_printf(LOG_LEVEL_DEBUG, "[this is debug]");
    log_printf(LOG_LEVEL_INFO, "[this is info]");
    log_printf(LOG_LEVEL_WARN, "[this is warning]");
    log_printf(LOG_LEVEL_ERR, "[this is error]\n");

    log_printf(LOG_LEVEL_ERR, "test long log data.............................................................\n");
    log_printf(LOG_LEVEL_ERR, "test long log data..............................................................\n");
    log_printf(LOG_LEVEL_ERR, "test long log data...............................................................\n");

    DEBUG_LOG("DEBUG_LOG log ......\n");
    INFO_LOG("INFO_LOG log........................................................................\n");
    WARN_LOG("WARN_LOG log.....\n");
    ERR_LOG("ERR_LOG log.....\n");
}

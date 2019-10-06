#include "color_log.h"

/* test */

int main(int argc, char *argv[])
{
    printf("デフォルト\n");
    if (is_tty()) {
        log_printf(LOG_LEVEL_DEBUG, "width %d\n", console_width());
    }

    log_printf(LOG_LEVEL_DEBUG, "this is debug\n");
    log_printf(LOG_LEVEL_INFO, "this is info\n");
    log_printf(LOG_LEVEL_WARN, "this is warning\n");
    log_printf(LOG_LEVEL_ERR, "this is error\n");

    log_printf(LOG_LEVEL_ERR, "test long log data.............................................................\n");
    log_printf(LOG_LEVEL_ERR, "test long log data..............................................................\n");
    log_printf(LOG_LEVEL_ERR, "test long log data...............................................................\n");
    log_printf(LOG_LEVEL_ERR, "test long log data...................................................................\n");

    printf("デフォルト\n");
}

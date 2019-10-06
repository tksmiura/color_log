#include "color_log.h"

/* test */

int main(int argc, char *argv[])
{
    printf("デフォルト\n");

    printf(COLOR_BG_BLACK "後景色が黒\n" COLOR_RESET);
    printf(COLOR_BG_RED "後景色が赤\n" COLOR_RESET);
    printf(COLOR_BG_GREEN "後景色が緑\n" COLOR_RESET);
    printf(COLOR_BG_YELLOW "後景色が黄色\n" COLOR_RESET);
    printf(COLOR_BG_BLUE "後景色が青\n" COLOR_RESET);
    printf(COLOR_BG_MAGENTA "後景色がマゼンタ\n" COLOR_RESET);
    printf(COLOR_BG_CYAN "後景色がシアン\n" COLOR_RESET);
    printf(COLOR_BG_WHITE "後景色が白\n" COLOR_RESET);

    printf(COLOR_BG_LBLACK "後景色が黒\n" COLOR_RESET);
    printf(COLOR_BG_LRED "後景色が赤\n" COLOR_RESET);
    printf(COLOR_BG_LGREEN "後景色が緑\n" COLOR_RESET);
    printf(COLOR_BG_LYELLOW "後景色が黄色\n" COLOR_RESET);
    printf(COLOR_BG_LBLUE "後景色が青\n" COLOR_RESET);
    printf(COLOR_BG_LMAGENTA "後景色がマゼンタ\n" COLOR_RESET);
    printf(COLOR_BG_LCYAN "後景色がシアン\n" COLOR_RESET);
    printf(COLOR_BG_LWHITE "後景色が白\n" COLOR_RESET);

    printf(COLOR_FG_BLACK "前景色が黒\n" COLOR_RESET);
    printf(COLOR_FG_RED "前景色が赤\n" COLOR_RESET);
    printf(COLOR_FG_GREEN "前景色が緑\n" COLOR_RESET);
    printf(COLOR_FG_YELLOW "前景色が黄色\n" COLOR_RESET);
    printf(COLOR_FG_BLUE "前景色が青\n" COLOR_RESET);
    printf(COLOR_FG_MAGENTA "前景色がマゼンタ\n" COLOR_RESET);
    printf(COLOR_FG_CYAN "前景色がシアン\n" COLOR_RESET);
    printf(COLOR_FG_WHITE "前景色が白\n" COLOR_RESET);

    printf(COLOR_FG_LBLACK "前景色が黒\n" COLOR_RESET);
    printf(COLOR_FG_LRED "前景色が赤\n" COLOR_RESET);
    printf(COLOR_FG_LGREEN "前景色が緑\n" COLOR_RESET);
    printf(COLOR_FG_LYELLOW "前景色が黄色\n" COLOR_RESET);
    printf(COLOR_FG_LBLUE "前景色が青\n" COLOR_RESET);
    printf(COLOR_FG_LMAGENTA "前景色がマゼンタ\n" COLOR_RESET);
    printf(COLOR_FG_LCYAN "前景色がシアン\n" COLOR_RESET);
    printf(COLOR_FG_LWHITE "前景色が白\n" COLOR_RESET);

    printf(COLOR_UNDERLINE  "UNDERLINE\n" COLOR_RESET);
    printf(COLOR_BOLD  "ボールド\n" COLOR_RESET);
    printf(COLOR_REVERSE  "反転\n" COLOR_RESET);


    printf("デフォルト\n");
}

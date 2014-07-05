#include <ncurses.h>

int main(int argc, char** argv)
{
    initscr();
    start_color();
    curs_set(0);
    init_pair(1, COLOR_BLUE, COLOR_WHITE);
    addch('X' | COLOR_BLUE);
    refresh();
    getch();
    endwin();

    return 0;
}

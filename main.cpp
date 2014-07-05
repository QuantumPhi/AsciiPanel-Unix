#include <ncurses.h>

int main(int argc, char** argv)
{
    initscr();
    start_color();
    addch('X' | );
    refresh();
    getch();
    endwin();

    return 0;
}

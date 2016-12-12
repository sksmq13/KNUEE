#include        <curses.h>
#include        <sys/ioctl.h>
#include        <string.h>


void MenuScreen() {
        char ch;
        initscr();
        drawBoard();
        menuItem();
        move(14,44);
        refresh();
        while(ch=getchar()){
                if(ch=='1') {
                        clear();
                        break;
                }
                else if(ch=='2') {
                        clear();
                        endwin();
                        exit(0);

                }
        }

}
void menuItem() {
        move(10,20);
        addstr("1.game start");
        move(12,20);
        addstr("2.game exit");
        move(14,20);
        addstr("please typing word : (     ) ");

}

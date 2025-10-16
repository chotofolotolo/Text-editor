#include "../include/ui.h"
#include <stdlib.h>
#include <stdio.h>

void init_ui_impl(UI *ui)
{
    ui->setup_ui = &setup_ui;
    ui->init_ui = &init_ui;
    ui->draw_ui = &draw_ui;
    // ui->header = malloc(sizeof(Header));
    ui->text_area = malloc(sizeof(Text_area));
    ui->nav_bar = malloc(sizeof(Nav_bar));
}

void setup_ui(UI *ui)
{
    initscr(); // Inicializa ncurses
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    // Crear ventana nueva
    ui->header->header_window = newwin(10, 30, 5, 10);
    ui->header->create_header();

    // Espera tecla para que se vea
    // getch();
}

void draw_ui(UI *ui)
{
    box(ui->header->header_window, 0, 0); // Dibuja el borde a header
    wattron(ui->header->header_window, A_BOLD);
    mvwprintw(ui->header->header_window, 1, 1, "Text-editor");
    wattroff(ui->header->header_window, A_BOLD);
    wrefresh(ui->header->header_window);
}

void init_ui(UI *ui)
{
}

WINDOW *create_newWin(int height, int width, int posY, int posX)
{
    WINDOW *local_window = newwin(height, width, posY, posX); // dynamic struct,exist after function call
    // box(local_window, 0, 0);
    return local_window;
}

void setText(WINDOW *window, int y, int x, const char *str)
{
    mvwprintw(window, y, x, str);
}

void destroy_win(WINDOW *window)
{
    wrefresh(window);
    delwin(window);
}
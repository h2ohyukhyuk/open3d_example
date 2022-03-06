#include "gui_main_window.h"


int main(int argc, char* argv[]){

    const std::string title = "abcd";
    const size_t window_width = 1024;
    const size_t window_height = 768;
    MainWindow(title, window_width, window_height).Run();

    return 0;
}
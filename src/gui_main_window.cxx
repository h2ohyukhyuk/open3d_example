#include "gui_main_window.h"
#include <iostream>

MainWindow::MainWindow( const std::string title,  const size_t width,  const size_t height)
: is_done_(false){

    std::cout<<"0"<<std::endl;
    gui::Application::GetInstance().Initialize("../resource");
    std::cout<<"1"<<std::endl;
    main_vis_ = std::make_shared<visualizer::O3DVisualizer>(title, width, height);
    std::cout<<"2"<<std::endl;
    main_vis_->SetOnClose([this](){ return this->OnMainWindowClosing(); });
}

bool MainWindow::OnMainWindowClosing(){
    main_vis_.reset();
    return true;
}

void MainWindow::Run(){
    gui::Application::GetInstance().Run();

}
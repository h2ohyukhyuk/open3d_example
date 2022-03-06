#include <string>
#include <atomic>
#include <memory>

#include "open3d/Open3D.h"

using namespace open3d;
using namespace open3d::visualization;

class MainWindow{
    public:
        MainWindow( const std::string title,  const size_t width,  const size_t height);

        void Run();

    private:
        bool OnMainWindowClosing();
    private:
        std::atomic<bool> is_done_;
        std::shared_ptr<visualizer::O3DVisualizer> main_vis_;

};
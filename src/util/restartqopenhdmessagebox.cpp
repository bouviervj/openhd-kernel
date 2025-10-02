#include "restartqopenhdmessagebox.h"
#include <sstream>

RestartQOpenHDMessageBox::RestartQOpenHDMessageBox()
{

}

RestartQOpenHDMessageBox &RestartQOpenHDMessageBox::instance()
{
    static RestartQOpenHDMessageBox instance{};
    return instance;
}

void RestartQOpenHDMessageBox::show(){
    set_text("Please restart QOpenHD to apply.");
    set_visible(true);
}

void RestartQOpenHDMessageBox::show_with_text(const std::string& text){
    std::stringstream full_text;
    full_text << text << " - Please restart QOpenHD to apply.";
    set_text(std::string(full_text.str().c_str()));
    set_visible(true);
}

void RestartQOpenHDMessageBox::hide_element()
{
    qDebug()<<"RestartQOpenHDMessageBox::hide_element()";
    set_visible(false);
}

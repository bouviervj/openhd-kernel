#ifndef RESTARTQOPENHDMESSAGEBOX_H
#define RESTARTQOPENHDMESSAGEBOX_H

// Also Quite dirty
// There are a couple of places in QOpenHD where we need to prompt the user to restart QOpenHD.
// This provides a quick and easy way to do that, but only works on platform(s) where qopenhd is
// automatically restarted by a service (e.g. rpi)
// NOTE: THIS RESTARTS QOPENHD; NOTHING ELSE !
class RestartQOpenHDMessageBox{
    
public:
    explicit RestartQOpenHDMessageBox();
    static RestartQOpenHDMessageBox& instance();
    // prompt the user to restart QOpenHD
    void show();
    // Additonally, we can show a text why a restart is needed
    void show_with_text(const std::string& text);
    //
    std::string text = "NONE";
    void set_text(const std::string& value) { text = value; }
    bool visible = false;
    void set_visible(bool value) { visible = value; }
public:
    // Hides the element - called when button okay (restart now) or cancel (skip restart) is clicked
    void hide_element();
};

#endif // RESTARTQOPENHDMESSAGEBOX_H

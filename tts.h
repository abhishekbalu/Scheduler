#ifndef TTS_H
#define TTS_H

#include <QMainWindow>

namespace Ui {
class tts;
}

class tts : public QMainWindow
{
    Q_OBJECT

public:
    explicit tts(QWidget *parent = nullptr);
    ~tts();

private:
    Ui::tts *ui;
};

#endif // TTS_H

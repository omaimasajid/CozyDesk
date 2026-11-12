#pragma once
#include "Pet.h"
#include <QtWidgets/QMainWindow>
#include "ui_CozyDeskFinal.h"
#include "MusicPlayer.h"
#include "PomodoroTimer.h"
#include "Notes.h"
#include <qsystemtrayicon.h>

class CozyDeskFinal : public QMainWindow
{
    Q_OBJECT

public:
    CozyDeskFinal(QWidget *parent = nullptr);
    ~CozyDeskFinal();

private:
    Ui::CozyDeskFinalClass ui;
    MusicPlayer* MP;
    petwidget* pet;
    PomodoroTimer* PT;
    Notes* notes;
    QMediaPlayer* alarmPlayer;
    QAudioOutput* alarmOutput;
    QSystemTrayIcon* notif;
    bool repeatOn;
};



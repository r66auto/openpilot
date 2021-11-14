#pragma once

#include <QPushButton>
#include <QStackedWidget>
#include <QWidget>
#include <QStackedLayout>

#include "selfdrive/ui/qt/widgets/controls.h"

class ForceCarRecognition : public QWidget
{
  Q_OBJECT

public:
  explicit ForceCarRecognition(QWidget* parent = 0);

private:

signals:
  void backPress();
  void selectedCar();
};

class AutoLaneChangeTimer : public AbstractControl {
  Q_OBJECT

public:
  AutoLaneChangeTimer();

private:
  QPushButton btnplus;
  QPushButton btnminus;
  QLabel label;
  Params params;

  void refresh();
};
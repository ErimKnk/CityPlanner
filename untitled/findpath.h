#ifndef FINDPATH_H
#define FINDPATH_H

#include <QDialog>
#include <QComboBox>
#include "map.h"

namespace Ui {
class findPath;
}

class findPath : public QDialog
{
    Q_OBJECT

public:
    explicit findPath(QWidget *parent = nullptr);
    void setMap(Map *mapPtr);
    void Actualisieren();
    QString getStartCityName() const;
    QString getEndCityName() const;

    ~findPath();

private:
    Ui::findPath *ui;
      Map* map;
};

#endif // FINDPATH_H

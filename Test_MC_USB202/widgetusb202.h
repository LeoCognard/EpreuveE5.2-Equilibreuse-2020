#ifndef WIDGETUSB202_H
#define WIDGETUSB202_H

#include <QWidget>
#include <QTimer>
#include <mcculdaq.h>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetUSB202; }
QT_END_NAMESPACE

class WidgetUSB202 : public QWidget
{
    Q_OBJECT

public:
    WidgetUSB202(QWidget *parent = nullptr);
    ~WidgetUSB202();

private slots:
    void on_checkBoxDIO0_stateChanged(int arg1);

    void on_checkBoxDIO1_stateChanged(int arg1);

    void on_checkBoxDIO2_stateChanged(int arg1);

    void on_checkBoxDIO3_stateChanged(int arg1);

    void on_checkBoxDIO4_stateChanged(int arg1);

    void on_checkBoxDIO5_stateChanged(int arg1);

    void on_checkBoxDIO6_stateChanged(int arg1);

    void on_checkBoxDIO7_stateChanged(int arg1);

    void on_pushButtonClignoter_clicked();

    void clignoter();

private:
    Ui::WidgetUSB202 *ui;
    MccUldaq laCarte;
     QTimer leTimer;
};
#endif // WIDGETUSB202_H

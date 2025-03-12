#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFileSystemModel>
#include <QTreeView>
#include <QDir>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <QHeaderView>
#include <QDialog>
#include <QVBoxLayout>

class Date;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_openFile_clicked();
    void on_callUpDuration_clicked();

    void on_callUpNextDay_clicked();

    void on_callUpIsLeap_clicked();

    void on_callUpPreviousDay_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene* MainScene;
    static MainWindow* mainWindow;
    QFileSystemModel* model;
    QTreeView* treeView;
    QDialog* dialog = nullptr;
    QVBoxLayout* layout;
    void onFileDoubleClicked(const QModelIndex &index);
    Date* date = nullptr;



};
#endif // MAINWINDOW_H

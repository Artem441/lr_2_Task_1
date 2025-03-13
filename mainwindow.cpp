#include "mainwindow.h"
#include "date.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainScene = new QGraphicsScene;
    ui->graphicsView->setScene(MainScene);
}


MainWindow::~MainWindow() {}

void MainWindow::onFileDoubleClicked(const QModelIndex &index)
{
    if (!index.isValid()) {
        qWarning() << "Invalid index!";
        return;
    }
    QFileSystemModel *fsModel = qobject_cast<QFileSystemModel*>(treeView->model()); // без qobject_cast выдавало ошибку, связанную с приведение указателя типа void* к нужному
    if (!fsModel) {
        qCritical() << "Model is not a QFileSystemModel!";
        return;
    }
    const QString filePath = fsModel->filePath(index);
    if (filePath.isEmpty()) {
        qWarning() << "Empty file path!";
        return;
    }
    if (fsModel->isDir(index)) {
        QMessageBox::information(this, "Info", "Это папка. Двойной клик по папке не обрабатывается.");
        return;
    }
    if (!QDesktopServices::openUrl(QUrl::fromLocalFile(filePath))) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл: " + filePath);
    }
}
void MainWindow::on_openFile_clicked()
{
    if (dialog != nullptr){
        dialog->show();
        return;
    }

    dialog = new QDialog(this);
    dialog->resize(600, 400);
    dialog->setMinimumSize(400, 300);
    dialog->setAttribute(Qt::WA_DeleteOnClose);

    connect(dialog, &QDialog::destroyed, this, [this]() {
        dialog = nullptr;
    });

    treeView = new QTreeView(dialog);
    model = new QFileSystemModel(dialog);
    layout = new QVBoxLayout(dialog);

    model->setRootPath(QDir::homePath());
    treeView->setModel(model);
    treeView->setRootIndex(model->index(QDir::homePath()));
    treeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);

    layout->addWidget(treeView); // корректное отображение

    connect(treeView, &QTreeView::doubleClicked, this, &MainWindow::onFileDoubleClicked);

    dialog->show();
}


void MainWindow::on_callUpDuration_clicked()
{
    if (date == nullptr) {
        date = new Date;
    }
    date->setDate1("10.02.2024");
    date->setDate2("10.02.2026");
    int duration = date->Duration(date);
    QMessageBox::information(this,"Result of Metod - Duration",QString("Между данными датами расстояние в: %1 дней").arg(duration));
}


void MainWindow::on_callUpNextDay_clicked()
{
    if (date == nullptr) {
        date = new Date;
    }
    date->setFullDate("09.02.2024");
    date->setleapYear(date->isLeap(date->getFullDate()));
    date = date->NextDay();
    QMessageBox::information(this,"Result of Metod - NextDay",QString("Дата следующего дня: %1").arg(QString::fromStdString(date->getFullDate())));
}


void MainWindow::on_callUpIsLeap_clicked()
{
    if (date == nullptr) {
        date = new Date;
    }
    date->setFullDate("10.02.2024");
    bool result = date->isLeap("10.02.2024");
    if (result == true) {
        QMessageBox::information(this,"Result of Metod - isLeap","этот год високосный");
    }
    else {
        QMessageBox::information(this,"Result of Metod - isLeap","этот год не високосный");
    }
}


void MainWindow::on_callUpPreviousDay_clicked()
{
    if (date == nullptr) {
        date = new Date;
    }
    date->setFullDate("01.03.2023");
    date->setleapYear(date->isLeap(date->getFullDate()));
    date = date->PreviousDay();
    QMessageBox::information(this,"Result of Metod - PreviousDay",QString("Дата предыдущего дня: %1").arg(QString::fromStdString(date->getFullDate())));

}


void MainWindow::on_callUpWeekNumber_clicked()
{
    if (date == nullptr) {
        date = new Date;
    }
    short a = date->WeekNumber();
    QMessageBox::information(this, "Result of Metod - WeekNumber", "Номер недели на текущий момент: " + QString::number(a));
}


void MainWindow::on_callUpDaysTillYourBirthday_clicked()
{
    Date bithdaydate;
    bithdaydate.setFullDate("04.04.2025");
    if (date == nullptr) {
        date = new Date;
    }
    int result = date->DaysTillYourBithday(bithdaydate);
    QMessageBox::information(this, "Result of Metod - DaysTillYourBirthday", QString("До дня рождения осталось - %1 дней").arg(result));

}


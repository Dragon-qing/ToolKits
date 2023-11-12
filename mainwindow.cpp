#include <QSize>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_pBugFolder = new WgGenerateBugFolder(ui->frame);
    QSize wgSize = m_pBugFolder->size();

    // 重置窗口大小
    resize(wgSize.width(),wgSize.height()+22);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_pBugFolder;
}


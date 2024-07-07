#include <QSize>

#include "common.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_pBugFolder = new WgGenerateBugFolder(this);
    ui->verticalLayout_2->addWidget(m_pBugFolder);
    // 重置窗口大小
    resize(WINDOW_WIDTH, WINDOW_HEIGHT);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_pBugFolder;
}


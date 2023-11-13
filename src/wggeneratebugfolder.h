#ifndef WGGENERATEBUGFOLDER_H
#define WGGENERATEBUGFOLDER_H

#include <QWidget>

namespace Ui {
class WgGenerateBugFolder;
}

class WgGenerateBugFolder : public QWidget
{
    Q_OBJECT

public:
    explicit WgGenerateBugFolder(QWidget *parent = nullptr);
    ~WgGenerateBugFolder();

private slots:
    void BtnSrcPathClicked();
    void BtnStatementClicked();
    void BtnDirPathClicked();

    void on_checkBox_stateChanged(int arg1);
    void on_btnStart_clicked();

private:
    Ui::WgGenerateBugFolder *ui;
    QString m_sSrcPath;
    QString m_sStatementPath;
    QString m_sDirPath;

    bool CheckFolder(QString path);
    bool m_bIsSaveUI;

};

#endif // WGGENERATEBUGFOLDER_H

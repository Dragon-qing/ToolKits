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

private:
    Ui::WgGenerateBugFolder *ui;
    QString m_sSrcPath;
    QString m_sStatementPath;
    QString m_sDirPath;
    QVector<QString> *m_pClassNameVector;

    bool CheckFolder(QString path);
    bool m_bIsSaveUI;

private slots:
    void BtnSrcPathClicked();
    void BtnStatementClicked();
    void BtnDirPathClicked();
    void BtnStartClicked();

    void on_checkBox_stateChanged(int arg1);

    // QWidget interface
protected:


    // QObject interface
public:
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // WGGENERATEBUGFOLDER_H

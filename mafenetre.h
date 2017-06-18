#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MaFenetre : public QWidget
{
    Q_OBJECT
    public:
    MaFenetre(int height, int w);

    private:
    QPushButton *m_bouton;
};
#endif // MAFENETRE_H

#include "mafenetre.h"

MaFenetre::MaFenetre(int h, int w) : QWidget()
{
    setFixedSize(h, w);

    //Construction du bouton
    m_bouton = new QPushButton("Hihi je suis le bouton de mafenetre", this);

    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon("smile.png"));
    m_bouton->move(60,50);
}

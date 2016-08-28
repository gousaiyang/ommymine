#ifndef _BODY_H_
#define _BODY_H_

#include "setting.h"
#include "sq.h"
class Body : public QDialog
{
    Q_OBJECT
    
    private:
        sq* map[MAXN][MAXM];
        int n,m;
        int rest;
        void pre_end(int);
        QSignalMapper *Smapper;
        QGridLayout *Layout;
        QVBoxLayout *MainLayout;
        QLabel *l_life;
        int life,second;
    
        QImage *image,*g_image;

        void update_life();
  	
  	public:
  		~Body();
  
    public slots:
        void play(int,int,int);
        void sweep_xy(int);
    
    signals:
        void end(int);


};



#endif

#ifndef ENEMYPLANE_H
#define ENEMYPLANE_H

#include <QPixmap>

class EnemyPlane
{
public:
    EnemyPlane();

    //更新坐标
    void updatePosition();

public:
    //敌机资源对象
    QPixmap m_enemy;

    //位置
    int m_x;
    int m_y;

    //敌机的矩形边框，检测碰撞
    QRect m_Rect;

    //状态
    bool m_Free;

    //速度
    int m_Speed;
};

#endif // ENEMYPLANE_H

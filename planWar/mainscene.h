#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include "map.h"
#include "heroplane.h"
#include <QMouseEvent>
#include "bullet.h"
#include "enemyplane.h"
#include "bomb.h"
#include <QSound>

class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

    //初始化游戏场景
    void initScene();

    //添加定时器对象
    QTimer m_Timer;

    //启动游戏，用于启动定时器对象
    void playGame();

    //更新坐标
    void updatePosition();

    //绘制事件
    void paintEvent(QPaintEvent *event);

    Map m_map;//地图对象
    //飞机对象
    HeroPlane m_hero;

    //鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);
    //测试子弹
    //Bullet temp_bullet;

    //敌机出场
    void enemyToScene();

    //敌机数组
    EnemyPlane m_enemys[ENEMY_NUM];

    //敌机出场间隔
    int m_recorder;

    //碰撞检测
    void collisionDetection();

    //爆炸数组
    Bomb m_bombs[BOMB_NUM];

};
#endif // MAINSCENE_H

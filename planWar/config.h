#ifndef CONFIG_H
#define CONFIG_H

#endif // CONFIG_H


//游戏配置数据

#define GAME_WIDTH 512   //宽
#define GAME_HEIGHT 768  //高度
#define GAME_TITLE "飞机大战"//标题

//文件路径
#define GAME_RES_PATH "./res"


//地图配置数据
#define MAP_SCROLL_SPEED 2



//刷新间隔，单位毫秒

#define GAME_RATE 10

//飞机配置数据
#define HERO_PATH ":/res/hero2.png"


//子弹配置数据
#define BULLET_PATH ":/res/bullet_11.png"
#define BULLET_SPEED 5  //子弹移速

#define BULLET_NUM 30 //弹夹子弹数
#define BULLET_INTERVAL 20 //发射子弹事件间隔


//敌机资源图片
#define ENEMY_PATH ":/res/img-plane_5.png"
#define ENEMY_SPEED 5
#define ENEMY_NUM 20 //敌机总数
#define ENEMY_INTERVAL 30  //敌机出场时间间隔

//爆炸配置数据
#define BOMB_PATH ":res/bomb-%1.png"
#define BOMB_NUM 20 //爆炸数量
#define BOMB_MAX 7  //爆炸图片最大索引
#define BOMB_INTERVAL 20  //爆炸切图时间间隔


//添加音效
#define SOUND_BACKGROUND ":res/bg.wav"
#define SOUND_BOMB ":res/bomb.wav"

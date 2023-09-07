#include "heroplane.h"
#include "config.h"
HeroPlane::HeroPlane()
{
    //初始化飞机图片资源
    m_Plane.load(HERO_PATH);

    //初始化坐标
    m_x = GAME_WIDTH * 0.5 - m_Plane.width() * 0.5;
    m_y = GAME_HEIGHT - m_Plane.height();

    //初始化矩形边框
    m_Rect.setWidth(m_Plane.width());
    m_Rect.setHeight(m_Plane.height());
    m_Rect.moveTo(m_x, m_y);

    //初始化发射间隔记录
    m_recorder = 0;
}

void HeroPlane::shoot()
{
    //累加时间间隔记录变量
    m_recorder++;
    //判断如果记录数字未达到发射间隔，直接rerturn
    if(m_recorder < BULLET_INTERVAL)
    {
        return;
    }
    //到达发射时间处理
    //重置发射时间间隔记录
    m_recorder = 0;
    //发射子弹
    for(int i = 0;i < BULLET_NUM;i++)
    {
        //子弹空闲进行发射
        if(m_bullets[i].m_Free)
        {
            m_bullets[i].m_Free = false;
            //设置发射子弹坐标
            m_bullets[i].m_x = m_x + m_Rect.width()*0.5 -10;
            m_bullets[i].m_y = m_y - 25;
            break;
        }
    }
}

void HeroPlane::setPosition(int x, int y)
{
    m_x = x;
    m_y = y;
    m_Rect.moveTo(m_x, m_y);
}

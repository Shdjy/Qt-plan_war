#include "bomb.h"

Bomb::Bomb()
{
    //初始化爆炸图片数组
    for(int i = 0;i < BOMB_MAX;i++)
    {
        //字符串拼接
        QString str = QString(BOMB_PATH).arg(i);
        m_pixArr.push_back(QPixmap(str));
    }

    //初始化坐标
    m_x = 0;
    m_y = 0;

    //初始化空闲状态
    m_Free = true;

    //当前播放图片下标
    m_index = 0;

    //爆炸时间记录
    m_Recoder = 0;
}

void Bomb::updateInfo()
{
    //空闲状态
    if(m_Free)
    {
        return;
    }

    m_Recoder++;
    if(m_Recoder < BOMB_INTERVAL)
    {
        //
        return;
    }
    //重置记录
    m_Recoder = 0;

    //切换爆炸播放图片
    m_index++;
    //下标大于6，重置为0；
    if(m_index > BOMB_MAX-1)
    {
        m_index = 0;
        m_Free = true;
    }
}

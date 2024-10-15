/*
*/

#include "graphics.h"  /// 绘图库
#include "oled_port.h"
#include "oled_g.h"

#define PIXEL_SIZE  8       //每个像素点对应屏幕像素多少 2 = 2*2px
#if 0
#define FORE_COLOR  LIGHTBLUE   //前景颜色
#define BACK_COLOR  WHITE   //背景颜色
#else
#define FORE_COLOR  WHITE   //前景颜色
#define BACK_COLOR  MEDIUMBLUE //LIGHTBLUE //BLACK   //背景颜色
#endif

#define SCREEN_WIDTH     PIXEL_SIZE*OLED_WIDTH  //仿真屏幕宽度
#define SCREEN_HEIGHT    PIXEL_SIZE*OLED_HEIGHT //仿真屏幕高度

void OLED_Init(void)
{
#if 0
    setinitmode(0, 0, INIT_RENDERMANUAL);
    initgraph(SCREEN_WIDTH, SCREEN_HEIGHT); // 初始化图形窗口，因为是大像素,比实际窗口要大
#elif 0
    initgraph(SCREEN_WIDTH, SCREEN_HEIGHT); // 初始化图形窗口，因为是大像素,比实际窗口要大
    setrendermode(RENDER_MANUAL);    //设置为手动模式
#else
    //initgraph(SCREEN_WIDTH, SCREEN_HEIGHT, INIT_RENDERMANUAL); // 初始化图形窗口，因为是大像素,比实际窗口要大
    initgraph(SCREEN_WIDTH, SCREEN_HEIGHT, INIT_ANIMATION);
#endif

    setbkcolor(BACK_COLOR);        //设置背景颜色
    setfillcolor(FORE_COLOR);    //设置填充颜色
}

void OLED_SendBuff(uint8_t buff[8][128]) //将8*128字节的buff一次性全部发送的函数
{
    for (int y = 0; y < 8; ++y) {
        for (int x = 0; x < 128; ++x) {
            for (int bit = 0; bit < 8; ++bit) {
                uint8_t value = (buff[y][x] >> bit) & 1; // 获取相应位的值
                OLED_drawPixel(x, y * 8 + bit, value);
            }
        }
    }
#if 1
    delay_ms(0);
#elif 0
    delay_fps(1);
#endif
}

// 画大像素点的函数（一个大像素由PIXEL_SIZExPIXEL_SIZE的小像素组成）
void OLED_drawPixel(int x, int y, uint8_t value)
{
    COLORREF color = (value == 0 ? BACK_COLOR : FORE_COLOR); // 数组值为0，对应背景色；非0，对应前景色
    setfillcolor(color);    //设置填充颜色
    // 使用bar函数绘制一个大像素（PIXEL_SIZExPIXEL_SIZE块）
    int x0 = x * PIXEL_SIZE;
    int y0 = y * PIXEL_SIZE;
    bar(x0, y0, x0 + PIXEL_SIZE, y0 + PIXEL_SIZE); // bar函数的坐标是按照左上角和右下角来绘制矩形的
}

InputMsg OLED_getKeyMsg(void)
{
    InputMsg key = msg_none;
    if (kbmsg()) //有键盘消息
    {
        key_msg msg = getkey();
        if ((msg.msg == key_msg_up))
        {
            switch (msg.key)
            {
            case key_A:
            case key_left:
                key = msg_up;
                break;
            case key_D:
            case key_right:
                key = msg_down;
                break;
            case key_S:
            case key_down:
            case key_enter:
                key = msg_click;
                break;
            case key_W:
            case key_up:
            case key_esc:
                key = msg_return;
                break;
            default:
                break;
            }
        }
    }
    else
    {

    }
    return key;
}

int OLED_isRun(void)
{
    return is_run();//is_run() 判断窗口是否被关闭,窗口关闭则退出循环
}

void OLED_close(void)
{
    //绘图结束，关闭窗口
    closegraph();
}


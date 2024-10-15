
#include "simulate_conf.h"
#include "WouoUIPage/oled_port.h"
#include "WouoUIPage/oled_ui.h"  //获取oled屏幕大小的宏定义
#ifdef USE_TEST_UI_EXAMPLE
#include "UITest/TestUI.h"
#else
#include "LittleClockUI/LittleClockUI.h"
#endif


int main()
{
    int key;
#ifdef USE_TEST_UI_EXAMPLE
    TestUI_Init();
#else
    LittleClockUI_Init();
#endif
	while(OLED_isRun())
    {
#ifdef USE_TEST_UI_EXAMPLE
        TestUI_Proc();
#else
        LittleClockUI_Proc();
#endif

        key = OLED_getKey();
        if(0 < key) //有键盘消息
        {
            switch (key)
            {
                case KEY_UP: OLED_MsgQueSend(msg_up); break;
                case KEY_DOWN: OLED_MsgQueSend(msg_down); break;
                case KEY_CLICK: OLED_MsgQueSend(msg_click); break;
                case KEY_RETURN: OLED_MsgQueSend(msg_return); break;
                default: break;
            }
        }
    }
    OLED_close();
	return 0;
}


#include "WouoUIPage/oled_port.h"
#include "WouoUIPage/oled_ui.h"
#ifdef USE_TEST_UI_EXAMPLE
#include "UITest/TestUI.h"
#else
#include "LittleClockUI/LittleClockUI.h"
#endif

int main()
{
    InputMsg key;
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

        key = OLED_getKeyMsg();
        if(msg_none != key)
        {
            OLED_MsgQueSend(key);
        }
    }

    OLED_close();

    return 0;
}

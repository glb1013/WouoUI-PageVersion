#ifndef _OLED_DATATYPE_H_
#define _OLED_DATATYPE_H_

#include <stdint.h>

/*============================================常量定义=========================================*/
#define True  1
#define False 0


//---------输入消息枚举类型
typedef enum
{
    msg_none = 0x00, //none表示没有操作
    msg_up,      //上，或者last消息，表上一个
    msg_down,    //下，或者next消息，表下一个
    msg_return,  //返回消息，表示返回，从一个页面退出
    msg_click,   //点击消息，表确认，确认某一选项，回调用一次回调
    msg_home,    //home消息，表回主界面(尚未设计，目前还没有设计对应的功能，默认以page_id为0的页面为主页面)
} InputMsg; //输入消息类型，UI设计只供输入5种消息

//页面地址类型，用于声明全局页面数组存放页面使用
#if 0
#define PageAddr void*
#else
typedef void* PageAddr;
#endif

#endif /* _OLED_DATATYPE_H_ */

#ifndef _OLED_DATATYPE_H_
#define _OLED_DATATYPE_H_

#include <stdint.h>

/*============================================��������=========================================*/
#define True  1
#define False 0


//---------������Ϣö������
typedef enum
{
    msg_none = 0x00, //none��ʾû�в���
    msg_up,      //�ϣ�����last��Ϣ������һ��
    msg_down,    //�£�����next��Ϣ������һ��
    msg_return,  //������Ϣ����ʾ���أ���һ��ҳ���˳�
    msg_click,   //�����Ϣ����ȷ�ϣ�ȷ��ĳһѡ��ص���һ�λص�
    msg_home,    //home��Ϣ�����������(��δ��ƣ�Ŀǰ��û����ƶ�Ӧ�Ĺ��ܣ�Ĭ����page_idΪ0��ҳ��Ϊ��ҳ��)
} InputMsg; //������Ϣ���ͣ�UI���ֻ������5����Ϣ

//ҳ���ַ���ͣ���������ȫ��ҳ��������ҳ��ʹ��
#if 0
#define PageAddr void*
#else
typedef void* PageAddr;
#endif

#endif /* _OLED_DATATYPE_H_ */

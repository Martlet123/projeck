#include <graphics.h>    // ����ͼ�ο�ͷ�ļ�

int main()
{
    initgraph(640, 480);    // ��ʼ��ͼ�ν���

    // ���Ʊ���
    setbkcolor(RGB(255, 255, 255));    // ���ñ�����ɫΪ��ɫ
    cleardevice();    // �����Ļ

    // ���Ʊ���
    settextcolor(RGB(0, 0, 0));    // ����������ɫΪ��ɫ
    settextstyle(50, 0, _T("����"));    // ��������[��ʽ](https://geek.csdn.net/educolumn/24a10ad6a5bc75b9f6c92ee7d63d8e8b?spm=1055.2569.3001.10083)�ʹ�С
    outtextxy(200, 50, _T("��Ϸ��ʼ�˵�"));    // �������

    // ���ư�ť
    setfillcolor(RGB(0, 162, 232));    // ���������ɫΪ��ɫ
    setlinecolor(RGB(0, 162, 232));    // ���ñ߿���ɫΪ��ɫ
    fillrectangle(220, 200, 420, 250);    // ���ƾ���
    settextstyle(30, 0, _T("����"));    // ��������[��ʽ](https://geek.csdn.net/educolumn/24a10ad6a5bc75b9f6c92ee7d63d8e8b?spm=1055.2569.3001.10083)�ʹ�С
    settextcolor(BLACK);    // ����������ɫΪ��ɫ
    outtextxy(270, 210, _T("��ʼ��Ϸ"));    // �������

    // �ȴ��û������ť
    while (true)
    {
        // ��ȡ���״̬
        MOUSEMSG mouseMsg = GetMouseMsg();
        if (mouseMsg.uMsg == WM_LBUTTONDOWN)    // ����û������������
        {
            if (mouseMsg.x >= 220 && mouseMsg.x <= 420 && mouseMsg.y >= 200 && mouseMsg.y <= 250)    // ����û�����˰�ť
            {
                // ������Ϸ
                break;
            }
        }
    }

    closegraph();    // �ر�ͼ�ν���
    return 0;
}

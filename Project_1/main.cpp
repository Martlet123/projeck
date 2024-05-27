#include <graphics.h>    // 引用图形库头文件

int main()
{
    initgraph(640, 480);    // 初始化图形界面

    // 绘制背景
    setbkcolor(RGB(255, 255, 255));    // 设置背景颜色为白色
    cleardevice();    // 清空屏幕

    // 绘制标题
    settextcolor(RGB(0, 0, 0));    // 设置字体颜色为黑色
    settextstyle(50, 0, _T("黑体"));    // 设置字体[样式](https://geek.csdn.net/educolumn/24a10ad6a5bc75b9f6c92ee7d63d8e8b?spm=1055.2569.3001.10083)和大小
    outtextxy(200, 50, _T("游戏开始菜单"));    // 输出文字

    // 绘制按钮
    setfillcolor(RGB(0, 162, 232));    // 设置填充颜色为蓝色
    setlinecolor(RGB(0, 162, 232));    // 设置边框颜色为蓝色
    fillrectangle(220, 200, 420, 250);    // 绘制矩形
    settextstyle(30, 0, _T("黑体"));    // 设置字体[样式](https://geek.csdn.net/educolumn/24a10ad6a5bc75b9f6c92ee7d63d8e8b?spm=1055.2569.3001.10083)和大小
    settextcolor(BLACK);    // 设置字体颜色为白色
    outtextxy(270, 210, _T("开始游戏"));    // 输出文字

    // 等待用户点击按钮
    while (true)
    {
        // 获取鼠标状态
        MOUSEMSG mouseMsg = GetMouseMsg();
        if (mouseMsg.uMsg == WM_LBUTTONDOWN)    // 如果用户点击了鼠标左键
        {
            if (mouseMsg.x >= 220 && mouseMsg.x <= 420 && mouseMsg.y >= 200 && mouseMsg.y <= 250)    // 如果用户点击了按钮
            {
                // 进入游戏
                break;
            }
        }
    }

    closegraph();    // 关闭图形界面
    return 0;
}

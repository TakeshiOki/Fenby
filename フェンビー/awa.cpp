#include "main.h"
#include "awa.h"
#include"player.h"


int bubbleImage;
extern CHARACTER bubble[BUBBLE_MAX];

void SysInitBubble()
{
	bubbleImage = LoadGraph("bmp/awa.bmp");
}

void InitBubble()
{
	for (int i = 0; i < BUBBLE_MAX; i++) {
		bubble[i].pos = { 300, 300 };
		bubble[i].speed = 3;
		bubble[i].hp = 20;			// 泡により回復するライフの量
		bubble[i].flag = false;	// 表示するかしないか
	}

}

void UpdetaBuble()
{

}

void DrawBuble()
{
	DrawGraph(bubble[0].pos.x, bubble[0].pos.y, bubbleImage, true);
}

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
		bubble[i].hp = 20;			// –A‚É‚æ‚è‰ñ•œ‚·‚éƒ‰ƒCƒt‚Ì—Ê
		bubble[i].flag = false;	// •\Ž¦‚·‚é‚©‚µ‚È‚¢‚©
	}

}

void UpdetaBuble()
{

}

void DrawBuble()
{
	DrawGraph(bubble[0].pos.x, bubble[0].pos.y, bubbleImage, true);
}

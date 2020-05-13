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
		bubble[i].hp = 20;			// �A�ɂ��񕜂��郉�C�t�̗�
		bubble[i].flag = false;	// �\�����邩���Ȃ���
	}

}

void UpdetaBuble()
{

}

void DrawBuble()
{
	DrawGraph(bubble[0].pos.x, bubble[0].pos.y, bubbleImage, true);
}

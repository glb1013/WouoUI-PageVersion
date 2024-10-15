#ifndef __OLEDFONT_H
#define __OLEDFONT_H 	   
//常用ASCII表
//偏移量32
//ASCII字符集
//偏移量32
//大小:12*6
/************************************6*8的点阵************************************/
const unsigned char F6x8[][6] =		
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// sp
0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,// !
0x00, 0x00, 0x07, 0x00, 0x07, 0x00,// "
0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14,// #
0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12,// $
0x00, 0x62, 0x64, 0x08, 0x13, 0x23,// %
0x00, 0x36, 0x49, 0x55, 0x22, 0x50,// &
0x00, 0x00, 0x05, 0x03, 0x00, 0x00,// '
0x00, 0x00, 0x1c, 0x22, 0x41, 0x00,// (
0x00, 0x00, 0x41, 0x22, 0x1c, 0x00,// )
0x00, 0x14, 0x08, 0x3E, 0x08, 0x14,// *
0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,// +
0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,// ,
0x00, 0x08, 0x08, 0x08, 0x08, 0x08,// -
0x00, 0x00, 0x60, 0x60, 0x00, 0x00,// .
0x00, 0x20, 0x10, 0x08, 0x04, 0x02,// /
0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,// 0
0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,// 1
0x00, 0x42, 0x61, 0x51, 0x49, 0x46,// 2
0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,// 3
0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,// 4
0x00, 0x27, 0x45, 0x45, 0x45, 0x39,// 5
0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,// 6
0x00, 0x01, 0x71, 0x09, 0x05, 0x03,// 7
0x00, 0x36, 0x49, 0x49, 0x49, 0x36,// 8
0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,// 9
0x00, 0x00, 0x36, 0x36, 0x00, 0x00,// :
0x00, 0x00, 0x56, 0x36, 0x00, 0x00,// ;
0x00, 0x08, 0x14, 0x22, 0x41, 0x00,// <
0x00, 0x14, 0x14, 0x14, 0x14, 0x14,// =
0x00, 0x00, 0x41, 0x22, 0x14, 0x08,// >
0x00, 0x02, 0x01, 0x51, 0x09, 0x06,// ?
0x00, 0x32, 0x49, 0x59, 0x51, 0x3E,// @
0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,// A
0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,// B
0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,// C
0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,// D
0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,// E
0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,// F
0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A,// G
0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,// H
0x00, 0x00, 0x41, 0x7F, 0x41, 0x00,// I
0x00, 0x20, 0x40, 0x41, 0x3F, 0x01,// J
0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,// K
0x00, 0x7F, 0x40, 0x40, 0x40, 0x40,// L
0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,// M
0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F,// N
0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,// O
0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,// P
0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E,// Q
0x00, 0x7F, 0x09, 0x19, 0x29, 0x46,// R
0x00, 0x46, 0x49, 0x49, 0x49, 0x31,// S
0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,// T
0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F,// U
0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F,// V
0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F,// W
0x00, 0x63, 0x14, 0x08, 0x14, 0x63,// X
0x00, 0x07, 0x08, 0x70, 0x08, 0x07,// Y
0x00, 0x61, 0x51, 0x49, 0x45, 0x43,// Z
0x00, 0x00, 0x7F, 0x41, 0x41, 0x00,// [
0x00, 0x55, 0x2A, 0x55, 0x2A, 0x55,// 55
0x00, 0x00, 0x41, 0x41, 0x7F, 0x00,// ]
0x00, 0x04, 0x02, 0x01, 0x02, 0x04,// ^
0x00, 0x40, 0x40, 0x40, 0x40, 0x40,// _
0x00, 0x00, 0x01, 0x02, 0x04, 0x00,// '
0x00, 0x20, 0x54, 0x54, 0x54, 0x78,// a
0x00, 0x7F, 0x48, 0x44, 0x44, 0x38,// b
0x00, 0x38, 0x44, 0x44, 0x44, 0x20,// c
0x00, 0x38, 0x44, 0x44, 0x48, 0x7F,// d
0x00, 0x38, 0x54, 0x54, 0x54, 0x18,// e
0x00, 0x08, 0x7E, 0x09, 0x01, 0x02,// f
0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C,// g
0x00, 0x7F, 0x08, 0x04, 0x04, 0x78,// h
0x00, 0x00, 0x44, 0x7D, 0x40, 0x00,// i
0x00, 0x40, 0x80, 0x84, 0x7D, 0x00,// j
0x00, 0x7F, 0x10, 0x28, 0x44, 0x00,// k
0x00, 0x00, 0x41, 0x7F, 0x40, 0x00,// l
0x00, 0x7C, 0x04, 0x18, 0x04, 0x78,// m
0x00, 0x7C, 0x08, 0x04, 0x04, 0x78,// n
0x00, 0x38, 0x44, 0x44, 0x44, 0x38,// o
0x00, 0xFC, 0x24, 0x24, 0x24, 0x18,// p
0x00, 0x18, 0x24, 0x24, 0x18, 0xFC,// q
0x00, 0x7C, 0x08, 0x04, 0x04, 0x08,// r
0x00, 0x48, 0x54, 0x54, 0x54, 0x20,// s
0x00, 0x04, 0x3F, 0x44, 0x40, 0x20,// t
0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C,// u
0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,// v
0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C,// w
0x00, 0x44, 0x28, 0x10, 0x28, 0x44,// x
0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C,// y
0x00, 0x44, 0x64, 0x54, 0x4C, 0x44,// z
0x00, 0x00, 0x00, 0x7E, 0x80, 0x00,/*"{",0*/
0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, /*"|",1*/
0x00, 0x80, 0x7E, 0x00, 0x00, 0x00, /*"}",2*/
0x00, 0x08, 0x08, 0x10, 0x10, 0x00, /*"~",0*/
};
/****************************************8*16的点阵************************************/
const unsigned char F8X16[][8] = 
{
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",32*/
		{0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x33,0x00,0x00,0x00,0x00},/*"!",33*/
		{0x00,0x10,0x0C,0x02,0x10,0x0C,0x02,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",34*/
		{0x00,0x40,0xC0,0x78,0x40,0xC0,0x78,0x00},
		{0x00,0x04,0x3F,0x04,0x04,0x3F,0x04,0x00},/*"#",35*/
		{0x00,0x70,0x88,0x88,0xFC,0x08,0x30,0x00},
		{0x00,0x18,0x20,0x20,0xFF,0x21,0x1E,0x00},/*"$",36*/
		{0xF0,0x08,0xF0,0x80,0x60,0x18,0x00,0x00},
		{0x00,0x31,0x0C,0x03,0x1E,0x21,0x1E,0x00},/*"%",37*/
		{0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00},
		{0x1E,0x21,0x23,0x2C,0x19,0x27,0x21,0x10},/*"&",38*/
		{0x00,0x12,0x0E,0x00,0x00,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",39*/
		{0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00},
		{0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00},/*"(",40*/
		{0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00},
		{0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00},/*")",41*/
		{0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00},
		{0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00},/*"*",42*/
		{0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00},
		{0x00,0x01,0x01,0x01,0x0F,0x01,0x01,0x01},/*"+",43*/
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
		{0x00,0x90,0x70,0x00,0x00,0x00,0x00,0x00},/*",",44*/
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
		{0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00},/*"-",45*/
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
		{0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00},/*".",46*/
		{0x00,0x00,0x00,0x00,0xC0,0x38,0x04,0x00},
		{0x00,0x60,0x18,0x07,0x00,0x00,0x00,0x00},/*"/",47*/
		{0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00},
		{0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00},/*"0",48*/
		{0x00,0x00,0x10,0x10,0xF8,0x00,0x00,0x00},
		{0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00},/*"1",49*/
		{0x00,0x70,0x08,0x08,0x08,0x08,0xF0,0x00},
		{0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00},/*"2",50*/
		{0x00,0x30,0x08,0x08,0x08,0x88,0x70,0x00},
		{0x00,0x18,0x20,0x21,0x21,0x22,0x1C,0x00},/*"3",51*/
		{0x00,0x00,0x80,0x40,0x30,0xF8,0x00,0x00},
		{0x00,0x06,0x05,0x24,0x24,0x3F,0x24,0x24},/*"4",52*/
		{0x00,0xF8,0x88,0x88,0x88,0x08,0x08,0x00},
		{0x00,0x19,0x20,0x20,0x20,0x11,0x0E,0x00},/*"5",53*/
		{0x00,0xE0,0x10,0x88,0x88,0x90,0x00,0x00},
		{0x00,0x0F,0x11,0x20,0x20,0x20,0x1F,0x00},/*"6",54*/
		{0x00,0x18,0x08,0x08,0x88,0x68,0x18,0x00},
		{0x00,0x00,0x00,0x3E,0x01,0x00,0x00,0x00},/*"7",55*/
		{0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00},
		{0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00},/*"8",56*/
		{0x00,0xF0,0x08,0x08,0x08,0x10,0xE0,0x00},
		{0x00,0x01,0x12,0x22,0x22,0x11,0x0F,0x00},/*"9",57*/
		{0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00},/*":",58*/
		{0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00},
		{0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00},/*";",59*/
		{0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00},
		{0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00},/*"<",60*/
		{0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x00},
		{0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x00},/*"=",61*/
		{0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00},
		{0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00},/*">",62*/
		{0x00,0x70,0x48,0x08,0x08,0x88,0x70,0x00},
		{0x00,0x00,0x00,0x30,0x37,0x00,0x00,0x00},/*"?",63*/
		{0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00},
		{0x07,0x18,0x27,0x28,0x2F,0x28,0x17,0x00},/*"@",64*/
		{0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00},
		{0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20},/*"A",65*/
		{0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00},
		{0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00},/*"B",66*/
		{0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00},
		{0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00},/*"C",67*/
		{0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00},
		{0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00},/*"D",68*/
		{0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00},
		{0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00},/*"E",69*/
		{0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00},
		{0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00},/*"F",70*/
		{0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00},
		{0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00},/*"G",71*/
		{0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08},
		{0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20},/*"H",72*/
		{0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00},
		{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"I",73*/
		{0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00},
		{0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00},/*"J",74*/
		{0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00},
		{0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00},/*"K",75*/
		{0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00},
		{0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00},/*"L",76*/
		{0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00},
		{0x20,0x3F,0x01,0x3E,0x01,0x3F,0x20,0x00},/*"M",77*/
		{0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08},
		{0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00},/*"N",78*/
		{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00},
		{0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00},/*"O",79*/
		{0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00},
		{0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00},/*"P",80*/
		{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00},
		{0x0F,0x10,0x28,0x28,0x30,0x50,0x4F,0x00},/*"Q",81*/
		{0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00},
		{0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20},/*"R",82*/
		{0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00},
		{0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00},/*"S",83*/
		{0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00},
		{0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00},/*"T",84*/
		{0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08},
		{0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00},/*"U",85*/
		{0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08},
		{0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00},/*"V",86*/
		{0x08,0xF8,0x00,0xF8,0x00,0xF8,0x08,0x00},
		{0x00,0x03,0x3E,0x01,0x3E,0x03,0x00,0x00},/*"W",87*/
		{0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08},
		{0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20},/*"X",88*/
		{0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00},
		{0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00},/*"Y",89*/
		{0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00},
		{0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00},/*"Z",90*/
		{0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x00},
		{0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x00},/*"[",91*/
		{0x00,0x04,0x38,0xC0,0x00,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x01,0x06,0x38,0xC0,0x00},/*"\",92*/
		{0x00,0x02,0x02,0x02,0xFE,0x00,0x00,0x00},
		{0x00,0x40,0x40,0x40,0x7F,0x00,0x00,0x00},/*"]",93*/
		{0x00,0x00,0x04,0x02,0x02,0x04,0x00,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",94*/
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
		{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80},/*"_",95*/
		{0x00,0x02,0x02,0x04,0x00,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",96*/
		{0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00},
		{0x00,0x19,0x24,0x24,0x12,0x3F,0x20,0x00},/*"a",97*/
		{0x10,0xF0,0x00,0x80,0x80,0x00,0x00,0x00},
		{0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00},/*"b",98*/
		{0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00},
		{0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00},/*"c",99*/
		{0x00,0x00,0x80,0x80,0x80,0x90,0xF0,0x00},
		{0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20},/*"d",100*/
		{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00},
		{0x00,0x1F,0x24,0x24,0x24,0x24,0x17,0x00},/*"e",101*/
		{0x00,0x80,0x80,0xE0,0x90,0x90,0x20,0x00},
		{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"f",102*/
		{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00},
		{0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00},/*"g",103*/
		{0x10,0xF0,0x00,0x80,0x80,0x80,0x00,0x00},
		{0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20},/*"h",104*/
		{0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00},
		{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"i",105*/
		{0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00},
		{0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00},/*"j",106*/
		{0x10,0xF0,0x00,0x00,0x80,0x80,0x80,0x00},
		{0x20,0x3F,0x24,0x06,0x29,0x30,0x20,0x00},/*"k",107*/
		{0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00},
		{0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"l",108*/
		{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00},
		{0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F},/*"m",109*/
		{0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00},
		{0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20},/*"n",110*/
		{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00},
		{0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00},/*"o",111*/
		{0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00},
		{0x80,0xFF,0x91,0x20,0x20,0x11,0x0E,0x00},/*"p",112*/
		{0x00,0x00,0x00,0x80,0x80,0x00,0x80,0x00},
		{0x00,0x0E,0x11,0x20,0x20,0x91,0xFF,0x80},/*"q",113*/
		{0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00},
		{0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00},/*"r",114*/
		{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00},
		{0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00},/*"s",115*/
		{0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00},
		{0x00,0x00,0x00,0x1F,0x20,0x20,0x10,0x00},/*"t",116*/
		{0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00},
		{0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20},/*"u",117*/
		{0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00},
		{0x00,0x03,0x0C,0x30,0x0C,0x03,0x00,0x00},/*"v",118*/
		{0x80,0x80,0x00,0x80,0x80,0x00,0x80,0x80},
		{0x01,0x0E,0x30,0x0C,0x07,0x38,0x06,0x01},/*"w",119*/
		{0x00,0x80,0x80,0x80,0x00,0x80,0x80,0x00},
		{0x00,0x20,0x31,0x0E,0x2E,0x31,0x20,0x00},/*"x",120*/
		{0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80},
		{0x00,0x81,0x86,0x78,0x18,0x06,0x01,0x00},/*"y",121*/
		{0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00},
		{0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00},/*"z",122*/
		{0x00,0x00,0x00,0x00,0x00,0xFC,0x02,0x02},
		{0x00,0x00,0x00,0x00,0x01,0x3E,0x40,0x40},/*"{",123*/
		{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"|",124*/
		{0x02,0x02,0xFC,0x00,0x00,0x00,0x00,0x00},
		{0x40,0x40,0x3E,0x01,0x00,0x00,0x00,0x00},/*"}",125*/
		{0x00,0x02,0x01,0x02,0x02,0x04,0x02,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",126*/
};


const unsigned char F12X24 [][12]= 
{
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",32*/
	{0x00,0x00,0x00,0x00,0x00,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00},/*"!",33*/
	{0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",34*/
	{0x00,0x00,0x00,0x80,0xF0,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00},
	{0xC6,0xC6,0xC6,0xFF,0xC7,0xC6,0xC6,0xF6,0xFF,0xC6,0xC6,0x00},
	{0x00,0x00,0x1F,0x07,0x00,0x00,0x10,0x1F,0x00,0x00,0x00,0x00},/*"#",35*/
	{0x00,0x00,0xC0,0xE0,0x30,0xF8,0x30,0x70,0xE0,0xC0,0x00,0x00},
	{0x00,0x80,0x87,0x0F,0x0C,0xFF,0x38,0x70,0xE1,0xC1,0x00,0x00},
	{0x00,0x03,0x0F,0x0E,0x18,0x7F,0x18,0x1C,0x0F,0x07,0x00,0x00},/*"$",36*/
	{0x00,0xE0,0x30,0x30,0xE0,0x00,0x00,0x00,0xE0,0x10,0x00,0x00},
	{0x00,0x0F,0x18,0x18,0xCF,0x30,0x0C,0xE3,0x30,0x30,0xE0,0x00},
	{0x00,0x00,0x18,0x06,0x01,0x00,0x01,0x0F,0x18,0x18,0x0F,0x00},/*"%",37*/
	{0x00,0x00,0xC0,0xE0,0x30,0x30,0x30,0xE0,0x80,0x00,0x00,0x00},
	{0x00,0xE0,0xF3,0x3F,0x3C,0xFC,0xC6,0x83,0x00,0xE0,0x60,0x00},
	{0x00,0x07,0x0F,0x0C,0x18,0x18,0x19,0x0F,0x07,0x0F,0x0C,0x00},/*"&",38*/
	{0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",39*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x30,0x18,0x08,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0x01,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0E,0x18,0x30,0x20,0x00},/*"(",40*/
	{0x00,0x0C,0x18,0x70,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x01,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x60,0x30,0x1C,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00},/*")",41*/
	{0x00,0xC0,0x80,0x00,0x00,0xF0,0xF0,0x00,0x00,0x80,0xC0,0x00},
	{0x00,0x31,0x19,0x1B,0x0F,0xFF,0xFF,0x0F,0x1B,0x19,0x31,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"*",42*/
	{0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00},
	{0x10,0x10,0x10,0x10,0x10,0xFF,0xFF,0x10,0x10,0x10,0x10,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00},/*"+",43*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x5C,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",44*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",45*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",46*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x00},
	{0x00,0x00,0x00,0x00,0xC0,0x30,0x0C,0x07,0x01,0x00,0x00,0x00},
	{0x00,0x18,0x0E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"/",47*/
	{0x00,0x00,0xC0,0xE0,0x70,0x30,0x30,0x60,0xE0,0xC0,0x00,0x00},
	{0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFE,0x00},
	{0x00,0x01,0x07,0x0E,0x0C,0x18,0x18,0x0C,0x0F,0x07,0x00,0x00},/*"0",48*/
	{0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x03,0x01,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00},/*"1",49*/
	{0x00,0x80,0xE0,0x60,0x30,0x30,0x30,0x70,0xE0,0xC0,0x00,0x00},
	{0x00,0x01,0x01,0x00,0x80,0xC0,0xE0,0x38,0x1F,0x07,0x00,0x00},
	{0x00,0x08,0x0E,0x0F,0x0B,0x09,0x08,0x08,0x08,0x08,0x08,0x00},/*"2",50*/
	{0x00,0x80,0xC0,0x60,0x30,0x30,0x30,0x30,0xE0,0xC0,0x00,0x00},
	{0x00,0x01,0x01,0x00,0x00,0x18,0x18,0x38,0x7F,0xE7,0x80,0x00},
	{0x00,0x03,0x07,0x0C,0x18,0x18,0x18,0x0C,0x0E,0x07,0x01,0x00},/*"3",51*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xF0,0x00,0x00,0x00},
	{0x80,0xC0,0xF0,0xB8,0x8E,0x87,0x81,0xFF,0xFF,0x80,0x80,0x80},
	{0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x0F,0x0F,0x01,0x01,0x01},/*"4",52*/
	{0x00,0x00,0xE0,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00},
	{0x00,0x1C,0x1F,0x0D,0x04,0x04,0x0C,0x0C,0x3C,0xF8,0xC0,0x00},
	{0x01,0x07,0x0E,0x08,0x18,0x18,0x18,0x0C,0x0F,0x07,0x00,0x00},/*"5",53*/
	{0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0x30,0x10,0x00,0x00,0x00},
	{0x00,0xE0,0xF8,0x1E,0x0F,0x0D,0x0C,0x0C,0x18,0xF8,0xF0,0x00},
	{0x00,0x03,0x07,0x0C,0x18,0x18,0x18,0x18,0x0C,0x0F,0x03,0x00},/*"6",54*/
	{0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xA0,0xE0,0x60,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0x1E,0x07,0x01,0x00,0x00},
	{0x00,0x00,0x00,0x08,0x0F,0x07,0x00,0x00,0x00,0x00,0x00,0x00},/*"7",55*/
	{0x00,0x80,0xE0,0x60,0x30,0x30,0x30,0x20,0xE0,0xC0,0x00,0x00},
	{0x00,0xE3,0xFF,0x3C,0x18,0x18,0x18,0x3C,0x3F,0xE7,0xC0,0x00},
	{0x00,0x07,0x0F,0x0C,0x18,0x18,0x18,0x18,0x0C,0x07,0x03,0x00},/*"8",56*/
	{0x00,0xC0,0xE0,0x60,0x30,0x30,0x30,0x60,0xE0,0xC0,0x00,0x00},
	{0x02,0x1F,0x3D,0x30,0x60,0x60,0xE0,0xF0,0x7F,0x1F,0x03,0x00},
	{0x00,0x00,0x00,0x10,0x1C,0x0F,0x03,0x01,0x00,0x00,0x00,0x00},/*"9",57*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00},/*":",58*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x7C,0x1C,0x00,0x00,0x00,0x00,0x00},/*";",59*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x60,0x20,0x10,0x00},
	{0x00,0x10,0x38,0x6C,0xC6,0x83,0x01,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x08,0x10,0x00},/*"<",60*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"=",61*/
	{0x00,0x30,0x20,0x40,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x01,0x83,0xC6,0x6C,0x38,0x10,0x00},
	{0x00,0x18,0x08,0x04,0x02,0x03,0x01,0x00,0x00,0x00,0x00,0x00},/*">",62*/
	{0x00,0x00,0xC0,0xE0,0x70,0x30,0x30,0x60,0xE0,0xC0,0x00,0x00},
	{0x00,0x01,0x01,0x00,0x00,0xE0,0x78,0x1C,0x0F,0x07,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00},/*"?",63*/
	{0x00,0x00,0xC0,0x20,0x20,0x10,0x10,0x10,0x20,0x40,0x80,0x00},
	{0x78,0x87,0x00,0xFC,0x0E,0x01,0xC1,0xFF,0x07,0x80,0x7F,0x00},
	{0x00,0x03,0x04,0x09,0x11,0x11,0x10,0x11,0x09,0x01,0x00,0x00},/*"@",64*/
	{0x00,0x00,0x00,0x00,0xC0,0xF0,0xF0,0x80,0x00,0x00,0x00,0x00},
	{0x00,0x00,0xE0,0xFE,0xDF,0xC1,0xC3,0xFF,0xFC,0xC0,0x00,0x00},
	{0x10,0x1F,0x1F,0x01,0x00,0x00,0x00,0x00,0x03,0x1F,0x1E,0x10},/*"A",65*/
	{0x00,0xF0,0xF0,0x30,0x30,0x30,0x20,0x60,0xE0,0xC0,0x00,0x00},
	{0x00,0xFF,0xFF,0x18,0x18,0x18,0x18,0x18,0x3F,0xE7,0xC3,0x00},
	{0x00,0x1F,0x1F,0x18,0x18,0x18,0x18,0x0C,0x0E,0x0F,0x03,0x00},/*"B",66*/
	{0x00,0x00,0xC0,0xE0,0x60,0x30,0x30,0x30,0x60,0xC0,0x80,0x00},
	{0x00,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0xC3,0xC3,0x00},
	{0x00,0x01,0x07,0x0F,0x0C,0x18,0x18,0x18,0x0E,0x07,0x03,0x00},/*"C",67*/
	{0x00,0xF0,0xF0,0x30,0x20,0x20,0x60,0xE0,0xC0,0x80,0x00,0x00},
	{0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x83,0xFF,0xFE,0x00},
	{0x00,0x1F,0x1F,0x18,0x18,0x08,0x0C,0x0E,0x07,0x03,0x00,0x00},/*"D",68*/
	{0x00,0xF0,0xF0,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00,0x00},
	{0x00,0xFF,0xFF,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00},
	{0x00,0x1F,0x1F,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00},/*"E",69*/
	{0x00,0xF0,0xF0,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00},
	{0x00,0xFF,0xFF,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00},
	{0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"F",70*/
	{0x00,0x00,0xC0,0xE0,0x60,0x30,0x30,0x60,0xE0,0xC0,0x00,0x00},
	{0x00,0xFF,0xFF,0x01,0x00,0x00,0x30,0x30,0x31,0xF3,0xF3,0x00},
	{0x00,0x01,0x07,0x0F,0x0C,0x18,0x18,0x08,0x0E,0x1F,0x1F,0x00},/*"G",71*/
	{0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00},
	{0x00,0xFF,0xFF,0x18,0x18,0x18,0x18,0x18,0x18,0xFF,0xFF,0x00},
	{0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00},/*"H",72*/
	{0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},/*"I",73*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0xF0,0x00},
	{0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x7F,0x00},
	{0x00,0x03,0x07,0x0E,0x1C,0x18,0x18,0x0C,0x0F,0x07,0x00,0x00},/*"J",74*/
	{0x00,0xF0,0xF0,0x00,0x00,0x00,0x80,0xC0,0xE0,0x30,0x10,0x00},
	{0x00,0xFF,0xFF,0x38,0x1C,0x3F,0xF3,0xE1,0x80,0x00,0x00,0x00},
	{0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x03,0x0F,0x1E,0x18,0x00},/*"K",75*/
	{0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x1F,0x1F,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00},/*"L",76*/
	{0x00,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x80,0xF0,0xF0,0xF0,0x00},
	{0x00,0xFF,0xFF,0x0F,0xFF,0xE0,0xE0,0xFF,0x07,0xFF,0xFF,0x00},
	{0x00,0x1F,0x1F,0x00,0x01,0x1F,0x1F,0x00,0x00,0x1F,0x1F,0x00},/*"M",77*/
	{0x00,0xF0,0xF0,0xE0,0x80,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00},
	{0x00,0xFF,0xFF,0x03,0x0F,0x3C,0xF0,0xC0,0x00,0xFF,0xFF,0x00},
	{0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x07,0x1F,0x1F,0x1F,0x00},/*"N",78*/
	{0x00,0x80,0xC0,0xE0,0x70,0x30,0x30,0x60,0xE0,0xC0,0x00,0x00},
	{0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x00},
	{0x00,0x03,0x07,0x0E,0x1C,0x18,0x18,0x0C,0x0F,0x07,0x01,0x00},/*"O",79*/
	{0x00,0xF0,0xF0,0x30,0x30,0x30,0x20,0x60,0x60,0xC0,0x80,0x00},
	{0x00,0xFF,0xFF,0x30,0x30,0x30,0x30,0x30,0x38,0x1F,0x0F,0x00},
	{0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"P",80*/
	{0x00,0x80,0xC0,0xE0,0x70,0x30,0x30,0x60,0xE0,0xC0,0x00,0x00},
	{0x00,0xFF,0xFF,0x00,0x00,0x00,0x80,0x80,0x01,0xFF,0xFF,0x00},
	{0x00,0x03,0x07,0x0E,0x1C,0x18,0x19,0x0F,0x1F,0x1F,0x01,0x00},/*"Q",81*/
	{0x00,0xF0,0xF0,0x30,0x30,0x30,0x20,0x60,0xE0,0xC0,0x80,0x00},
	{0x00,0xFF,0xFF,0x30,0x30,0x30,0x70,0xF8,0x9C,0x0F,0x07,0x00},
	{0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x01,0x0F,0x1E,0x18,0x00},/*"R",82*/
	{0x00,0x80,0xC0,0xE0,0x30,0x30,0x30,0x60,0xE0,0xC0,0x00,0x00},
	{0x00,0x83,0x87,0x0E,0x1C,0x18,0x38,0x30,0x71,0xE1,0xC0,0x00},
	{0x00,0x07,0x0F,0x0C,0x18,0x18,0x18,0x18,0x0E,0x07,0x03,0x00},/*"S",83*/
	{0x00,0x30,0x30,0x30,0x30,0xF0,0xF0,0x30,0x30,0x30,0x30,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},/*"T",84*/
	{0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00},
	{0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00},
	{0x00,0x03,0x0F,0x0C,0x18,0x18,0x18,0x1C,0x0E,0x0F,0x03,0x00},/*"U",85*/
	{0x30,0xF0,0xE0,0x00,0x00,0x00,0x00,0x00,0x80,0xF0,0xF0,0x00},
	{0x00,0x01,0x1F,0xFF,0xF0,0x00,0x80,0xF8,0x7F,0x07,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x07,0x1F,0x1F,0x03,0x00,0x00,0x00,0x00},/*"V",86*/
	{0xF0,0xF0,0x00,0x00,0x80,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x10},
	{0x00,0xFF,0xFF,0xC0,0xFF,0x03,0x1F,0xFE,0xC0,0xFF,0x1F,0x00},
	{0x00,0x00,0x1F,0x1F,0x01,0x00,0x00,0x0F,0x1F,0x0F,0x00,0x00},/*"W",87*/
	{0x00,0x30,0xF0,0xE0,0x00,0x00,0x00,0x80,0xE0,0x70,0x10,0x00},
	{0x00,0x00,0x00,0x83,0xEF,0x7C,0x7E,0xE7,0x81,0x00,0x00,0x00},
	{0x10,0x1C,0x1F,0x07,0x01,0x00,0x00,0x01,0x0F,0x1E,0x18,0x00},/*"X",88*/
	{0x10,0x70,0xF0,0x80,0x00,0x00,0x00,0x00,0xC0,0xF0,0x30,0x00},
	{0x00,0x00,0x01,0x07,0x1E,0xF8,0xFC,0x0F,0x03,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},/*"Y",89*/
	{0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0xF0,0xF0,0x30,0x00},
	{0x00,0x00,0x00,0xC0,0xE0,0x78,0x1E,0x07,0x03,0x00,0x00,0x00},
	{0x00,0x1C,0x1F,0x1B,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00},/*"Z",90*/
	{0x00,0x00,0x00,0x00,0x00,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x7F,0x60,0x60,0x60,0x60,0x60,0x00},/*"[",91*/
	{0x00,0x10,0x70,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x03,0x0F,0x78,0xE0,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x3C,0x60,0x00,0x00},/*"\",92*/
	{0x00,0x0C,0x0C,0x0C,0x0C,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x60,0x60,0x60,0x60,0x7F,0x7F,0x00,0x00,0x00,0x00,0x00},/*"]",93*/
	{0x00,0x20,0x30,0x18,0x0C,0x04,0x0C,0x1C,0x18,0x20,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",94*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80},/*"_",95*/
	{0x00,0x00,0x00,0x00,0x04,0x0C,0x38,0x30,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",96*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x98,0x9C,0xCC,0xCC,0xCC,0x4C,0xFC,0xF8,0x00,0x00},
	{0x00,0x07,0x0F,0x19,0x18,0x18,0x08,0x0C,0x0F,0x1F,0x10,0x00},/*"a",97*/
	{0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xFF,0xFF,0x18,0x0C,0x04,0x0C,0x0C,0x7C,0xF8,0xC0,0x00},
	{0x00,0x1F,0x1F,0x0C,0x08,0x18,0x18,0x1C,0x0F,0x07,0x01,0x00},/*"b",98*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xF0,0xF8,0x1C,0x0C,0x0C,0x0C,0x0C,0x3C,0x38,0x00,0x00},
	{0x00,0x03,0x07,0x0C,0x18,0x18,0x18,0x18,0x0E,0x07,0x03,0x00},/*"c",99*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00},
	{0x00,0xF0,0xF8,0x1C,0x0C,0x04,0x0C,0x0C,0xFF,0xFF,0x00,0x00},
	{0x00,0x03,0x0F,0x0C,0x18,0x18,0x18,0x0C,0x1F,0x1F,0x00,0x00},/*"d",100*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xE0,0xF8,0x5C,0x4C,0x44,0x44,0x4C,0x7C,0x78,0x40,0x00},
	{0x00,0x03,0x07,0x0C,0x18,0x18,0x18,0x18,0x0E,0x06,0x02,0x00},/*"e",101*/
	{0x00,0x00,0x00,0x00,0xC0,0xE0,0x20,0x30,0x30,0x30,0x60,0x00},
	{0x00,0x0C,0x0C,0x0C,0xFF,0xFF,0x0C,0x0C,0x0C,0x0C,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00},/*"f",102*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0xF8,0xFC,0x8C,0x04,0x8C,0xFC,0xFC,0x04,0x04,0x00},
	{0x00,0x72,0xF7,0xCD,0x8D,0x8D,0x8D,0x89,0xC8,0x78,0x30,0x00},/*"g",103*/
	{0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xFF,0xFF,0x30,0x08,0x0C,0x04,0x0C,0x1C,0xF8,0xE0,0x00},
	{0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00},/*"h",104*/
	{0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},/*"i",105*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00},
	{0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0x7F,0x3F,0x00,0x00,0x00},/*"j",106*/
	{0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xFF,0xFF,0xC0,0xE0,0x70,0xF8,0x9C,0x0C,0x04,0x00,0x00},
	{0x00,0x1F,0x1F,0x01,0x00,0x00,0x01,0x03,0x0E,0x1C,0x10,0x00},/*"k",107*/
	{0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},/*"l",108*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0xFC,0xFC,0x18,0x0C,0x0C,0xFC,0xF8,0x08,0x0C,0x0C,0xFC,0x00},
	{0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x1F,0x00},/*"m",109*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xFC,0xFC,0x30,0x08,0x0C,0x04,0x0C,0x1C,0xF8,0xE0,0x00},
	{0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00},/*"n",110*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xF0,0xF8,0x1C,0x0C,0x0C,0x0C,0x0C,0x18,0xF8,0xE0,0x00},
	{0x00,0x03,0x07,0x0C,0x18,0x18,0x18,0x0C,0x0E,0x07,0x03,0x00},/*"o",111*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xFC,0xFC,0x18,0x0C,0x0C,0x0C,0x0C,0x78,0xF8,0xC0,0x00},
	{0x00,0xFF,0xFF,0x0C,0x08,0x18,0x18,0x1C,0x0F,0x07,0x01,0x00},/*"p",112*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xF0,0xF8,0x1C,0x0C,0x0C,0x0C,0x0C,0xFC,0xFC,0x00,0x00},
	{0x00,0x03,0x0F,0x0C,0x18,0x18,0x18,0x0C,0xFF,0xFF,0x00,0x00},/*"q",113*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0xFC,0xFC,0x70,0x18,0x08,0x0C,0x0C,0x00,0x00,0x00},
	{0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"r",114*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x78,0x7C,0xCC,0xC4,0xC4,0x8C,0x9C,0x18,0x00,0x00},
	{0x00,0x00,0x0E,0x0C,0x18,0x18,0x18,0x18,0x0F,0x0F,0x00,0x00},/*"s",115*/
	{0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x0C,0x0C,0x0C,0xFF,0xFF,0x0C,0x0C,0x0C,0x0C,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x07,0x0F,0x18,0x18,0x18,0x18,0x00,0x00},/*"t",116*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x00},
	{0x00,0x07,0x0F,0x1C,0x18,0x18,0x08,0x0C,0x07,0x1F,0x1F,0x00},/*"u",117*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x0C,0x7C,0xF0,0x80,0x00,0x00,0xC0,0xF8,0x3C,0x04,0x00},
	{0x00,0x00,0x00,0x01,0x0F,0x1C,0x1E,0x07,0x00,0x00,0x00,0x00},/*"v",118*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x0C,0xFC,0xE0,0x00,0xF0,0x3C,0xFC,0xC0,0x00,0xFC,0x7C,0x00},
	{0x00,0x00,0x1F,0x1E,0x07,0x00,0x00,0x1F,0x1F,0x07,0x00,0x00},/*"w",119*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x04,0x0C,0x1C,0xF0,0xE0,0xE0,0x38,0x1C,0x04,0x00,0x00},
	{0x00,0x10,0x1C,0x0E,0x03,0x01,0x03,0x07,0x0E,0x18,0x10,0x00},/*"x",120*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x0C,0x7C,0xF0,0x80,0x00,0x00,0xC0,0xF8,0x3C,0x04,0x00},
	{0x00,0x00,0xC0,0xC1,0xCF,0x7E,0x3E,0x07,0x00,0x00,0x00,0x00},/*"y",121*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x0C,0x0C,0x8C,0xCC,0xEC,0x3C,0x1C,0x0C,0x00,0x00},
	{0x00,0x18,0x1C,0x1F,0x1B,0x19,0x18,0x18,0x18,0x18,0x00,0x00},/*"z",122*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x0C,0x04,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x10,0x38,0xFF,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x60,0x40,0x00,0x00},/*"{",123*/
	{0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00},/*"|",124*/
	{0x00,0x04,0x04,0xFC,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0xCF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x40,0x40,0x7F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"}",125*/
	{0x00,0x08,0x0C,0x06,0x06,0x06,0x0C,0x18,0x18,0x0C,0x06,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",126*/
};


#endif



//
// Tomato Media Codec
// 常量定义
// 作者：SunnyCase
// 创建时间：2015-09-08
//
#pragma once
#include <guiddef.h>

// {9E794C01-9090-401C-A71F-0E29DB46A8E7}		MFVideoFormat_Theora
DEFINE_GUID(MFVideoFormat_Theora,
	0x9e794c01, 0x9090, 0x401c, 0xa7, 0x1f, 0xe, 0x29, 0xdb, 0x46, 0xa8, 0xe7);

// {4F9A2969-85A4-430A-82DE-0B1AE5523E85}		MF_MT_OGG_PACKET_NO
// Type: UINT64
DEFINE_GUID(MF_MT_OGG_PACKET_NO,
	0x4f9a2969, 0x85a4, 0x430a, 0x82, 0xde, 0xb, 0x1a, 0xe5, 0x52, 0x3e, 0x85);

// {87FC217D-0B2B-4BC2-848A-258E7B271670}		MF_MT_OGG_PACKET_BOS
// Type: UINT32
DEFINE_GUID(MF_MT_OGG_PACKET_BOS,
	0x87fc217d, 0xb2b, 0x4bc2, 0x84, 0x8a, 0x25, 0x8e, 0x7b, 0x27, 0x16, 0x70);

// {7CA0A9A4-3B78-4235-A903-D8A1940B2A6E}		MF_MT_OGG_PACKET_EOS
// Type: UINT32
DEFINE_GUID(MF_MT_OGG_PACKET_EOS,
	0x7ca0a9a4, 0x3b78, 0x4235, 0xa9, 0x3, 0xd8, 0xa1, 0x94, 0xb, 0x2a, 0x6e);

// {51412D64-82DB-46C3-96F4-FDD81E012FDF}		MF_MT_THEORA_PIXEL_FORMAT
// Type: UINT32
DEFINE_GUID(MF_MT_THEORA_PIXEL_FORMAT,
	0x51412d64, 0x82db, 0x46c3, 0x96, 0xf4, 0xfd, 0xd8, 0x1e, 0x1, 0x2f, 0xdf);

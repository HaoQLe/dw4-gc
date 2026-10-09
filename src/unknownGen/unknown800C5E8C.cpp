#include <unknownGen.h>
#include <meta/igTextureSwapAttr.h>
#include <meta/igViewportAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800FC960(void *,int,void *,void *,void *,void *);
void fn_800FCA28(void *,int,void *,void *,void *,void *);
void fn_800FCA7C(void *,void *,void *,void *);
extern void *lbl_80562404;
extern void *lbl_80562410;
extern void *lbl_80562430;
extern void *lbl_80562438;
extern void *lbl_8056246C;
extern void *lbl_80562474;
extern void *lbl_8056247C;
extern void *lbl_805624A0;
extern void *lbl_805624AC;
extern void *lbl_80562A88;
extern void *lbl_80562A9C;
extern void *lbl_80562AAC;
extern void *lbl_80562AB8;
extern void *lbl_80562AC4;
extern void *lbl_80562AD0;
}
extern "C" {
void igTextureSwapAttr_virtual68(int p0,int p1){
 void *local1;
 void *local0;
 fn_800FCA7C((void *)p1,(void *)reinterpret_cast<Meta::igTextureSwapAttr *>((void *)p0)->_unitID,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+13)=(unsigned char)(int)local0;
}
void igTextureSwapTableAttr_virtual60(int p0,int p1){
 fn_800FC960((void *)p1,0,(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+12),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+16),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+20),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+24));
 fn_800FC960((void *)p1,1,(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+13),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+17),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+21),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+25));
 fn_800FC960((void *)p1,2,(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+14),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+18),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+22),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+26));
 fn_800FC960((void *)p1,3,(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+15),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+19),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+23),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+27));
}
void igTextureSwapTableAttr_virtual68(int p0,int p1){
 void *local3;
 void *local2;
 void *local1;
 void *local0;
 fn_800FCA28((void *)p1,0,&local3,&local2,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=(unsigned char)(int)local3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=(unsigned char)(int)local2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+24)=(unsigned char)(int)local0;
 fn_800FCA28((void *)p1,1,&local3,&local2,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+13)=(unsigned char)(int)local3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+17)=(unsigned char)(int)local2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+21)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+25)=(unsigned char)(int)local0;
 fn_800FCA28((void *)p1,2,&local3,&local2,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+14)=(unsigned char)(int)local3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+18)=(unsigned char)(int)local2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+22)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+26)=(unsigned char)(int)local0;
 fn_800FCA28((void *)p1,3,&local3,&local2,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+15)=(unsigned char)(int)local3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+19)=(unsigned char)(int)local2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+23)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+27)=(unsigned char)(int)local0;
}
void *igTextureSwapTableAttr_virtual58(){return lbl_80562A88;}
void fn_800C60E8(){}
void fn_800C60EC(){}
void fn_800C60F0(){}
void fn_800C60F4(){}
int fn_800C60F8(){return 1;}
void *igTextureSwapAttr_virtual58(){return lbl_80562A9C;}
void igTextureSwapAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void igTextureSwapAttr_virtual84(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+13)=value;}
void *igTextureStageConstantColorSelectAttr_virtual58(){return lbl_80562AAC;}
void *igTextureStageConstantAlphaSelectAttr_virtual58(){return lbl_80562AB8;}
void *igTextureEnvironmentColorAttr_virtual58(){return lbl_80562AC4;}
int igTextureEnvironmentColorAttr_virtual7C(){return 4;}
void *igTextureConstantAttr_virtual58(){return lbl_80562AD0;}
int igTextureConstantAttr_virtual7C(){return 4;}
void *igVisualContextAttrDefaultManager_virtual58(){return lbl_80562404;}
void *igViewportAttr_virtual58(){return lbl_80562410;}
void *igViewportAttr_virtual80(int p0,int p1,int p2,int p3,int p4,float f0,float f1){
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_x=(int)(void *)p1;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_y=(int)(void *)p2;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_w=(int)(void *)p3;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_h=(int)(void *)p4;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_nearZ=f0;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_farZ=f1;
 return (void *)p0;
}
void *igVertexShaderBindAttr_virtual58(){return lbl_80562430;}
void *igVertexShaderAttr_virtual58(){return lbl_80562438;}
void *igVertexPipelineModeAttr_virtual58(){return lbl_8056246C;}
void *igVertexBlendStateAttr_virtual58(){return lbl_80562474;}
void *igVertexBlendMatrixListAttr_virtual58(){return lbl_8056247C;}
void *igVertexBlendMatrixAttr_virtual58(){return lbl_805624A0;}
void *igVectorConstantAttr_virtual58(){return lbl_805624AC;}
}
#pragma pop

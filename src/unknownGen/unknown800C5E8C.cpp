#include <unknownGen.h>
#include <meta/igTextureSwapAttr.h>
#include <meta/igViewportAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800FC960(void *,int,void *,void *,void *,void *);
void fn_800FCA28(void *,int,void *,void *,void *,void *);
void fn_800FCA7C(void *,void *,void *,void *);
extern void *igVisualContextAttrDefaultManager_meta;
extern void *igViewportAttr_meta;
extern void *igVertexShaderBindAttr_meta;
extern void *igVertexShaderAttr_meta;
extern void *igVertexPipelineModeAttr_meta;
extern void *igVertexBlendStateAttr_meta;
extern void *igVertexBlendMatrixListAttr_meta;
extern void *igVertexBlendMatrixAttr_meta;
extern void *igVectorConstantAttr_meta;
extern void *igTextureSwapTableAttr_meta;
extern void *igTextureSwapAttr_meta;
extern void *igTextureStageConstantColorSelectAttr_meta;
extern void *igTextureStageConstantAlphaSelectAttr_meta;
extern void *igTextureEnvironmentColorAttr_meta;
extern void *igTextureConstantAttr_meta;
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
void *igTextureSwapTableAttr_virtual58(){return igTextureSwapTableAttr_meta;}
void fn_800C60E8(){}
void fn_800C60EC(){}
void fn_800C60F0(){}
void fn_800C60F4(){}
int fn_800C60F8(){return 1;}
void *igTextureSwapAttr_virtual58(){return igTextureSwapAttr_meta;}
void igTextureSwapAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void igTextureSwapAttr_virtual84(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+13)=value;}
void *igTextureStageConstantColorSelectAttr_virtual58(){return igTextureStageConstantColorSelectAttr_meta;}
void *igTextureStageConstantAlphaSelectAttr_virtual58(){return igTextureStageConstantAlphaSelectAttr_meta;}
void *igTextureEnvironmentColorAttr_virtual58(){return igTextureEnvironmentColorAttr_meta;}
int igTextureEnvironmentColorAttr_virtual7C(){return 4;}
void *igTextureConstantAttr_virtual58(){return igTextureConstantAttr_meta;}
int igTextureConstantAttr_virtual7C(){return 4;}
void *igVisualContextAttrDefaultManager_virtual58(){return igVisualContextAttrDefaultManager_meta;}
void *igViewportAttr_virtual58(){return igViewportAttr_meta;}
void *igViewportAttr_virtual80(int p0,int p1,int p2,int p3,int p4,float f0,float f1){
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_x=(int)(void *)p1;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_y=(int)(void *)p2;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_w=(int)(void *)p3;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_h=(int)(void *)p4;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_nearZ=f0;
 reinterpret_cast<Meta::igViewportAttr *>((void *)p0)->_farZ=f1;
 return (void *)p0;
}
void *igVertexShaderBindAttr_virtual58(){return igVertexShaderBindAttr_meta;}
void *igVertexShaderAttr_virtual58(){return igVertexShaderAttr_meta;}
void *igVertexPipelineModeAttr_virtual58(){return igVertexPipelineModeAttr_meta;}
void *igVertexBlendStateAttr_virtual58(){return igVertexBlendStateAttr_meta;}
void *igVertexBlendMatrixListAttr_virtual58(){return igVertexBlendMatrixListAttr_meta;}
void *igVertexBlendMatrixAttr_virtual58(){return igVertexBlendMatrixAttr_meta;}
void *igVectorConstantAttr_virtual58(){return igVectorConstantAttr_meta;}
}
#pragma pop

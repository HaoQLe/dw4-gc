#include <unknownGen.h>
#include <meta/beNDMWMdlItem.h>
#include <meta/igViewerSceneInfoManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_802F24B0(void *);
void fn_80305308(void *,void *,void *);
extern char lbl_8045C404[];
extern void *lbl_8055C788;
}
extern "C" {
void beNDMWMdlItem_virtual9C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305308(reinterpret_cast<Meta::beNDMWMdlItem *>((void *)p0)->_messenger,(void *)p1,lbl_8045C404);
}
void beNDMWMdlItem_virtual64(int p0){
 fn_802F24B0((void *)p0);
 void *value0=fn_8028A730(reinterpret_cast<Meta::beNDMWMdlItem *>((void *)p0)->_insight,lbl_8055C788);
 reinterpret_cast<Meta::beNDMWMdlItem *>((void *)p0)->_viewerSIManager=(Meta::igViewerSceneInfoManager *)value0;
}
}
#pragma pop

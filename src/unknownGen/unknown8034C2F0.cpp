#include <unknownGen.h>
#include <meta/beNDMWGameRam.h>
#include <meta/beNDMWMdlPlayer.h>
#include <meta/bePadManager.h>
#include <meta/igViewerSceneInfoManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_802F24B0(void *);
extern void *lbl_80534AAC;
extern void *lbl_805367F0;
extern void *lbl_8055C788;
}
extern "C" {
void beNDMWMdlPlayer_virtual64(int p0){
 fn_802F24B0((void *)p0);
 void *value0=fn_8028A730(reinterpret_cast<Meta::beNDMWMdlPlayer *>((void *)p0)->_insight,lbl_805367F0);
 reinterpret_cast<Meta::beNDMWMdlPlayer *>((void *)p0)->_gameRam=(Meta::beNDMWGameRam *)value0;
 void *value1=fn_8028A730(reinterpret_cast<Meta::beNDMWMdlPlayer *>((void *)p0)->_insight,lbl_80534AAC);
 reinterpret_cast<Meta::beNDMWMdlPlayer *>((void *)p0)->_padManager=(Meta::bePadManager *)value1;
 void *value2=fn_8028A730(reinterpret_cast<Meta::beNDMWMdlPlayer *>((void *)p0)->_insight,lbl_8055C788);
 reinterpret_cast<Meta::beNDMWMdlPlayer *>((void *)p0)->_viewerSIManager=(Meta::igViewerSceneInfoManager *)value2;
}
}
#pragma pop

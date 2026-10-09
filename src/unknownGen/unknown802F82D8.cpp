#include <unknownGen.h>
#include <meta/beFileListInfoManager.h>
#include <meta/beMessenger.h>
#include <meta/beSystem.h>
#include <meta/igViewerSceneInfoManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
void fn_8028A400(void *,void *);
void *fn_8028A730(void *,void *);
extern void *lbl_805346A8;
extern void *lbl_80534FBC;
extern void *lbl_8055C788;
}
extern "C" {
void beFileListInfoManager_virtual5C(int p0){
 fn_8028A398(reinterpret_cast<Meta::beFileListInfoManager *>((void *)p0)->_insight,(void *)p0);
}
void beFileListInfoManager_virtual60(int p0){
 fn_8028A400(reinterpret_cast<Meta::beFileListInfoManager *>((void *)p0)->_insight,(void *)p0);
}
void beFileListInfoManager_virtual64(int p0){
 void *value0=fn_8028A730(reinterpret_cast<Meta::beFileListInfoManager *>((void *)p0)->_insight,lbl_805346A8);
 reinterpret_cast<Meta::beFileListInfoManager *>((void *)p0)->_system=(Meta::beSystem *)value0;
 void *value1=fn_8028A730(reinterpret_cast<Meta::beFileListInfoManager *>((void *)p0)->_insight,lbl_80534FBC);
 reinterpret_cast<Meta::beFileListInfoManager *>((void *)p0)->_messenger=(Meta::beMessenger *)value1;
 void *value2=fn_8028A730(reinterpret_cast<Meta::beFileListInfoManager *>((void *)p0)->_insight,lbl_8055C788);
 reinterpret_cast<Meta::beFileListInfoManager *>((void *)p0)->_sceneInfoManager=(Meta::igViewerSceneInfoManager *)value2;
}
}
#pragma pop

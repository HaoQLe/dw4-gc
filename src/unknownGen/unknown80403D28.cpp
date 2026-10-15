#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void fn_80403D78(void *,short);
void fn_80404544(void *);
void igViewerSceneInfoManager_arkRegister();
extern char lbl_80461E48[];
extern char lbl_804F0060[];
extern char lbl_804F006C[];
extern void *lbl_8055C784;
extern void *igViewerSceneInfoManager_meta;
extern void *lbl_805621F4;
}
struct UnknownGenObject80403D28 {
 void *unknown00;
 char unknown04[204];
};
extern "C" {
void *fn_80403D28(){
 UnknownGenObject80403D28 object;
 fn_80404544(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80403D78(&object,-1);
 return result;
}
}
#pragma pop

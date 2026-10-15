#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800C6F28();
void igDataList_register();
extern char igDataList_vtable[];
extern char igGamecubeAudioSourceList_className[];
extern char igGamecubeAudioSourceList_vtable[];
extern char lbl_8047EB58[];
extern void *lbl_805621F4;
extern void *igGamecubeAudioSourceList_meta;
void *igGamecubeAudioSourceList_getMeta();
void *igGamecubeAudioSourceList_vtableRead();
void igGamecubeAudioSourceList_arkRegister();
void igGamecubeAudioSourceList_register();
void *igGamecubeAudioSourceList_getMetaCall();
}
struct UnknownGenObject800C749C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800C7424(){
 if(!igGamecubeAudioSourceList_meta) igGamecubeAudioSourceList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGamecubeAudioSourceList_meta;
}
void *igGamecubeAudioSourceList_getMeta(){
 if(!igGamecubeAudioSourceList_meta || !(reinterpret_cast<unsigned int *>(igGamecubeAudioSourceList_meta)[0x24/4]&4)) igGamecubeAudioSourceList_arkRegister();
 return igGamecubeAudioSourceList_meta;
}
void *igGamecubeAudioSourceList_vtableRead(){
 UnknownGenObject800C749C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_8047EB58;
 object.unknown00=igGamecubeAudioSourceList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeAudioSourceList_arkRegister(){
 meta_registerNow((int)igGamecubeAudioSourceList_register);
}
void igGamecubeAudioSourceList_register(){
 fn_800C6F28();
 meta_registerClass(0,(int)&igGamecubeAudioSourceList_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igGamecubeAudioSourceList_getMetaCall,(int)igGamecubeAudioSourceList_className,20,(int)igGamecubeAudioSourceList_vtableRead,0,0,0);
}
void *igGamecubeAudioSourceList_getMetaCall(){return igGamecubeAudioSourceList_getMeta();}
}
#pragma pop

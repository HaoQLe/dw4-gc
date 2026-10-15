#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80284540();
void fn_80402E28();
void igMessage_register();
void igViewerModeChangeMessage_fieldInit();
extern char igViewerModeChangeMessage_className[];
extern char igMessage_vtable[];
extern char igViewerModeChangeMessage_vtable[];
extern void *igViewerModeChangeMessage_meta;
extern void *lbl_805621F4;
void *igViewerModeChangeMessage_getMeta();
void *igViewerModeChangeMessage_vtableRead();
void igViewerModeChangeMessage_arkRegister();
void igViewerModeChangeMessage_register();
void *igViewerModeChangeMessage_getMetaCall();
}
struct UnknownGenRoot80404CEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80404CEC(){igObject_construct(this);}
};
struct UnknownGenObject80404CEC : UnknownGenRoot80404CEC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80404CEC(){unknown00=igViewerModeChangeMessage_vtable;}
};
extern "C" {
void *igViewerModeChangeMessage_metaObject(){
 if(!igViewerModeChangeMessage_meta) igViewerModeChangeMessage_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewerModeChangeMessage_meta;
}
void *igViewerModeChangeMessage_getMeta(){
 if(!igViewerModeChangeMessage_meta || !(reinterpret_cast<unsigned int *>(igViewerModeChangeMessage_meta)[0x24/4]&4)) igViewerModeChangeMessage_arkRegister();
 return igViewerModeChangeMessage_meta;
}
void *igViewerModeChangeMessage_vtableRead(){
 UnknownGenObject80404CEC object;
 object.unknown00=igMessage_vtable;
 object.unknown00=igViewerModeChangeMessage_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerModeChangeMessage_arkRegister(){
 meta_registerNow((int)igViewerModeChangeMessage_register);
}
void igViewerModeChangeMessage_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerModeChangeMessage_meta,(int)igMessage_register,(int)fn_80284540,(int)igViewerModeChangeMessage_getMetaCall,(int)igViewerModeChangeMessage_className,16,(int)igViewerModeChangeMessage_vtableRead,(int)igViewerModeChangeMessage_fieldInit,0,0);
}
void *igViewerModeChangeMessage_getMetaCall(){return igViewerModeChangeMessage_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void igCustomMatrixState_arkRegister();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCustomMatrixStateList_className[];
extern char igCustomMatrixStateList_vtable[];
extern char lbl_804931CC[];
extern char igCustomMatrixStateList_dependencies[8];
extern void *igCustomMatrixStateList_meta;
extern void *igCustomMatrixState_meta;
void *igCustomMatrixStateList_getMeta();
void *igCustomMatrixStateList_vtableRead();
void igCustomMatrixStateList_arkRegister();
void igCustomMatrixStateList_register();
void *igCustomMatrixStateList_getMetaCall();
}
struct UnknownGenObject800D5234_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igCustomMatrixState_create(void *object){
 igCustomMatrixState_arkRegister();
 return meta_createInstance(igCustomMatrixState_meta,object);
}
void *igCustomMatrixState_getMeta(){
 if(!igCustomMatrixState_meta || !(reinterpret_cast<unsigned int *>(igCustomMatrixState_meta)[0x24/4]&4)) igCustomMatrixState_arkRegister();
 return igCustomMatrixState_meta;
}
}
#pragma pop

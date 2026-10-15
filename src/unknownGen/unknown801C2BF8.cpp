#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801BC288();
void igAnimationSequence_register();
void igCompressedAnimationSequenceQS_fieldInit();
extern char igCompressedAnimationSequenceQS_className[];
extern char igCompressedAnimationSequenceQS_vtable[];
extern char lbl_804B796C[];
extern char lbl_804BA150[];
extern char igCompressedAnimationSequenceQS_dependencies[8];
extern void *igCompressedAnimationSequenceQS_meta;
void *igCompressedAnimationSequenceQS_getMeta();
void *igCompressedAnimationSequenceQS_vtableRead();
void igCompressedAnimationSequenceQS_arkRegister();
void igCompressedAnimationSequenceQS_register();
void *igCompressedAnimationSequenceQS_getMetaCall();
}
struct UnknownGenRoot801C2C6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C2C6C(){igObject_construct(this);}
};
struct UnknownGenObject801C2C6C : UnknownGenRoot801C2C6C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[52];
 inline ~UnknownGenObject801C2C6C(){unknown00=igCompressedAnimationSequenceQS_vtable;}
};
extern "C" {
void *igCompressedAnimationSequenceQS_create(void *object){
 igCompressedAnimationSequenceQS_arkRegister();
 return meta_createInstance(igCompressedAnimationSequenceQS_meta,object);
}
void *igCompressedAnimationSequenceQS_getMeta(){
 if(!igCompressedAnimationSequenceQS_meta || !(reinterpret_cast<unsigned int *>(igCompressedAnimationSequenceQS_meta)[0x24/4]&4)) igCompressedAnimationSequenceQS_arkRegister();
 return igCompressedAnimationSequenceQS_meta;
}
void *igCompressedAnimationSequenceQS_vtableRead(){
 UnknownGenObject801C2C6C object;
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B796C;
 object.unknown00=igCompressedAnimationSequenceQS_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCompressedAnimationSequenceQS_arkRegister(){
 meta_registerNow((int)igCompressedAnimationSequenceQS_register);
}
void igCompressedAnimationSequenceQS_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCompressedAnimationSequenceQS_meta,(int)igAnimationSequence_register,(int)fn_801BC288,(int)igCompressedAnimationSequenceQS_getMetaCall,(int)igCompressedAnimationSequenceQS_className,64,(int)igCompressedAnimationSequenceQS_vtableRead,(int)igCompressedAnimationSequenceQS_fieldInit,0,(int)igCompressedAnimationSequenceQS_dependencies);
}
void *igCompressedAnimationSequenceQS_getMetaCall(){return igCompressedAnimationSequenceQS_getMeta();}
}
#pragma pop

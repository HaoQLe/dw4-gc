#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igCompressedAnimationSequenceQS_register();
void igCompressedBezierAnimationSequenceQS_fieldInit();
extern char igCompressedBezierAnimationSequenceQS_className[];
extern char igCompressedBezierAnimationSequenceQS_vtable[];
extern char igCompressedAnimationSequenceQS_vtable[];
extern char lbl_804B796C[];
extern char lbl_804BA150[];
extern char igCompressedBezierAnimationSequenceQS_dependencies[8];
extern void *igCompressedBezierAnimationSequenceQS_meta;
extern void *igCompressedAnimationSequenceQS_meta;
void *igCompressedBezierAnimationSequenceQS_getMeta();
void *igCompressedBezierAnimationSequenceQS_vtableRead();
void igCompressedBezierAnimationSequenceQS_arkRegister();
void igCompressedBezierAnimationSequenceQS_register();
void *igCompressedBezierAnimationSequenceQS_getMetaCall();
void *igCompressedBezierAnimationSequenceQS_parentMeta();
}
struct UnknownGenRoot801C2944 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C2944(){igObject_construct(this);}
};
struct UnknownGenObject801C2944_0 : UnknownGenRoot801C2944 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C2944_0(){unknown00=igCompressedAnimationSequenceQS_vtable;}
};
struct UnknownGenObject801C2944 : UnknownGenObject801C2944_0 {
 char unknown14[44];
 UnknownGenRefMember unknown40;
 char unknown44[20];
 inline ~UnknownGenObject801C2944(){unknown00=igCompressedBezierAnimationSequenceQS_vtable;}
};
extern "C" {
void *igCompressedBezierAnimationSequenceQS_create(void *object){
 igCompressedBezierAnimationSequenceQS_arkRegister();
 return meta_createInstance(igCompressedBezierAnimationSequenceQS_meta,object);
}
void *igCompressedBezierAnimationSequenceQS_getMeta(){
 if(!igCompressedBezierAnimationSequenceQS_meta || !(reinterpret_cast<unsigned int *>(igCompressedBezierAnimationSequenceQS_meta)[0x24/4]&4)) igCompressedBezierAnimationSequenceQS_arkRegister();
 return igCompressedBezierAnimationSequenceQS_meta;
}
void *igCompressedBezierAnimationSequenceQS_vtableRead(){
 UnknownGenObject801C2944 object;
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B796C;
 object.unknown00=igCompressedAnimationSequenceQS_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igCompressedBezierAnimationSequenceQS_vtable;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCompressedBezierAnimationSequenceQS_arkRegister(){
 meta_registerNow((int)igCompressedBezierAnimationSequenceQS_register);
}
void igCompressedBezierAnimationSequenceQS_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCompressedBezierAnimationSequenceQS_meta,(int)igCompressedAnimationSequenceQS_register,(int)igCompressedBezierAnimationSequenceQS_parentMeta,(int)igCompressedBezierAnimationSequenceQS_getMetaCall,(int)igCompressedBezierAnimationSequenceQS_className,80,(int)igCompressedBezierAnimationSequenceQS_vtableRead,(int)igCompressedBezierAnimationSequenceQS_fieldInit,0,(int)igCompressedBezierAnimationSequenceQS_dependencies);
}
void *igCompressedBezierAnimationSequenceQS_getMetaCall(){return igCompressedBezierAnimationSequenceQS_getMeta();}
void *igCompressedBezierAnimationSequenceQS_parentMeta(){return igCompressedAnimationSequenceQS_meta;}
}
#pragma pop

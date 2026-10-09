#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801BC288();
void igAnimationSequence_register();
void igCompressedAnimationSequenceQS_fieldInit();
extern char lbl_804AFFBC[];
extern char lbl_804B4F7C[];
extern char lbl_804B796C[];
extern char lbl_804BA150[];
extern char lbl_805606E4[8];
extern void *lbl_80565030;
void *igCompressedAnimationSequenceQS_getMeta();
void *igCompressedAnimationSequenceQS_vtableRead();
void fn_801C2D84();
void igCompressedAnimationSequenceQS_register();
void *igCompressedAnimationSequenceQS_getMetaCall();
}
struct UnknownGenRoot801C2C6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C2C6C(){fn_8006665C(this);}
};
struct UnknownGenObject801C2C6C : UnknownGenRoot801C2C6C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[52];
 inline ~UnknownGenObject801C2C6C(){unknown00=lbl_804B4F7C;}
};
extern "C" {
void *fn_801C2BF8(void *object){
 fn_801C2D84();
 return fn_8006546C(lbl_80565030,object);
}
void *igCompressedAnimationSequenceQS_getMeta(){
 if(!lbl_80565030 || !(reinterpret_cast<unsigned int *>(lbl_80565030)[0x24/4]&4)) fn_801C2D84();
 return lbl_80565030;
}
void *igCompressedAnimationSequenceQS_vtableRead(){
 UnknownGenObject801C2C6C object;
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B796C;
 object.unknown00=lbl_804B4F7C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C2D84(){
 fn_80066188((int)igCompressedAnimationSequenceQS_register);
}
void igCompressedAnimationSequenceQS_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565030,(int)igAnimationSequence_register,(int)fn_801BC288,(int)igCompressedAnimationSequenceQS_getMetaCall,(int)lbl_804AFFBC,64,(int)igCompressedAnimationSequenceQS_vtableRead,(int)igCompressedAnimationSequenceQS_fieldInit,0,(int)lbl_805606E4);
}
void *igCompressedAnimationSequenceQS_getMetaCall(){return igCompressedAnimationSequenceQS_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igCompressedTransformSequence1_5Data_fieldInit();
void igObject_register();
extern char lbl_804AFD84[];
extern char lbl_804B71E8[];
extern char lbl_805606D4[8];
extern void *lbl_805621F4;
extern void *lbl_80564FF4;
void *igCompressedTransformSequence1_5Data_getMeta();
void *igCompressedTransformSequence1_5Data_vtableRead();
void fn_801C2744();
void igCompressedTransformSequence1_5Data_register();
void *igCompressedTransformSequence1_5Data_getMetaCall();
}
struct UnknownGenRoot801C260C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C260C(){fn_8006665C(this);}
};
struct UnknownGenObject801C260C : UnknownGenRoot801C260C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject801C260C(){unknown00=lbl_804B71E8;}
};
extern "C" {
void *fn_801C2594(){
 if(!lbl_80564FF4) lbl_80564FF4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564FF4;
}
void *igCompressedTransformSequence1_5Data_getMeta(){
 if(!lbl_80564FF4 || !(reinterpret_cast<unsigned int *>(lbl_80564FF4)[0x24/4]&4)) fn_801C2744();
 return lbl_80564FF4;
}
void *igCompressedTransformSequence1_5Data_vtableRead(){
 UnknownGenObject801C260C object;
 object.unknown00=lbl_804B71E8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C2744(){
 fn_80066188((int)igCompressedTransformSequence1_5Data_register);
}
void igCompressedTransformSequence1_5Data_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564FF4,(int)igObject_register,(int)fn_800237D0,(int)igCompressedTransformSequence1_5Data_getMetaCall,(int)lbl_804AFD84,48,(int)igCompressedTransformSequence1_5Data_vtableRead,(int)igCompressedTransformSequence1_5Data_fieldInit,0,(int)lbl_805606D4);
}
void *igCompressedTransformSequence1_5Data_getMetaCall(){return igCompressedTransformSequence1_5Data_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void fn_80284E44();
void fn_802859B0();
extern char lbl_80416AA0[];
extern char lbl_804CB0E8[];
extern char lbl_804CB6C8[];
extern char lbl_804CBF40[];
extern void *lbl_80515C8C;
extern void *lbl_80515CB0;
void *fn_802857F8();
void *fn_80285844();
void fn_802858DC();
void fn_80285904();
void *fn_80285980();
void *fn_802859A0();
}
struct UnknownGenRoot80285844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285844(){fn_8006665C(this);}
};
struct UnknownGenObject80285844 : UnknownGenRoot80285844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject80285844(){unknown00=lbl_804CBF40;}
};
extern "C" {
void *fn_802857B8(void *object){
 fn_802858DC();
 return fn_8006546C(lbl_80515CB0,object);
}
void *fn_802857F8(){
 if(!lbl_80515CB0 || !(reinterpret_cast<unsigned int *>(lbl_80515CB0)[0x24/4]&4)) fn_802858DC();
 return lbl_80515CB0;
}
void *fn_80285844(){
 UnknownGenObject80285844 object;
 object.unknown00=lbl_804CB6C8;
 object.unknown00=lbl_804CBF40;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802858DC(){
 fn_80066188((int)fn_80285904);
}
void fn_80285904(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515CB0,(int)fn_80284E44,(int)fn_802859A0,(int)fn_80285980,(int)lbl_80416AA0,24,(int)fn_80285844,(int)fn_802859B0,0,(int)lbl_804CB0E8);
}
void *fn_80285980(){return fn_802857F8();}
void *fn_802859A0(){return lbl_80515C8C;}
}
#pragma pop
